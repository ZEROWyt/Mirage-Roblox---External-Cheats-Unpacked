sub_14004A0E0(v443);
  v446 = 0;
  v444 = 5;
  v445 = 5;
  v447 = 0x3F99999A;
  sub_140052A50();
  *(_QWORD *)&hInstance.cbClsExtra = 0i64;
  hInstance.cbSize = 0x50;
  hInstance.hbrBackground = CreateSolidBrush(0);
  hInstance.hCursor = LoadCursorA(0i64, (LPCSTR)0x7F00);
  hInstance.hIcon = LoadIconA(0i64, (LPCSTR)0x7F00);
  hInstance.hIconSm = LoadIconA(0i64, (LPCSTR)0x7F00);
  hInstance.hInstance = GetModuleHandleA(0i64);
  hInstance.lpfnWndProc = (WNDPROC)sub_14006C5C0;
  hInstance.lpszClassName = "Mirage";
  hInstance.lpszMenuName = 0i64;
  hInstance.style = 3;
  RegisterClassExA(&hInstance);
  nHeight = GetSystemMetrics(1);
  nWidth = GetSystemMetrics(0);
  v2 = CreateWindowExA(
         0x8000028u,
         hInstance.lpszClassName,
         "Mirage",
         0x80000000,
         0,
         0,
         nWidth,
         nHeight,
         0i64,
         0i64,
         hInstance.hInstance,
         0i64);
  SetLayeredWindowAttributes(v2, 0, 0xFFu, 2u);
  pMarInset = (MARGINS)_mm_load_si128((const __m128i *)&xmmword_140089700);
  DwmExtendFrameIntoClientArea(v2, &pMarInset);
  if ( !(unsigned __int8)sub_14006C390(v2) )
  {
    sub_14006C540();
    UnregisterClassA(hInstance.lpszClassName, hInstance.hInstance);
    return 0;
  }
  ShowWindow(v2, 5);
  UpdateWindow(v2);
  sub_140026340(0i64);
  sub_140045A00(0i64);
  sub_140045C90(0i64);
  v4 = (char *)Block;
  *((_QWORD *)Block + 4) = 0i64;
  v5 = _mm_load_si128((const __m128i *)&xmmword_140089CF0);
  *(__m128i *)(v4 + 0x3AF4) = v5;
  *(__m128i *)(v4 + 0x3A64) = v5;
  *(__m128i *)(v4 + 0x3B84) = v5;
  *(__m128i *)(v4 + 0x3BA4) = v5;
  sub_1400508C0(v2, 0i64);
  sub_1400505F0(ppDevice, ppImmediateContext);
  v6 = 0;
  sub_140001930(&v342);
  if ( dword_14009A988 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4i64) )
  {
    sub_140073F88(&dword_14009A988);
    if ( dword_14009A988 == 0xFFFFFFFF )
    {
      sub_14006C700(&qword_14009A990);
      atexit(sub_140076F80);
      Init_thread_footer(&dword_14009A988);
    }
  }
  v7 = _mm_load_si128((const __m128i *)&xmmword_140089D50);
  while ( 1 )
  {
    if ( PeekMessageA(&Msg, 0i64, 0, 0, 1u) )
    {
      do
      {
        TranslateMessage(&Msg);
        DispatchMessageA(&Msg);
        if ( Msg.message == 0x12 )
          v6 = 1;
      }
      while ( PeekMessageA(&Msg, 0i64, 0, 0, 1u) );
      if ( v6 )
        break;
    }
    sub_14006C210(v2);
    if ( (GetAsyncKeyState(0x2D) & 1) != 0 )
      byte_14009A884 = byte_14009A884 == 0;
    sub_140001930(&v341);
    *(_QWORD *)&v377[0] = v342;
    v247 = v341;
    sub_140002A00(v369, &v247, v377);
    v8 = *(float *)sub_140011CC0(v368, v369);
    v342 = v341;
    v9 = v8 * 4.5;
    v10 = *(float *)&dword_14009A880;
    if ( byte_14009A884 )
    {
      *(float *)&dword_14009A880 = *(float *)&dword_14009A880 + v9;
      if ( (float)(v10 + v9) > 1.0 )
        dword_14009A880 = 0x3F800000;
    }
    else
    {
      *(float *)&dword_14009A880 = *(float *)&dword_14009A880 - v9;
      if ( (float)(v10 - v9) < 0.0 )
        dword_14009A880 = 0;
    }
    sub_140050890();
    sub_1400513A0();
    sub_140028DD0();
    v11 = FindWindowA(0i64, "Roblox");
    if ( GetForegroundWindow() == v11 || GetForegroundWindow() == v2 )
    {
      v12 = (char *)Block;
      *((_DWORD *)Block + 0x1276) = 0x44480000;
      *((_DWORD *)v12 + 0x1277) = 0x44160000;
      *((_DWORD *)v12 + 0x1270) = 1;
      *((_DWORD *)v12 + 0x126E) |= 0x12u;
      *(__m128i *)(v12 + 0x49F8) = _mm_load_si128((const __m128i *)&xmmword_140089DC0);
      *((_QWORD *)v12 + 0x941) = 0i64;
      *((_QWORD *)v12 + 0x942) = 0i64;
      sub_14002E580("mirage_e", 0i64, 0x3028Fi64);
      switch ( qword_14009A5C8 )
      {
        case 0x116E45B5i64:
          sub_14000A070();
          break;
        case 0xC0C14DF7i64:
          sub_14000B100();
          break;
        case 0x334E61081i64:
          sub_14000C0A0();
          break;
        default:
          sub_14000CB80();
          break;
      }
      sub_1400308A0();
      sub_140068510("mirage no cap nigger", (unsigned __int8)byte_14009A884);
      if ( *(float *)&dword_14009A880 > 0.0 )
      {
        sub_140067830();
        sub_140024280(0i64);
        v13 = Block;
        *((_DWORD *)Block + 0x126E) |= 2u;
        v13[0x1276] = 0x43FA0000;
        v13[0x1277] = 0x44020000;
        v13[0x1270] = 1;
        v340 = v5;
        sub_1400241C0(5i64, &v340);
        v379[0] = 0x6E697714;
        v379[1] = 0x776F64;
        sub_14002E580((char *)v379 + 1, 0i64, 3i64);
        sub_140024220(1i64);
        v377[0] = (__int128)v7;
        sub_1400241C0(0i64, v377);
        v14 = (char *)sub_14006B8C0(&v315, v377);
        v15 = *v14;
        v14[1] ^= *v14;
        v14[2] ^= v15;
        v14[3] ^= v15;
        v14[4] ^= v15;
        v14[5] ^= v15;
        v14[6] ^= v15;
        v14[7] ^= v15;
        v14[8] ^= v15;
        v14[9] ^= v15;
        v14[0xA] ^= v15;
        v14[0xB] ^= v15;
        v14[0xC] ^= v15;
        v14[0xD] ^= v15;
        v14[0xE] ^= v15;
        v14[0xF] ^= v15;
        v14[0x10] ^= v15;
        v14[0x11] ^= v15;
        v14[0x12] ^= v15;
        v14[0x13] ^= v15;
        v14[0x14] ^= v15;
        v14[0x15] ^= v15;
        v14[0x16] ^= v15;
        v14[0x17] ^= v15;
        v14[0x18] ^= v15;
        v14[0x19] ^= v15;
        v14[0x1A] ^= v15;
        v14[0x1B] ^= v15;
        v14[0x1C] ^= v15;
        v14[0x1D] ^= v15;
        v14[0x1E] ^= v15;
        v14[0x1F] ^= v15;
        v14[0x20] ^= v15;
        v14[0x21] ^= v15;
        v14[0x22] ^= v15;
        v14[0x23] ^= v15;
        v14[0x24] ^= v15;
        v14[0x25] ^= v15;
        v14[0x26] ^= v15;
        v14[0x27] ^= v15;
        v14[0x28] ^= v15;
        v14[0x29] = 0;
        sub_1400546C0(v14 + 1);
        sub_140024220(1i64);
        v377[0] = 0i64;
        sub_1400241C0(0x15i64, v377);
        v377[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400898E0);
        sub_1400241C0(0x16i64, v377);
        v377[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_140089920);
        sub_1400241C0(0x17i64, v377);
        sub_1400341D0();
        v16 = Block;
        *(_BYTE *)(*((_QWORD *)Block + 0x801) + 0xC0i64) = 1;
        v17 = *(_QWORD *)(v16[0x801] + 0x2A8i64);
        if ( !dword_14009A8C0 )
        {
          v373 = v7;
          sub_1400241C0(0i64, &v373);
          v16 = Block;
        }
        v18 = v16[0x801];
        v19 = *(float *)(v18 + 0x110);
        v20 = *(float *)(v18 + 0x114);
        v343 = 0x42A00000i64;
        strcpy(v380, "-aimbot");
        if ( (unsigned __int8)sub_140055040(&v380[1], &v343, 0i64) )
        {
          dword_14009A8C0 = 0;
          goto LABEL_34;
        }