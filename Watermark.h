void *sub_140068510()
{
  _DWORD *v0; // rcx
  char v1; // bl
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // xmm0_8
  _QWORD *v5; // rcx
  __int64 v6; // rax
  float v7; // xmm0_4
  __int64 v8; // r8
  __int64 v9; // rcx
  void *result; // rax
  int v11; // [rsp+20h] [rbp-30h] BYREF
  __m128i v12; // [rsp+28h] [rbp-28h] BYREF
  char v13[8]; // [rsp+38h] [rbp-18h] BYREF

  v0 = Block;
  v1 = byte_14009A884;
  v2 = 0x116Fi64;
  qmemcpy(&v12, "LWatermark", 0xA);
  v3 = *((_DWORD *)Block + 0x126E) | 1;
  *((_DWORD *)Block + 0x126E) = v3;
  v4 = qword_140099A58;
  v0[0x126E] = v3 | 0x40;
  *((_QWORD *)v0 + 0x939) = v4;
  if ( v1 )
    v2 = 0x116Bi64;
  *((_QWORD *)v0 + 0x93A) = 0i64;
  v0[0x126F] = 4;
  v0[0x1286] = 0x3F4CCCCD;
  v12.m128i_i8[0xA] = 0;
  sub_14002E580(&v12.m128i_i8[1], 0i64, v2);
  v5 = Block;
  *(_BYTE *)(*((_QWORD *)Block + 0x801) + 0xC0i64) = 1;
  v6 = v5[0x801];
  v7 = *(float *)(v6 + 0x2C) - *(float *)(v6 + 0x90);
  *(_BYTE *)(v6 + 0x151) = 1;
  *(float *)(v6 + 0x114) = v7 + 5.0;
  v8 = v5[0x801];
  if ( !*(_BYTE *)(v8 + 0xC3) )
  {
    v9 = 2 - (unsigned int)(*(_DWORD *)(v8 + 0x1C4) != 0);
    if ( *(_QWORD *)(v8 + 0x1B8) )
      v9 = 6 - (unsigned int)(*(_DWORD *)(v8 + 0x1C4) != 0);
    sub_140056EC0(v9);
  }
  v11 = 0x732506;
  sub_1400546C0((char *)&v11 + 1);
  sub_140034070();
  v12 = _mm_load_si128((const __m128i *)&xmmword_140089890);
  strcpy(v13, "f fps");
  sub_1400546C0(&v12.m128i_i8[1]);
  *(_BYTE *)(*((_QWORD *)Block + 0x801) + 0xC0i64) = 1;
  result = (void *)sub_1400308A0();
  if ( v1 )
  {
    result = Block;
    qword_140099A58 = _mm_unpacklo_ps(
                        (__m128)*(unsigned int *)(*((_QWORD *)Block + 0x801) + 0x28i64),
                        (__m128)*(unsigned int *)(*((_QWORD *)Block + 0x801) + 0x2Ci64)).m128_u64[0];
  }
  return result;
}