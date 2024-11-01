if ( byte_14009A5A4 )
  {
    Time = Xtime_get_ticks() / 0x989680;
    v5 = localtime64(&Time);
    GetModuleFileNameA(0i64, Filename, 0x104u);
    GetStdHandle(0xFFFFFFF5);
    v6 = GetStdHandle(0xFFFFFFF5);
    SetConsoleTextAttribute(v6, 0xCu);
    sub_140003BF0(std::cout, "[MIRAGE] ");
    v7 = GetStdHandle(0xFFFFFFF5);
    SetConsoleTextAttribute(v7, 8u);
    v8 = "%Y-%m-%d %H:%M:%S";
    v19[0] = (__int64)v5;
    v19[1] = (__int64)"%Y-%m-%d %H:%M:%S";
    do
      ++v8;
    while ( *v8 );
    v19[2] = (__int64)v8;
    v9 = sub_14001D120(std::cout, v19);
    sub_140003BF0(v9, " ");
    v10 = GetStdHandle(0xFFFFFFF5);
    SetConsoleTextAttribute(v10, 0xEu);
    v11 = sub_140003BF0(std::cout, "C:\\Users\\aorim\\Desktop\\mirage srizy\\mirage\\src\\roblox\\engine.cpp");
    v12 = sub_140003BF0(v11, ":");
    v13 = std::ostream::operator<<(v12, a3);
    sub_140003BF0(v13, " ");
    v14 = GetStdHandle(0xFFFFFFF5);
    SetConsoleTextAttribute(v14, 0xBu);
    v15 = a1[2];
    if ( a1[3] > 0xFui64 )
      a1 = (_QWORD *)*a1;
    v16 = sub_14001EEF0(std::cout, a1, v15);
    std::ostream::operator<<(v16, sub_140003DD0);
    v17 = GetStdHandle(0xFFFFFFF5);
    SetConsoleTextAttribute(v17, 7u);
  }
}