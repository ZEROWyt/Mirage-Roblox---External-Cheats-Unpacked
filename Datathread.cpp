 v0 = 0i64;
  v1 = sub_140014400();
  v2 = sub_14001CF40(v1 + 0x118);
  if ( !v2 )
  {
    *(_OWORD *)Block = 0i64;
    Block[0] = operator new(0x20ui64);
    *(_QWORD *)&v86 = 0x13i64;
    *((_QWORD *)&v86 + 1) = 0x1Fi64;
    strcpy((char *)Block[0], "datamodel not found");
    sub_140018BF0(Block, v3, 0x335i64);
    if ( *((_QWORD *)&v86 + 1) > 0xFui64 )
    {
      v4 = Block[0];
      if ( (unsigned __int64)(*((_QWORD *)&v86 + 1) + 1i64) >= 0x1000 )
      {
        v4 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
        if ( (unsigned __int64)(Block[0] - v4 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
LABEL_143:
      j_j_free(v4);
      return 0;
    }
    return 0;
  }
  v5 = (char *)&v93 + 5;
  v6 = v1;
  do
  {
    *--v5 = v6 % 0xA + 0x30;
    v6 /= 0xAui64;
  }
  while ( v6 );
  sub_140011B80(Src, v5, (char *)&v93 + 5);
  v7 = v96;
  if ( v97 - v96 < 0xC )
  {
    v10 = (void **)sub_140012090(Src, 0xCi64);
  }
  else
  {
    v96 += 0xCi64;
    v8 = Src;
    if ( v97 > 0xF )
      v8 = (void **)Src[0];
    if ( "" <= (char *)v8 || "renderview: " > (char *)v8 + v7 )
    {
      v0 = 0xCi64;
    }
    else if ( v8 > (void **)"renderview: " )
    {
      v0 = (char *)v8 - "renderview: ";
    }
    memmove((char *)v8 + 0xC, v8, v7 + 1);
    memcpy(v8, "renderview: ", v0);
    memcpy((char *)v8 + v0, &aRenderview[v0 + 0xC], 0xC - v0);
    v10 = Src;
    v0 = 0i64;
  }
  *(_OWORD *)Block = 0i64;
  v86 = 0ui64;
  *(_OWORD *)Block = *(_OWORD *)v10;
  v86 = *((_OWORD *)v10 + 1);
  v10[2] = 0i64;
  v10[3] = (void *)0xF;
  *(_BYTE *)v10 = 0;
  sub_140018BF0(Block, v9, 0x339i64);
  if ( *((_QWORD *)&v86 + 1) > 0xFui64 )
  {
    v11 = Block[0];
    if ( (unsigned __int64)(*((_QWORD *)&v86 + 1) + 1i64) >= 0x1000 )
    {
      v11 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(Block[0] - v11 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v11);
  }
  *(_QWORD *)&v86 = 0i64;
  *((_QWORD *)&v86 + 1) = 0xFi64;
  LOBYTE(Block[0]) = 0;
  if ( v97 > 0xF )
  {
    v12 = Src[0];
    if ( v97 + 1 >= 0x1000 )
    {
      v12 = (void *)*((_QWORD *)Src[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(Src[0] - v12 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v12);
  }
  v13 = (char *)&v93 + 5;
  v14 = v2;
  do
  {
    *--v13 = v14 % 0xA + 0x30;
    v14 /= 0xAui64;
  }
  while ( v14 );
  sub_140011B80(v98, v13, (char *)&v93 + 5);
  v15 = v99;
  if ( v100 - v99 < 0xB )
  {
    v18 = (void **)sub_140012090(v98, 0xBi64);
  }
  else
  {
    v99 += 0xBi64;
    v16 = v98;
    if ( v100 > 0xF )
      v16 = (void **)v98[0];
    if ( "" <= (char *)v16 || "datamodel: " > (char *)v16 + v15 )
    {
      v0 = 0xBi64;
    }
    else if ( v16 > (void **)"datamodel: " )
    {
      v0 = (char *)v16 - "datamodel: ";
    }
    memmove((char *)v16 + 0xB, v16, v15 + 1);
    memcpy(v16, "datamodel: ", v0);
    memcpy((char *)v16 + v0, &aDatamodel[v0 + 0xB], 0xB - v0);
    v18 = v98;
  }
  *(_OWORD *)Block = 0i64;
  v86 = 0ui64;
  *(_OWORD *)Block = *(_OWORD *)v18;
  v86 = *((_OWORD *)v18 + 1);
  v18[2] = 0i64;
  v18[3] = (void *)0xF;
  *(_BYTE *)v18 = 0;
  sub_140018BF0(Block, v17, 0x33Ai64);
  if ( *((_QWORD *)&v86 + 1) > 0xFui64 )
  {
    v19 = Block[0];
    if ( (unsigned __int64)(*((_QWORD *)&v86 + 1) + 1i64) >= 0x1000 )
    {
      v19 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(Block[0] - v19 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v19);
  }
  *(_QWORD *)&v86 = 0i64;
  *((_QWORD *)&v86 + 1) = 0xFi64;
  LOBYTE(Block[0]) = 0;
  if ( v100 > 0xF )
  {
    v20 = v98[0];
    if ( v100 + 1 >= 0x1000 )
    {
      v20 = (void *)*((_QWORD *)v98[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(v98[0] - v20 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v20);
  }
  v21 = sub_14001CF40(v2 + 0x198);
  qword_14009A5B8 = v21;
  if ( !v21 )
  {
    *(_OWORD *)Block = 0i64;
    v86 = 0ui64;
    Block[0] = operator new(0x20ui64);
    *(_QWORD *)&v86 = 0x17i64;
    *((_QWORD *)&v86 + 1) = 0x1Fi64;
    strcpy((char *)Block[0], "game instance not found");
    sub_140018BF0(Block, Block[0], 0x33Ei64);
    if ( *((_QWORD *)&v86 + 1) > 0xFui64 )
    {
      v4 = Block[0];
      if ( (unsigned __int64)(*((_QWORD *)&v86 + 1) + 1i64) >= 0x1000 )
      {
        v4 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
        if ( (unsigned __int64)(Block[0] - v4 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      goto LABEL_143;
    }
    return 0;
  }
  v22 = (char *)&v93 + 5;
  do
  {
    *--v22 = v21 % 0xA + 0x30;
    v21 /= 0xAui64;
  }
  while ( v21 );
  sub_140011B80(v101, v22, (char *)&v93 + 5);
  v23 = v102;
  if ( v103 - v102 < 6 )
  {
    v27 = (void **)sub_140012090(v101, 6i64);
  }
  else
  {
    v102 += 6i64;
    v24 = v101;
    if ( v103 > 0xF )
      v24 = (void **)v101[0];
    if ( "" <= (char *)v24 || "game: " > (char *)v24 + v23 )
    {
      v25 = 6i64;
    }
    else if ( v24 > (void **)"game: " )
    {
      v25 = (char *)v24 - "game: ";
    }
    else
    {
      v25 = 0i64;
    }
    memmove((char *)v24 + 6, v24, v23 + 1);
    memcpy(v24, "game: ", v25);
    memcpy((char *)v24 + v25, &aGame[v25 + 6], 6 - v25);
    v27 = v101;
  }
  *(_OWORD *)Block = 0i64;
  v86 = 0ui64;
  *(_OWORD *)Block = *(_OWORD *)v27;
  v86 = *((_OWORD *)v27 + 1);
  v27[2] = 0i64;
  v27[3] = (void *)0xF;
  *(_BYTE *)v27 = 0;
  sub_140018BF0(Block, v26, 0x341i64);
  if ( *((_QWORD *)&v86 + 1) > 0xFui64 )
  {
    v28 = Block[0];
    if ( (unsigned __int64)(*((_QWORD *)&v86 + 1) + 1i64) >= 0x1000 )
    {
      v28 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(Block[0] - v28 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v28);
  }
  *(_QWORD *)&v86 = 0i64;
  *((_QWORD *)&v86 + 1) = 0xFi64;
  LOBYTE(Block[0]) = 0;
  if ( v103 > 0xF )
  {
    v29 = v101[0];
    if ( v103 + 1 >= 0x1000 )
    {
      v29 = (void *)*((_QWORD *)v101[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(v101[0] - v29 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v29);
  }
  v30 = sub_14001CF40(v1 + 0x10);
  qword_14009A580 = v30;
  if ( !v30 )
  {
    *(_OWORD *)Block = 0i64;
    v86 = 0ui64;
    Block[0] = operator new(0x20ui64);
    *(_QWORD *)&v86 = 0x1Fi64;
    *((_QWORD *)&v86 + 1) = 0x1Fi64;
    strcpy((char *)Block[0], "visualengine instance not found");
    sub_140018BF0(Block, Block[0], 0x345i64);
    if ( *((_QWORD *)&v86 + 1) > 0xFui64 )
    {
      v4 = Block[0];
      if ( (unsigned __int64)(*((_QWORD *)&v86 + 1) + 1i64) >= 0x1000 )
      {
        v4 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
        if ( (unsigned __int64)(Block[0] - v4 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      goto LABEL_143;
    }
    return 0;
  }
  v31 = (char *)&v93 + 5;
  do
  {
    *--v31 = v30 % 0xA + 0x30;
    v30 /= 0xAui64;
  }
  while ( v30 );
  sub_140011B80(v104, v31, (char *)&v93 + 5);
  v32 = v105;
  if ( v106 - v105 < 0xE )
  {
    v36 = (void **)sub_140012090(v104, 0xEi64);
  }
  else
  {
    v105 += 0xEi64;
    v33 = v104;
    if ( v106 > 0xF )
      v33 = (void **)v104[0];
    if ( "" <= (char *)v33 || "visualengine: " > (char *)v33 + v32 )
    {
      v34 = 0xEi64;
    }
    else if ( v33 > (void **)"visualengine: " )
    {
      v34 = (char *)v33 - "visualengine: ";
    }
    else
    {
      v34 = 0i64;
    }
    memmove((char *)v33 + 0xE, v33, v32 + 1);
    memcpy(v33, "visualengine: ", v34);
    memcpy((char *)v33 + v34, &aVisualengine[v34 + 0xE], 0xE - v34);
    v36 = v104;
  }
  *(_OWORD *)Block = 0i64;
  v86 = 0ui64;
  *(_OWORD *)Block = *(_OWORD *)v36;
  v86 = *((_OWORD *)v36 + 1);
  v36[2] = 0i64;
  v36[3] = (void *)0xF;
  *(_BYTE *)v36 = 0;
  sub_140018BF0(Block, v35, 0x348i64);
  if ( *((_QWORD *)&v86 + 1) > 0xFui64 )
  {
    v37 = Block[0];
    if ( (unsigned __int64)(*((_QWORD *)&v86 + 1) + 1i64) >= 0x1000 )
    {
      v37 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(Block[0] - v37 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v37);
  }
  *(_QWORD *)&v86 = 0i64;
  *((_QWORD *)&v86 + 1) = 0xFi64;
  LOBYTE(Block[0]) = 0;
  if ( v106 > 0xF )
  {
    v38 = v104[0];
    if ( v106 + 1 >= 0x1000 )
    {
      v38 = (void *)*((_QWORD *)v104[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(v104[0] - v38 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v38);
  }
  strcpy((char *)v91, "ZWorkspace");
  *(_OWORD *)Block = 0i64;
  v86 = 0ui64;
  v39 = 0xFFFFFFFFFFFFFFFFui64;
  v40 = 0xFFFFFFFFFFFFFFFFui64;
  do
    ++v40;
  while ( *((_BYTE *)v91 + v40 + 1) );
  sub_140002840(Block, (char *)v91 + 1);
  v42 = *(_QWORD *)sub_140015EE0(v41, v77, Block);
  qword_14009A570 = v42;
  if ( !v42 )
  {
    *(_OWORD *)Block = 0i64;
    v86 = 0ui64;
    Block[0] = operator new(0x20ui64);
    *(_QWORD *)&v86 = 0x1Ci64;
    *((_QWORD *)&v86 + 1) = 0x1Fi64;
    strcpy((char *)Block[0], "workspace instance not found");
    sub_140018BF0(Block, v43, 0x34Ci64);
    if ( *((_QWORD *)&v86 + 1) > 0xFui64 )
    {
      v4 = Block[0];
      if ( (unsigned __int64)(*((_QWORD *)&v86 + 1) + 1i64) >= 0x1000 )
      {
        v4 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
        if ( (unsigned __int64)(Block[0] - v4 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      goto LABEL_143;
    }
    return 0;
  }
  v44 = (char *)&v93 + 5;
  do
  {
    *--v44 = v42 % 0xA + 0x30;
    v42 /= 0xAui64;
  }
  while ( v42 );
  sub_140011B80(v107, v44, (char *)&v93 + 5);
  v45 = v108;
  if ( v109 - v108 < 0xB )
  {
    v49 = (void **)sub_140012090(v107, 0xBi64);
  }
  else
  {
    v108 += 0xBi64;
    v46 = v107;
    if ( v109 > 0xF )
      v46 = (void **)v107[0];
    if ( "" <= (char *)v46 || "workspace: " > (char *)v46 + v45 )
    {
      v47 = 0xBi64;
    }
    else if ( v46 > (void **)"workspace: " )
    {
      v47 = (char *)v46 - "workspace: ";
    }
    else
    {
      v47 = 0i64;
    }
    memmove((char *)v46 + 0xB, v46, v45 + 1);
    memcpy(v46, "workspace: ", v47);
    memcpy((char *)v46 + v47, &aWorkspace[v47 + 0xB], 0xB - v47);
    v49 = v107;
  }
  *(_OWORD *)Block = 0i64;
  v86 = 0ui64;
  *(_OWORD *)Block = *(_OWORD *)v49;
  v86 = *((_OWORD *)v49 + 1);
  v49[2] = 0i64;
  v49[3] = (void *)0xF;
  *(_BYTE *)v49 = 0;
  sub_140018BF0(Block, v48, 0x34Fi64);
  if ( *((_QWORD *)&v86 + 1) > 0xFui64 )
  {
    v50 = Block[0];
    if ( (unsigned __int64)(*((_QWORD *)&v86 + 1) + 1i64) >= 0x1000 )
    {
      v50 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(Block[0] - v50 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v50);
  }
  *(_QWORD *)&v86 = 0i64;
  *((_QWORD *)&v86 + 1) = 0xFi64;
  LOBYTE(Block[0]) = 0;
  if ( v109 > 0xF )
  {
    v51 = v107[0];
    if ( v109 + 1 >= 0x1000 )
    {
      v51 = (void *)*((_QWORD *)v107[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(v107[0] - v51 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v51);
  }
  strcpy((char *)v91, "[Players");
  *(_OWORD *)Block = 0i64;
  v86 = 0ui64;
  do
    ++v39;
  while ( *((_BYTE *)v91 + v39 + 1) );
  sub_140002840(Block, (char *)v91 + 1);
  v53 = *(_QWORD *)sub_140015EE0(v52, v77, Block);
  qword_14009A5A8 = v53;
  if ( !v53 )
  {
    *(_OWORD *)Block = 0i64;
    v86 = 0ui64;
    Block[0] = operator new(0x20ui64);
    *(_QWORD *)&v86 = 0x1Ai64;
    *((_QWORD *)&v86 + 1) = 0x1Fi64;
    strcpy((char *)Block[0], "players instance not found");
    sub_140018BF0(Block, v54, 0x353i64);
    if ( *((_QWORD *)&v86 + 1) > 0xFui64 )
    {
      v4 = Block[0];
      if ( (unsigned __int64)(*((_QWORD *)&v86 + 1) + 1i64) >= 0x1000 )
      {
        v4 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
        if ( (unsigned __int64)(Block[0] - v4 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      goto LABEL_143;
    }
    return 0;
  }
  v56 = (char *)&v93 + 5;
  do
  {
    *--v56 = v53 % 0xA + 0x30;
    v53 /= 0xAui64;
  }
  while ( v53 );
  sub_140011B80(v110, v56, (char *)&v93 + 5);
  v57 = v111;
  if ( v112 - v111 < 9 )
  {
    v61 = (void **)sub_140012090(v110, 9i64);
  }
  else
  {
    v111 += 9i64;
    v58 = v110;
    if ( v112 > 0xF )
      v58 = (void **)v110[0];
    if ( "" <= (char *)v58 || "players: " > (char *)v58 + v57 )
    {
      v59 = 9i64;
    }
    else if ( v58 > (void **)"players: " )
    {
      v59 = (char *)v58 - "players: ";
    }
    else
    {
      v59 = 0i64;
    }
    memmove((char *)v58 + 9, v58, v57 + 1);
    memcpy(v58, "players: ", v59);
    memcpy((char *)v58 + v59, &aPlayers[v59 + 9], 9 - v59);
    v61 = v110;
  }
  *(_OWORD *)Block = 0i64;
  v86 = 0ui64;
  *(_OWORD *)Block = *(_OWORD *)v61;
  v86 = *((_OWORD *)v61 + 1);
  v61[2] = 0i64;
  v61[3] = (void *)0xF;
  *(_BYTE *)v61 = 0;
  sub_140018BF0(Block, v60, 0x356i64);
  if ( *((_QWORD *)&v86 + 1) > 0xFui64 )
  {
    v62 = Block[0];
    if ( (unsigned __int64)(*((_QWORD *)&v86 + 1) + 1i64) >= 0x1000 )
    {
      v62 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(Block[0] - v62 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v62);
  }
  *(_QWORD *)&v86 = 0i64;
  *((_QWORD *)&v86 + 1) = 0xFi64;
  LOBYTE(Block[0]) = 0;
  if ( v112 > 0xF )
  {
    v63 = v110[0];
    if ( v112 + 1 >= 0x1000 )
    {
      v63 = (void *)*((_QWORD *)v110[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(v110[0] - v63 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v63);
  }
  if ( FindWindowA(0i64, "Roblox") )
  {
    v91[0] = 0i64;
    v88 = 0;
    v89 = 0;
    v90 = 0;
    LODWORD(Block[0]) = 0x85B3E12;
    Block[1] = (void *)(qword_14009A5B8 + 0x168);
    *(_QWORD *)&v86 = v91;
    *((_QWORD *)&v86 + 1) = 8i64;
    HIDWORD(Block[0]) = dword_14009A5E0;
    v87 = 0;
    DeviceIoControl(hDevice, 0x2201C4u, Block, 0x28u, 0i64, 0, 0i64, 0i64);
    v64 = 0i64;
    if ( (unsigned __int64)(v91[0] - 1i64) <= 0x2540BE3FEi64 )
      v64 = v91[0];
  }
  else
  {
    v64 = 0i64;
  }
  qword_14009A5C8 = v64;
  *(_OWORD *)Block = 0i64;
  v65 = 0i64;
  *(_QWORD *)&v86 = 0i64;
  v77[0] = 5i64;
  v66 = 0x1Ei64;
  v67 = 0i64;
  do
  {
    v68 = sub_140010570(qword_14009A5A8);
    LODWORD(v91[0]) = v68;
    if ( v67 == v65 )
    {
      sub_14001F0B0(Block, v67, v91);
      v65 = (char *)v86;
      v67 = (char *)Block[1];
    }
    else
    {
      *(_DWORD *)v67 = v68;
      v67 += 4;
      Block[1] = v67;
    }
    sub_1400026B0(v77);
    --v66;
  }
  while ( v66 );
  v69 = (char *)Block[0];
  if ( Block[0] == v67 )
  {
    v70 = 0;
  }
  else
  {
    v78 = 0;
    v79 = 0i64;
    v80 = 0i64;
    v71 = operator new(0x18ui64);
    *v71 = v71;
    v71[1] = v71;
    v79 = v71;
    v81 = 0i64;
    v82 = 0i64;
    v83 = 7i64;
    v84 = 8i64;
    v78 = 0x3F800000;
    sub_140010400(&v81, 0x10i64, v71);
    v72 = 0;
    v73 = v69;
    do
    {
      LODWORD(v91[0]) = *(_DWORD *)v73;
      v74 = *(_QWORD *)sub_14001D3A0(&v78, v77, v91);
      if ( ++*(_DWORD *)(v74 + 0x14) > v72 )
      {
        v72 = *(_DWORD *)(*(_QWORD *)sub_14001D3A0(&v78, v92, v91) + 0x14i64);
        dword_14009A59C = v91[0];
      }
      v73 += 4;
    }
    while ( v73 != v67 );
    *(_OWORD *)v92 = 0i64;
    v93 = 0i64;
    v94 = 0i64;
    v92[0] = operator new(0x20ui64);
    v93 = 0x1Fi64;
    v94 = 0x1Fi64;
    strcpy((char *)v92[0], "game data reloaded successfully");
    sub_140018BF0(v92, v92[0], 0x36Ci64);
    if ( v94 > 0xF )
    {
      v75 = v92[0];
      if ( v94 + 1 >= 0x1000 )
      {
        v75 = (void *)*((_QWORD *)v92[0] + 0xFFFFFFFF);
        if ( (unsigned __int64)(v92[0] - v75 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      j_j_free(v75);
    }
    v70 = 1;
    sub_14001A0C0(&v78);
  }
  if ( v69 )
  {
    v76 = v69;
    if ( ((v65 - v69) & 0xFFFFFFFFFFFFFFFCui64) >= 0x1000 )
    {
      v69 = (char *)*((_QWORD *)v69 + 0xFFFFFFFF);
      if ( (unsigned __int64)(v76 - v69 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v69);
  }
  return v70;
}