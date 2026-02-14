; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_loadGame_FUN_004e12b0(CGame *this_ptr,char *save_filename,int load_mode,char *chapter_name)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   save_filename
; int              Stack[0xc]:4   load_mode
; char *           Stack[0x10]:4   chapter_name
; Local Variables:
; undefined1       Stack[-0x638]:1  local_638
; undefined1       Stack[-0x637]:1  local_637
; undefined1       Stack[-0x534]:1  local_534
; undefined1       Stack[-0x430]:1  local_430
; undefined1       Stack[-0x330]:1  local_330
; undefined1       Stack[-0x230]:1  local_230
; undefined1       Stack[-0x168]:1  local_168
; undefined1       Stack[-0x124]:1  local_124
; undefined4       Stack[-0x104]:4  local_104
; undefined1       Stack[-0xe8]:1  local_e8
; undefined1       Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x88]:4  local_88
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x68]:1  local_68
; undefined4       Stack[-0x3c]:4  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e2087
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 005133ff
;   core_msnedit.cpp_CDemonMission_importActors_FUN_0053ccf0 at 0053ce34
;
; Referenced Globals:
;   TerminatedCString s_noc_0062ca88
;   TerminatedCString s_noc_0062ca8c
;   TerminatedCString s_noc_0062ca91
;   TerminatedCString s_save_0062ca97
;   TerminatedCString s_Select_file_to_load_0062ca9c
;   TerminatedCString s_rt_0062cab0
;   TerminatedCString s_save_0062cab3
;   TerminatedCString s_LZW_0062cab8
;   undefined4 DAT_0062cab9
;   TerminatedCString s_core_game_cpp_0062cabc
;   TerminatedCString s_save_0062cacd
;   TerminatedCString s_save_0062cad2
;   TerminatedCString s_s_s_0062cad7
;   TerminatedCString s_Can_t_open_saved_game_fi_0062cadd
;   TerminatedCString s_Can_t_create_temp_file_t_0062caf9
;   ... and 57 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_event.cpp_CEventList_loadState_FUN_004b0fc0
;   core_event.cpp_CEventList_resetGameFlags_FUN_004b0460
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80
;   core_fire.cpp_CFireEffect_load_FUN_004c9300
;   core_gore.cpp_CGore_FUN_004ed760
;   core_gore.cpp_CGore_FUN_004ee1e0
;   core_level.cpp_CLevelLoader_show_FUN_00503dc0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   core_mission.cpp_CDemonMission_FUN_00524760
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
;   core_mission.cpp_CDemonMission_run_FUN_00524420
;   core_script.cpp_CScript_loadState_FUN_00560820
;   core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230
;   ... and 31 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e12b0
        ;   Label: core_game.cpp_CGame_loadGame_FUN_004e12b0
    PUSH ESI                            ; 004e12b1
    PUSH EDI                            ; 004e12b2
    PUSH EBP                            ; 004e12b3
    SUB ESP,0x628                       ; 004e12b4
    PUSH 0x67b670                       ; 004e12ba | = "save\\$$SAVE$$.TMP"
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 004e12bf
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 004e12c4
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004e12c7
    MOV dword ptr [EAX + 0x234],0x1     ; 004e12ce
    LEA EAX,[ESP + 0x208]               ; 004e12d8
    PUSH EAX                            ; 004e12df
    PUSH 0x0                            ; 004e12e0
    PUSH 0x0                            ; 004e12e2
    PUSH 0x0                            ; 004e12e4
    PUSH 0x2d82c80                      ; 004e12e6 | g_CurrentSaveFile
    CALL crt_string.c_splitpath_FUN_005ff178 ; 004e12eb
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004e12f0
    PUSH 0x62ca88                       ; 004e12f3 | = "noc"
    LEA EAX,[ESP + 0x20c]               ; 004e12f8
    PUSH EAX                            ; 004e12ff
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004e1300
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e1305
    TEST EAX,EAX                        ; 004e1308
    JZ 0x004e1329                       ; 004e130a
        ;   XREF to: 004e1329 (CONDITIONAL_JUMP)  ; LAB_004e1329
    PUSH 0x62ca8c                       ; 004e130c | = ".noc"
    LEA EAX,[ESP + 0x20c]               ; 004e1311
    PUSH EAX                            ; 004e1318
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004e1319
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e131e
    TEST EAX,EAX                        ; 004e1321
    JNZ 0x004e175d                      ; 004e1323
        ;   XREF to: 004e175d (CONDITIONAL_JUMP)  ; LAB_004e175d
    MOV ESI,0x2d82c80                   ; 004e1329 | g_CurrentSaveFile
        ;   Label: LAB_004e1329
    MOV EDI,ESP                         ; 004e132e
    PUSH EDI                            ; 004e1330
    MOV AL,byte ptr [ESI]               ; 004e1331 | g_CurrentSaveFile | DAT_02d82c82
        ;   Label: LAB_004e1331
    MOV byte ptr [EDI],AL               ; 004e1333
    CMP AL,0x0                          ; 004e1335
    JZ 0x004e1349                       ; 004e1337
        ;   XREF to: 004e1349 (CONDITIONAL_JUMP)  ; LAB_004e1349
    MOV AL,byte ptr [ESI + 0x1]         ; 004e1339 | DAT_02d82c81 | DAT_02d82c83
    ADD ESI,0x2                         ; 004e133c
    MOV byte ptr [EDI + 0x1],AL         ; 004e133f
    ADD EDI,0x2                         ; 004e1342
    CMP AL,0x0                          ; 004e1345
    JNZ 0x004e1331                      ; 004e1347
        ;   XREF to: 004e1331 (CONDITIONAL_JUMP)  ; LAB_004e1331
    POP EDI                             ; 004e1349
        ;   Label: LAB_004e1349
    MOV EAX,[0x02cf1cd0]                ; 004e134a | g_EditorFont
        ;   Label: LAB_004e134a
    MOV EDX,dword ptr [ESP + 0x644]     ; 004e134f
    MOV dword ptr [ESP + 0x5fc],EAX     ; 004e1356
    TEST EDX,EDX                        ; 004e135d
    JNZ 0x004e1767                      ; 004e135f
        ;   XREF to: 004e1767 (CONDITIONAL_JUMP)  ; LAB_004e1767
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004e1365
        ;   Label: LAB_004e1365
    ADD EAX,0x9c8                       ; 004e136c
    MOV dword ptr [ESP + 0x618],EAX     ; 004e1371
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004e1378
    ADD EAX,0x254                       ; 004e137f
    MOV dword ptr [ESP + 0x60c],EAX     ; 004e1384
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004e138b
    ADD EAX,0x24c                       ; 004e1392
    MOV dword ptr [ESP + 0x614],EAX     ; 004e1397
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004e139e
    ADD EAX,0x248                       ; 004e13a5
    MOV dword ptr [ESP + 0x61c],EAX     ; 004e13aa
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004e13b1
    ADD EAX,0x250                       ; 004e13b8
    MOV dword ptr [ESP + 0x610],EAX     ; 004e13bd
    MOV ECX,dword ptr [ESP + 0x640]     ; 004e13c4
        ;   Label: LAB_004e13c4
    TEST ECX,ECX                        ; 004e13cb
    JZ 0x004e1776                       ; 004e13cd
        ;   XREF to: 004e1776 (CONDITIONAL_JUMP)  ; LAB_004e1776
    MOV EDI,ESP                         ; 004e13d3
    MOV ESI,ECX                         ; 004e13d5
    PUSH EDI                            ; 004e13d7
    MOV AL,byte ptr [ESI]               ; 004e13d8
        ;   Label: LAB_004e13d8
    MOV byte ptr [EDI],AL               ; 004e13da
    CMP AL,0x0                          ; 004e13dc
    JZ 0x004e13f0                       ; 004e13de
        ;   XREF to: 004e13f0 (CONDITIONAL_JUMP)  ; LAB_004e13f0
    MOV AL,byte ptr [ESI + 0x1]         ; 004e13e0
    ADD ESI,0x2                         ; 004e13e3
    MOV byte ptr [EDI + 0x1],AL         ; 004e13e6
    ADD EDI,0x2                         ; 004e13e9
    CMP AL,0x0                          ; 004e13ec
    JNZ 0x004e13d8                      ; 004e13ee
        ;   XREF to: 004e13d8 (CONDITIONAL_JUMP)  ; LAB_004e13d8
    POP EDI                             ; 004e13f0
        ;   Label: LAB_004e13f0
    MOV ESI,dword ptr [0x006793d0]      ; 004e13f1 | g_CEventListPtr
        ;   Label: LAB_004e13f1
    PUSH ESI                            ; 004e13f7 | g_CEventListInstance
    CALL core_event.cpp_CEventList_resetGameFlags_FUN_004b0460 ; 004e13f8
        ;   XREF to: 004b0460 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_resetGameFlags_FUN_004b0460(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004e13fd
    PUSH -0x1                           ; 004e1400
    PUSH 0x0                            ; 004e1402
    PUSH 0x9                            ; 004e1404
    MOV EDI,dword ptr [0x0067cf80]      ; 004e1406 | g_CLevelLoaderPtr
    PUSH EDI                            ; 004e140c | g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_show_FUN_00503dc0 ; 004e140d
        ;   XREF to: 00503dc0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_show_FUN_00503dc0(CLevelLoader * this_ptr, int total_frames, int use_custom_viewport, int image_variant)
    ADD ESP,0x10                        ; 004e1412
    PUSH 0x62cab0                       ; 004e1415 | = "rt"
    LEA EAX,[ESP + 0x4]                 ; 004e141a
    PUSH EAX                            ; 004e141e
    PUSH 0x62cab3                       ; 004e141f | = "save"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e1424
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004e1429
    PUSH EAX                            ; 004e142c
    MOV EBX,EAX                         ; 004e142d
    CALL crt_stdio.c_ftell_FUN_00601560 ; 004e142f
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 004e1434
    MOV dword ptr [ESP + 0x620],EAX     ; 004e1437
    MOV EAX,ESP                         ; 004e143e
    PUSH EAX                            ; 004e1440
    PUSH 0x2d82c80                      ; 004e1441 | g_CurrentSaveFile
    MOV EBP,0x1                         ; 004e1446
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004e144b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e1450
    TEST EAX,EAX                        ; 004e1453
    JZ 0x004e147a                       ; 004e1455
        ;   XREF to: 004e147a (CONDITIONAL_JUMP)  ; LAB_004e147a
    MOV ESI,ESP                         ; 004e1457
    MOV EDI,0x2d82c80                   ; 004e1459 | g_CurrentSaveFile
    PUSH EDI                            ; 004e145e | g_CurrentSaveFile
    MOV AL,byte ptr [ESI]               ; 004e145f
        ;   Label: LAB_004e145f
    MOV byte ptr [EDI],AL               ; 004e1461 | g_CurrentSaveFile | DAT_02d82c82
    CMP AL,0x0                          ; 004e1463
    JZ 0x004e1477                       ; 004e1465
        ;   XREF to: 004e1477 (CONDITIONAL_JUMP)  ; LAB_004e1477
    MOV AL,byte ptr [ESI + 0x1]         ; 004e1467
    ADD ESI,0x2                         ; 004e146a
    MOV byte ptr [EDI + 0x1],AL         ; 004e146d | DAT_02d82c81 | DAT_02d82c83
    ADD EDI,0x2                         ; 004e1470
    CMP AL,0x0                          ; 004e1473
    JNZ 0x004e145f                      ; 004e1475
        ;   XREF to: 004e145f (CONDITIONAL_JUMP)  ; LAB_004e145f
    POP EDI                             ; 004e1477
        ;   Label: LAB_004e1477
    XOR EBP,EBP                         ; 004e1478
    CMP dword ptr [ESP + 0x644],0x0     ; 004e147a
        ;   Label: LAB_004e147a
    JNZ 0x004e1489                      ; 004e1482
        ;   XREF to: 004e1489 (CONDITIONAL_JUMP)  ; LAB_004e1489
    MOV EBP,0x1                         ; 004e1484
    PUSH EBX                            ; 004e1489
        ;   Label: LAB_004e1489
    PUSH 0x1                            ; 004e148a
    PUSH 0x4                            ; 004e148c
    LEA EAX,[ESP + 0x60c]               ; 004e148e
    PUSH EAX                            ; 004e1495
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004e1496
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004e149b
    PUSH 0x0                            ; 004e149e
    MOV EDX,dword ptr [ESP + 0x624]     ; 004e14a0
    PUSH EDX                            ; 004e14a7
    PUSH EBX                            ; 004e14a8
    MOV EDI,0x67b684                    ; 004e14a9 | g_MagicNumEFD
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 004e14ae
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004e14b3
    LEA ESI,[ESP + 0x600]               ; 004e14b6
    MOV ECX,0x4                         ; 004e14bd
    XOR EAX,EAX                         ; 004e14c2
    CMPSB.REPE ES:EDI,ESI               ; 004e14c4 | g_MagicNumEFD | DAT_0067b685
    JZ 0x004e14cd                       ; 004e14c6
        ;   XREF to: 004e14cd (CONDITIONAL_JUMP)  ; LAB_004e14cd
    SBB EAX,EAX                         ; 004e14c8
    SBB EAX,-0x1                        ; 004e14ca
    TEST EAX,EAX                        ; 004e14cd
        ;   Label: LAB_004e14cd
    JZ 0x004e14f5                       ; 004e14cf
        ;   XREF to: 004e14f5 (CONDITIONAL_JUMP)  ; LAB_004e14f5
    MOV ECX,0x3                         ; 004e14d1
    MOV EDI,0x62cab8                    ; 004e14d6 | = "LZW"
    LEA ESI,[ESP + 0x600]               ; 004e14db
    XOR EAX,EAX                         ; 004e14e2
    CMPSB.REPE ES:EDI,ESI               ; 004e14e4 | = "LZW" | DAT_0062cab9
    JZ 0x004e14ed                       ; 004e14e6
        ;   XREF to: 004e14ed (CONDITIONAL_JUMP)  ; LAB_004e14ed
    SBB EAX,EAX                         ; 004e14e8
    SBB EAX,-0x1                        ; 004e14ea
    TEST EAX,EAX                        ; 004e14ed
        ;   Label: LAB_004e14ed
    JNZ 0x004e16f9                      ; 004e14ef
        ;   XREF to: 004e16f9 (CONDITIONAL_JUMP)  ; LAB_004e16f9
    PUSH 0xdef                          ; 004e14f5
        ;   Label: LAB_004e14f5
    PUSH 0x62cabc                       ; 004e14fa | = "..\\core\\game.cpp"
    PUSH EBX                            ; 004e14ff
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e1500
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004e1505
    MOV EAX,ESP                         ; 004e1508
    PUSH EAX                            ; 004e150a
    PUSH 0x62cacd                       ; 004e150b | = "save"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 004e1510
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 004e1515
    SUB EAX,0x4                         ; 004e1518
    PUSH 0x0                            ; 004e151b
    MOV dword ptr [ESP + 0x60c],EAX     ; 004e151d
    LEA EAX,[ESP + 0x4d4]               ; 004e1524
    PUSH EAX                            ; 004e152b
    CALL crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0 ; 004e152c
        ;   XREF to: 005ff8f0 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0(ifstream * this_ptr, int c1)
    ADD ESP,0x8                         ; 004e1531
    PUSH 0x0                            ; 004e1534
    LEA EAX,[ESP + 0x554]               ; 004e1536
    PUSH EAX                            ; 004e153d
    CALL crt_fstream.cpp_ofstream_ctor_FUN_005ff95c ; 004e153e
        ;   XREF to: 005ff95c (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_ctor_FUN_005ff95c(ofstream * this_ptr, int c1)
    ADD ESP,0x8                         ; 004e1543
    MOV EAX,ESP                         ; 004e1546
    PUSH EAX                            ; 004e1548
    PUSH 0x62cad2                       ; 004e1549 | = "save"
    PUSH 0x62cad7                       ; 004e154e | = "%s\\%s"
    LEA EAX,[ESP + 0x110]               ; 004e1553
    PUSH EAX                            ; 004e155a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004e155b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004e1560
    MOV EBX,dword ptr [0x00665c50]      ; 004e1563 | g_DefaultStreamBufferSize
    PUSH EBX                            ; 004e1569
    PUSH 0x121                          ; 004e156a
    LEA EAX,[ESP + 0x10c]               ; 004e156f
    PUSH EAX                            ; 004e1576
    LEA EAX,[ESP + 0x4dc]               ; 004e1577
    PUSH EAX                            ; 004e157e
    CALL crt_fstream.cpp_openFile_FUN_00600e85 ; 004e157f
        ;   XREF to: 00600e85 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_openFile_FUN_00600e85(ifstream * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004e1584
    PUSH 0x4                            ; 004e1587
    LEA EAX,[ESP + 0x518]               ; 004e1589
    PUSH EAX                            ; 004e1590
    CALL crt_unknown.c_FUN_00600ee4     ; 004e1591
        ;   XREF to: 00600ee4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00600ee4()
    ADD ESP,0x8                         ; 004e1596
    CMP dword ptr [ESP + 0x534],0x0     ; 004e1599
    JNZ 0x004e17e1                      ; 004e15a1
        ;   XREF to: 004e17e1 (CONDITIONAL_JUMP)  ; LAB_004e17e1
    PUSH EBX                            ; 004e15a7
    PUSH 0x112                          ; 004e15a8
    PUSH 0x67b670                       ; 004e15ad | = "save\\$$SAVE$$.TMP"
    LEA EAX,[ESP + 0x55c]               ; 004e15b2
    PUSH EAX                            ; 004e15b9
    CALL crt_fstream.cpp_openFile_FUN_00600e85 ; 004e15ba
        ;   XREF to: 00600e85 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_openFile_FUN_00600e85(ifstream * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004e15bf
    MOV ESI,dword ptr [ESP + 0x5b0]     ; 004e15c2
    TEST ESI,ESI                        ; 004e15c9
    JNZ 0x004e182d                      ; 004e15cb
        ;   XREF to: 004e182d (CONDITIONAL_JUMP)  ; LAB_004e182d
    PUSH 0x8                            ; 004e15d1
    PUSH 0x8000                         ; 004e15d3
    LEA EAX,[ESP + 0x5d4]               ; 004e15d8
    PUSH EAX                            ; 004e15df
    CALL support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490 ; 004e15e0
        ;   XREF to: 0043f490 (UNCONDITIONAL_CALL)  ; CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)
    ADD ESP,0xc                         ; 004e15e5
    LEA EAX,[ESP + 0x5cc]               ; 004e15e8
    PUSH EAX                            ; 004e15ef
    CALL support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0 ; 004e15f0
        ;   XREF to: 0043f4d0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0(CLZWDecompress * this_ptr)
    ADD ESP,0x4                         ; 004e15f5
    LEA EAX,[ESP + 0x594]               ; 004e15f8
    PUSH EAX                            ; 004e15ff
    LEA EAX,[ESP + 0x60c]               ; 004e1600
    PUSH EAX                            ; 004e1607
    LEA EAX,[ESP + 0x51c]               ; 004e1608
    PUSH EAX                            ; 004e160f
    LEA EAX,[ESP + 0x5d8]               ; 004e1610
    PUSH EAX                            ; 004e1617
    CALL support_codec.cpp_CLZWDecompress_process_FUN_0043f510 ; 004e1618
        ;   XREF to: 0043f510 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDecompress_process_FUN_0043f510(CLZWDecompress * this_ptr, _FILE * input_file, int byte_count, _FILE * output_file)
    ADD ESP,0x10                        ; 004e161d
    LEA EAX,[ESP + 0x594]               ; 004e1620
    PUSH EAX                            ; 004e1627
    LEA EAX,[ESP + 0x5d0]               ; 004e1628
    PUSH EAX                            ; 004e162f
    CALL support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590 ; 004e1630
        ;   XREF to: 0043f590 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590(CLZWDecompress * this_ptr, _FILE * output_file)
    ADD ESP,0x8                         ; 004e1635
    LEA EAX,[ESP + 0x4d0]               ; 004e1638
    PUSH EAX                            ; 004e163f
    CALL crt_stdio.c_fflush_FUN_00600e29 ; 004e1640
        ;   XREF to: 00600e29 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflush_FUN_00600e29(_FILE * stream)
    ADD ESP,0x4                         ; 004e1645
    LEA EAX,[ESP + 0x550]               ; 004e1648
    PUSH EAX                            ; 004e164f
    CALL crt_stdio.c_fflush_FUN_00600e29 ; 004e1650
        ;   XREF to: 00600e29 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflush_FUN_00600e29(_FILE * stream)
    ADD ESP,0x4                         ; 004e1655
    CMP dword ptr [ESP + 0x608],0x0     ; 004e1658
    JNZ 0x004e1879                      ; 004e1660
        ;   XREF to: 004e1879 (CONDITIONAL_JUMP)  ; LAB_004e1879
    PUSH 0xe1e                          ; 004e1666
    PUSH 0x62cb55                       ; 004e166b | = "..\\core\\game.cpp"
    PUSH 0x62cb66                       ; 004e1670 | = "rt"
    PUSH ESI                            ; 004e1675
    PUSH 0x67b670                       ; 004e1676 | = "save\\$$SAVE$$.TMP"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004e167b
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004e1680
    MOV EBX,EAX                         ; 004e1683
    TEST EAX,EAX                        ; 004e1685
    JNZ 0x004e16b1                      ; 004e1687
        ;   XREF to: 004e16b1 (CONDITIONAL_JUMP)  ; LAB_004e16b1
    PUSH 0x67b670                       ; 004e1689 | = "save\\$$SAVE$$.TMP"
    MOV EDX,0x62cb69                    ; 004e168e | = "..\\core\\game.cpp"
    MOV ECX,0xe1f                       ; 004e1693
    PUSH 0x62cb7a                       ; 004e1698 | = "Can't reopen %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 004e169d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004e16a3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004e16a9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004e16ae
    PUSH 0x0                            ; 004e16b1
        ;   Label: LAB_004e16b1
    LEA EAX,[ESP + 0x5d4]               ; 004e16b3
    PUSH EAX                            ; 004e16ba
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0 ; 004e16bb
        ;   XREF to: 0043edf0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e16c0
    PUSH 0x1                            ; 004e16c3
    LEA EAX,[ESP + 0x5d0]               ; 004e16c5
    PUSH EAX                            ; 004e16cc
    CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0 ; 004e16cd
        ;   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_0043e9b0(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e16d2
    PUSH 0x0                            ; 004e16d5
    LEA EAX,[ESP + 0x554]               ; 004e16d7
    PUSH EAX                            ; 004e16de
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 004e16df
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e16e4
    PUSH 0x0                            ; 004e16e7
    LEA EAX,[ESP + 0x4d4]               ; 004e16e9
    PUSH EAX                            ; 004e16f0
    CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856 ; 004e16f1
        ;   XREF to: 005ff856 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e16f6
    PUSH EBX                            ; 004e16f9
        ;   Label: LAB_004e16f9
    PUSH 0xff                           ; 004e16fa
    LEA EAX,[ESP + 0x310]               ; 004e16ff
    PUSH EAX                            ; 004e1706
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004e1707
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004e170c
    PUSH 0xa                            ; 004e170f
    PUSH 0x62cb8a                       ; 004e1711 | = "CInventory"
    LEA EAX,[ESP + 0x310]               ; 004e1716
    PUSH EAX                            ; 004e171d
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 004e171e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004e1723
    TEST EAX,EAX                        ; 004e1726
    JNZ 0x004e18e6                      ; 004e1728
        ;   XREF to: 004e18e6 (CONDITIONAL_JUMP)  ; LAB_004e18e6
    PUSH 0xe28                          ; 004e172e
    PUSH 0x62cb95                       ; 004e1733 | = "..\\core\\game.cpp"
    PUSH EBX                            ; 004e1738
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e1739
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004e173e
    MOV EAX,ESP                         ; 004e1741
    PUSH EAX                            ; 004e1743
    PUSH 0x62cba6                       ; 004e1744 | = "Can't load old save game file %s.  So..."
    MOV ECX,dword ptr [0x00678a60]      ; 004e1749 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004e174f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 004e1750
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004e1755
    JMP 0x004e13c4                      ; 004e1758
        ;   XREF to: 004e13c4 (UNCONDITIONAL_JUMP)  ; LAB_004e13c4
    XOR AH,AH                           ; 004e175d
        ;   Label: LAB_004e175d
    MOV byte ptr [ESP],AH               ; 004e175f
    JMP 0x004e134a                      ; 004e1762
        ;   XREF to: 004e134a (UNCONDITIONAL_JUMP)  ; LAB_004e134a
    MOV EAX,[0x020a5720]                ; 004e1767 | g_ThemeFont
        ;   Label: LAB_004e1767
    MOV [0x02cf1cd0],EAX                ; 004e176c | g_EditorFont
    JMP 0x004e1365                      ; 004e1771
        ;   XREF to: 004e1365 (UNCONDITIONAL_JUMP)  ; LAB_004e1365
    PUSH 0x1                            ; 004e1776
        ;   Label: LAB_004e1776
    LEA EAX,[ESP + 0x4]                 ; 004e1778
    PUSH EAX                            ; 004e177c
    PUSH 0x62ca91                       ; 004e177d | = "*.noc"
    PUSH 0x62ca97                       ; 004e1782 | = "save"
    PUSH 0x62ca9c                       ; 004e1787 | = "Select file to load"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e178c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e1791
    PUSH EAX                            ; 004e1794
    MOV EBX,dword ptr [0x00678a60]      ; 004e1795 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 004e179b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 004e179c
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 004e17a1
    TEST EAX,EAX                        ; 004e17a4
    JNZ 0x004e13f1                      ; 004e17a6
        ;   XREF to: 004e13f1 (CONDITIONAL_JUMP)  ; LAB_004e13f1
    MOV EAX,dword ptr [ESP + 0x5fc]     ; 004e17ac
        ;   Label: LAB_004e17ac
    MOV [0x02cf1cd0],EAX                ; 004e17b3 | g_EditorFont
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004e17b8
    PUSH 0x67b670                       ; 004e17bf | = "save\\$$SAVE$$.TMP"
    MOV dword ptr [EAX + 0x234],0x0     ; 004e17c4
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 004e17ce
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 004e17d3
    ADD ESP,0x628                       ; 004e17d6
        ;   Label: LAB_004e17d6
    POP EBP                             ; 004e17dc
    POP EDI                             ; 004e17dd
    POP ESI                             ; 004e17de
    POP EBX                             ; 004e17df
    RET                                 ; 004e17e0
    PUSH 0x62cadd                       ; 004e17e1 | = "Can't open saved game file."
        ;   Label: LAB_004e17e1
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e17e6
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e17eb
    PUSH EAX                            ; 004e17ee
    MOV EBX,dword ptr [0x00678a60]      ; 004e17ef | g_CEditorToolsPtr
    PUSH EBX                            ; 004e17f5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e17f6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e17fb
    PUSH 0x0                            ; 004e17fe
    LEA EAX,[ESP + 0x554]               ; 004e1800
    PUSH EAX                            ; 004e1807
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 004e1808
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e180d
    PUSH 0x0                            ; 004e1810
    LEA EAX,[ESP + 0x4d4]               ; 004e1812
    PUSH EAX                            ; 004e1819
    CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856 ; 004e181a
        ;   XREF to: 005ff856 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e181f
    ADD ESP,0x628                       ; 004e1822
    POP EBP                             ; 004e1828
    POP EDI                             ; 004e1829
    POP ESI                             ; 004e182a
    POP EBX                             ; 004e182b
    RET                                 ; 004e182c
    PUSH 0x62caf9                       ; 004e182d | = "Can't create temp file to load saved ..."
        ;   Label: LAB_004e182d
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e1832
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e1837
    PUSH EAX                            ; 004e183a
    MOV EDI,dword ptr [0x00678a60]      ; 004e183b | g_CEditorToolsPtr
    PUSH EDI                            ; 004e1841 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e1842
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e1847
    PUSH 0x0                            ; 004e184a
    LEA EAX,[ESP + 0x554]               ; 004e184c
    PUSH EAX                            ; 004e1853
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 004e1854
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e1859
    PUSH 0x0                            ; 004e185c
    LEA EAX,[ESP + 0x4d4]               ; 004e185e
    PUSH EAX                            ; 004e1865
    CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856 ; 004e1866
        ;   XREF to: 005ff856 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e186b
    ADD ESP,0x628                       ; 004e186e
    POP EBP                             ; 004e1874
    POP EDI                             ; 004e1875
    POP ESI                             ; 004e1876
    POP EBX                             ; 004e1877
    RET                                 ; 004e1878
    PUSH 0x62cb29                       ; 004e1879 | = "Error writing temp file to load saved..."
        ;   Label: LAB_004e1879
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e187e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e1883
    PUSH EAX                            ; 004e1886
    MOV EBX,dword ptr [0x00678a60]      ; 004e1887 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 004e188d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e188e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e1893
    PUSH ESI                            ; 004e1896
    LEA EAX,[ESP + 0x5d4]               ; 004e1897
    PUSH EAX                            ; 004e189e
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0 ; 004e189f
        ;   XREF to: 0043edf0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e18a4
    PUSH 0x1                            ; 004e18a7
    LEA EAX,[ESP + 0x5d0]               ; 004e18a9
    PUSH EAX                            ; 004e18b0
    CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0 ; 004e18b1
        ;   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_0043e9b0(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e18b6
    PUSH ESI                            ; 004e18b9
    LEA EAX,[ESP + 0x554]               ; 004e18ba
    PUSH EAX                            ; 004e18c1
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 004e18c2
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e18c7
    PUSH ESI                            ; 004e18ca
    LEA EAX,[ESP + 0x4d4]               ; 004e18cb
    PUSH EAX                            ; 004e18d2
    CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856 ; 004e18d3
        ;   XREF to: 005ff856 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e18d8
    ADD ESP,0x628                       ; 004e18db
    POP EBP                             ; 004e18e1
    POP EDI                             ; 004e18e2
    POP ESI                             ; 004e18e3
    POP EBX                             ; 004e18e4
    RET                                 ; 004e18e5
    LEA EAX,[ESP + 0x604]               ; 004e18e6
        ;   Label: LAB_004e18e6
    PUSH EAX                            ; 004e18ed
    PUSH 0x62cbd0                       ; 004e18ee | = "%d\n"
    PUSH EBX                            ; 004e18f3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004e18f4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004e18f9
    CMP dword ptr [ESP + 0x604],0x3     ; 004e18fc
    JL 0x004e1bc0                       ; 004e1904
        ;   XREF to: 004e1bc0 (CONDITIONAL_JUMP)  ; LAB_004e1bc0
    PUSH EBP                            ; 004e190a
    PUSH EBX                            ; 004e190b
    MOV EDI,dword ptr [0x0067d550]      ; 004e190c | g_CDemonMissionPtr
    PUSH EDI                            ; 004e1912 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 ; 004e1913
        ;   XREF to: 00522eb0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0(CDemonMission * this_ptr, _FILE * file_handle)
    ADD ESP,0xc                         ; 004e1918
    PUSH EBX                            ; 004e191b
    PUSH 0xff                           ; 004e191c
    LEA EAX,[ESP + 0x310]               ; 004e1921
    PUSH EAX                            ; 004e1928
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004e1929
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004e192e
    PUSH 0x2db87d0                      ; 004e1931 | g_LocalHeroIndex
    PUSH 0x2db87bc                      ; 004e1936 | g_HeroCount
    PUSH 0x62cc0f                       ; 004e193b | = "%d, %d\n"
    PUSH EBX                            ; 004e1940
    XOR EBP,EBP                         ; 004e1941
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004e1943
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004e1948
    MOV EAX,[0x02db87bc]                ; 004e194b | g_HeroCount
    MOV dword ptr [ESP + 0x624],EBP     ; 004e1950
    TEST EAX,EAX                        ; 004e1957
    JLE 0x004e1a08                      ; 004e1959
        ;   XREF to: 004e1a08 (CONDITIONAL_JUMP)  ; LAB_004e1a08
    LEA EAX,[ESP + 0x408]               ; 004e195f
        ;   Label: LAB_004e195f
    PUSH EAX                            ; 004e1966
    MOV ECX,0x32                        ; 004e1967
    PUSH 0x62cc17                       ; 004e196c | = "%[^\n]\n"
    LEA EDI,[ESP + 0x410]               ; 004e1971
    MOV ESI,0x67b688                    ; 004e1978 | = "(file corrupt)"
    PUSH EBX                            ; 004e197d
    MOVSD.REP ES:EDI,ESI                ; 004e197e | = "(file corrupt)" | s_e_corrupt)_0067b68c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004e1980
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004e1985
    MOV EDX,dword ptr [0x02db880c]      ; 004e1988 | g_CHeroClassInfo.name_hash
    PUSH EDX                            ; 004e198e
    LEA EAX,[ESP + 0x40c]               ; 004e198f
    PUSH EAX                            ; 004e1996
    MOV ECX,dword ptr [0x0067d550]      ; 004e1997 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 004e199d | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 004e199e
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004e19a3
    PUSH EAX                            ; 004e19a6
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004e19a7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e19ac
    MOV dword ptr [EBP + 0x2db87c0],EAX ; 004e19af | g_HeroActors
    TEST EAX,EAX                        ; 004e19b5
    JNZ 0x004e19e8                      ; 004e19b7
        ;   XREF to: 004e19e8 (CONDITIONAL_JUMP)  ; LAB_004e19e8
    PUSH 0xe4a                          ; 004e19b9
    PUSH 0x62cc1e                       ; 004e19be | = "..\\core\\game.cpp"
    PUSH EBX                            ; 004e19c3
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e19c4
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004e19c9
    LEA EAX,[ESP + 0x408]               ; 004e19cc
    PUSH EAX                            ; 004e19d3
    PUSH 0x62cc2f                       ; 004e19d4 | = "Can't find hero %s.  Sorry."
    MOV EDI,dword ptr [0x00678a60]      ; 004e19d9 | g_CEditorToolsPtr
    PUSH EDI                            ; 004e19df | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e19e0
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004e19e5
    MOV ESI,dword ptr [ESP + 0x624]     ; 004e19e8
        ;   Label: LAB_004e19e8
    MOV EDI,dword ptr [0x02db87bc]      ; 004e19ef | g_HeroCount
    INC ESI                             ; 004e19f5
    ADD EBP,0x4                         ; 004e19f6
    MOV dword ptr [ESP + 0x624],ESI     ; 004e19f9
    CMP ESI,EDI                         ; 004e1a00
    JL 0x004e195f                       ; 004e1a02
        ;   XREF to: 004e195f (CONDITIONAL_JUMP)  ; LAB_004e195f
    MOV EBP,dword ptr [0x0067d550]      ; 004e1a08 | g_CDemonMissionPtr
        ;   Label: LAB_004e1a08
    PUSH EBP                            ; 004e1a0e | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_FUN_00524760 ; 004e1a0f
        ;   XREF to: 00524760 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_FUN_00524760(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004e1a14
    TEST EAX,EAX                        ; 004e1a17
    JZ 0x004e17ac                       ; 004e1a19
        ;   XREF to: 004e17ac (CONDITIONAL_JUMP)  ; LAB_004e17ac
    PUSH EBX                            ; 004e1a1f
    MOV EAX,[0x006793d0]                ; 004e1a20 | g_CEventListInstance | g_CEventListPtr
    PUSH EAX                            ; 004e1a25 | g_CEventListInstance
    CALL core_event.cpp_CEventList_loadState_FUN_004b0fc0 ; 004e1a26
        ;   XREF to: 004b0fc0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_loadState_FUN_004b0fc0(CEventList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004e1a2b
    PUSH EBX                            ; 004e1a2e
    MOV EDX,dword ptr [0x00680d50]      ; 004e1a2f | g_CScriptInstance | g_CScriptPtr
    PUSH EDX                            ; 004e1a35 | g_CScriptInstance
    CALL core_script.cpp_CScript_loadState_FUN_00560820 ; 004e1a36
        ;   XREF to: 00560820 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_loadState_FUN_00560820(CScript * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004e1a3b
    MOV ECX,dword ptr [ESP + 0x604]     ; 004e1a3e
    CMP ECX,0x4                         ; 004e1a45
    JL 0x004e1bef                       ; 004e1a48
        ;   XREF to: 004e1bef (CONDITIONAL_JUMP)  ; LAB_004e1bef
    JNZ 0x004e1a60                      ; 004e1a4e
        ;   XREF to: 004e1a60 (CONDITIONAL_JUMP)  ; LAB_004e1a60
    PUSH EBX                            ; 004e1a50
    MOV EDI,dword ptr [0x0067b9a0]      ; 004e1a51 | g_CGorePtr
    PUSH EDI                            ; 004e1a57 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ee1e0 ; 004e1a58
        ;   XREF to: 004ee1e0 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_FUN_004ee1e0(CGore * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004e1a5d
    CMP dword ptr [ESP + 0x604],0x7     ; 004e1a60
        ;   Label: LAB_004e1a60
    JGE 0x004e1c03                      ; 004e1a68
        ;   XREF to: 004e1c03 (CONDITIONAL_JUMP)  ; LAB_004e1c03
    MOV ECX,dword ptr [0x0067a3d0]      ; 004e1a6e | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 004e1a74 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_init_FUN_004c6c80 ; 004e1a75
        ;   XREF to: 004c6c80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_004c6c80(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004e1a7a
    CMP dword ptr [ESP + 0x604],0x6     ; 004e1a7d
        ;   Label: LAB_004e1a7d
    JL 0x004e1c18                       ; 004e1a85
        ;   XREF to: 004e1c18 (CONDITIONAL_JUMP)  ; LAB_004e1c18
    PUSH EBX                            ; 004e1a8b
    PUSH 0xff                           ; 004e1a8c
    LEA EAX,[ESP + 0x310]               ; 004e1a91
    PUSH EAX                            ; 004e1a98
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004e1a99
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004e1a9e
    PUSH 0x2d82d84                      ; 004e1aa1 | DAT_02d82d84
    PUSH 0x62cc4b                       ; 004e1aa6 | = "%d\n"
    PUSH EBX                            ; 004e1aab
    MOV EBP,0x1                         ; 004e1aac
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004e1ab1
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,[0x02d82d84]                ; 004e1ab6 | DAT_02d82d84
    ADD ESP,0xc                         ; 004e1abb
    CMP EAX,EBP                         ; 004e1abe
    JL 0x004e1ae6                       ; 004e1ac0
        ;   XREF to: 004e1ae6 (CONDITIONAL_JUMP)  ; LAB_004e1ae6
    MOV ESI,0x2d82d84                   ; 004e1ac2 | DAT_02d82d84
    ADD ESI,0x4                         ; 004e1ac7
    PUSH ESI                            ; 004e1aca | DAT_02d82d88 | DAT_02d82d8c
        ;   Label: LAB_004e1aca
    PUSH 0x62cc4f                       ; 004e1acb | = "%d\n"
    PUSH EBX                            ; 004e1ad0
    INC EBP                             ; 004e1ad1
    ADD ESI,0x4                         ; 004e1ad2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004e1ad5
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,[0x02d82d84]                ; 004e1ada | DAT_02d82d84
    ADD ESP,0xc                         ; 004e1adf
    CMP EBP,EAX                         ; 004e1ae2
    JLE 0x004e1aca                      ; 004e1ae4
        ;   XREF to: 004e1aca (CONDITIONAL_JUMP)  ; LAB_004e1aca
    MOV dword ptr [0x02d82d80],0x1      ; 004e1ae6 | DAT_02d82d80
        ;   Label: LAB_004e1ae6
    CMP dword ptr [ESP + 0x604],0x8     ; 004e1af0
        ;   Label: LAB_004e1af0
    JL 0x004e1b3e                       ; 004e1af8
        ;   XREF to: 004e1b3e (CONDITIONAL_JUMP)  ; LAB_004e1b3e
    PUSH EBX                            ; 004e1afa
    PUSH 0xff                           ; 004e1afb
    LEA EAX,[ESP + 0x310]               ; 004e1b00
    PUSH EAX                            ; 004e1b07
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004e1b08
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004e1b0d
    MOV ESI,dword ptr [ESP + 0x60c]     ; 004e1b10
    PUSH ESI                            ; 004e1b17
    MOV EDI,dword ptr [ESP + 0x618]     ; 004e1b18
    PUSH EDI                            ; 004e1b1f
    MOV EBP,dword ptr [ESP + 0x624]     ; 004e1b20
    PUSH EBP                            ; 004e1b27
    MOV EAX,dword ptr [ESP + 0x61c]     ; 004e1b28
    PUSH EAX                            ; 004e1b2f
    PUSH 0x62cc53                       ; 004e1b30 | = "%f,%f,%d,%d\n"
    PUSH EBX                            ; 004e1b35
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004e1b36
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 004e1b3b
    CMP dword ptr [ESP + 0x604],0x9     ; 004e1b3e
        ;   Label: LAB_004e1b3e
    JL 0x004e1b58                       ; 004e1b46
        ;   XREF to: 004e1b58 (CONDITIONAL_JUMP)  ; LAB_004e1b58
    PUSH EBX                            ; 004e1b48
    MOV ECX,dword ptr [0x006810c8]      ; 004e1b49 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004e1b4f | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230 ; 004e1b50
        ;   XREF to: 00571230 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 004e1b55
    PUSH 0xe8c                          ; 004e1b58
        ;   Label: LAB_004e1b58
    PUSH 0x62cc60                       ; 004e1b5d | = "..\\core\\game.cpp"
    PUSH EBX                            ; 004e1b62
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e1b63
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004e1b68
    CMP dword ptr [ESP + 0x644],0x0     ; 004e1b6b
    JZ 0x004e17d6                       ; 004e1b73
        ;   XREF to: 004e17d6 (CONDITIONAL_JUMP)  ; LAB_004e17d6
    MOV ESI,dword ptr [0x0067d550]      ; 004e1b79 | g_CDemonMissionPtr
    PUSH ESI                            ; 004e1b7f | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_run_FUN_00524420 ; 004e1b80
        ;   XREF to: 00524420 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_00524420(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004e1b85
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004e1b88
    CMP dword ptr [EAX + 0x9c4],0x0     ; 004e1b8f
    JZ 0x004e17ac                       ; 004e1b96
        ;   XREF to: 004e17ac (CONDITIONAL_JUMP)  ; LAB_004e17ac
    MOV EAX,dword ptr [ESP + 0x618]     ; 004e1b9c
    MOV dword ptr [ESP + 0x640],EAX     ; 004e1ba3
    MOV EAX,dword ptr [ESP + 0x63c]     ; 004e1baa
    MOV dword ptr [EAX + 0x9c4],0x0     ; 004e1bb1
    JMP 0x004e13c4                      ; 004e1bbb
        ;   XREF to: 004e13c4 (UNCONDITIONAL_JUMP)  ; LAB_004e13c4
    PUSH 0xe37                          ; 004e1bc0
        ;   Label: LAB_004e1bc0
    PUSH 0x62cbd4                       ; 004e1bc5 | = "..\\core\\game.cpp"
    PUSH EBX                            ; 004e1bca
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e1bcb
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004e1bd0
    MOV EAX,ESP                         ; 004e1bd3
    PUSH EAX                            ; 004e1bd5
    PUSH 0x62cbe5                       ; 004e1bd6 | = "Can't load old save game file %s.  So..."
    MOV EDX,dword ptr [0x00678a60]      ; 004e1bdb | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004e1be1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 004e1be2
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004e1be7
    JMP 0x004e13c4                      ; 004e1bea
        ;   XREF to: 004e13c4 (UNCONDITIONAL_JUMP)  ; LAB_004e13c4
    MOV EBP,dword ptr [0x0067b9a0]      ; 004e1bef | g_CGorePtr
        ;   Label: LAB_004e1bef
    PUSH EBP                            ; 004e1bf5 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ed760 ; 004e1bf6
        ;   XREF to: 004ed760 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ed760(CGore * this_ptr)
    ADD ESP,0x4                         ; 004e1bfb
    JMP 0x004e1a60                      ; 004e1bfe
        ;   XREF to: 004e1a60 (UNCONDITIONAL_JUMP)  ; LAB_004e1a60
    PUSH EBX                            ; 004e1c03
        ;   Label: LAB_004e1c03
    MOV EDX,dword ptr [0x0067a3d0]      ; 004e1c04 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 004e1c0a | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_load_FUN_004c9300 ; 004e1c0b
        ;   XREF to: 004c9300 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_load_FUN_004c9300(CFireEffect * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004e1c10
    JMP 0x004e1a7d                      ; 004e1c13
        ;   XREF to: 004e1a7d (UNCONDITIONAL_JUMP)  ; LAB_004e1a7d
    XOR EDI,EDI                         ; 004e1c18
        ;   Label: LAB_004e1c18
    MOV dword ptr [0x02d82d80],EDI      ; 004e1c1a | DAT_02d82d80
    JMP 0x004e1af0                      ; 004e1c20
        ;   XREF to: 004e1af0 (UNCONDITIONAL_JUMP)  ; LAB_004e1af0

