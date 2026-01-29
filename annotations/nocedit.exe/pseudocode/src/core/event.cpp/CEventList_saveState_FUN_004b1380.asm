; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_event_cpp_CEventList_saveState_FUN_004b1380(CEventList *this_ptr,_FILE *file_handle)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e0e58
;
; Referenced Globals:
;   TerminatedCString s_CEventList_version_00625e1d
;   TerminatedCString s_d_00625e34
;   TerminatedCString s_eventCount_list_00625e38
;   TerminatedCString s_d_00625e4d
;   TerminatedCString s_s_00625e51
;   TerminatedCString s_currentEventCount_list_00625e55
;   TerminatedCString s_d_00625e71
;   TerminatedCString s_s_00625e75
;   TerminatedCString s_persistentEventCount_lis_00625e79
;   TerminatedCString s_d_00625e98
;   TerminatedCString s_s_00625e9c
;   TerminatedCString s_timerCount_list_duration_00625ea0
;   TerminatedCString s_d_00625ec5
;   TerminatedCString s_f_s_00625ec9
;   TerminatedCString s_counterCount_list_value__00625ed1
;   ... and 8 more
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1380
        ;   Label: core_event.cpp_CEventList_saveState_FUN_004b1380
    PUSH ESI                            ; 004b1381
    PUSH EDI                            ; 004b1382
    PUSH EBP                            ; 004b1383
    SUB ESP,0xc                         ; 004b1384
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b1387
    MOV ESI,dword ptr [ESP + 0x24]      ; 004b138b
    PUSH 0x625e1d                       ; 004b138f | = "// CEventList version\n"
    PUSH ESI                            ; 004b1394
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b1395
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004b139a
    PUSH 0x5                            ; 004b139d
    PUSH 0x625e34                       ; 004b139f | = "%d\n"
    PUSH ESI                            ; 004b13a4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b13a5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004b13aa
    PUSH 0x625e38                       ; 004b13ad | = "// eventCount, list\n"
    PUSH ESI                            ; 004b13b2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b13b3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004b13b8
    MOV EDX,dword ptr [EBX]             ; 004b13bb
    PUSH EDX                            ; 004b13bd
    PUSH 0x625e4d                       ; 004b13be | = "%d\n"
    PUSH ESI                            ; 004b13c3
    XOR EBP,EBP                         ; 004b13c4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b13c6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX]             ; 004b13cb
    ADD ESP,0xc                         ; 004b13cd
    TEST ECX,ECX                        ; 004b13d0
    JLE 0x004b13f0                      ; 004b13d2
        ;   XREF to: 004b13f0 (CONDITIONAL_JUMP)  ; LAB_004b13f0
    LEA EDI,[EBX + 0x4]                 ; 004b13d4
    PUSH EDI                            ; 004b13d7
        ;   Label: LAB_004b13d7
    PUSH 0x625e51                       ; 004b13d8 | = "%s\n"
    PUSH ESI                            ; 004b13dd
    INC EBP                             ; 004b13de
    ADD EDI,0x20                        ; 004b13df
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b13e2
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX]             ; 004b13e7
    ADD ESP,0xc                         ; 004b13e9
    CMP EBP,EAX                         ; 004b13ec
    JL 0x004b13d7                       ; 004b13ee
        ;   XREF to: 004b13d7 (CONDITIONAL_JUMP)  ; LAB_004b13d7
    PUSH 0x625e55                       ; 004b13f0 | = "// currentEventCount, list\n"
        ;   Label: LAB_004b13f0
    PUSH ESI                            ; 004b13f5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b13f6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004b13fb
    MOV EDX,dword ptr [EBX + 0xc84]     ; 004b13fe
    PUSH EDX                            ; 004b1404
    PUSH 0x625e71                       ; 004b1405 | = "%d\n"
    PUSH ESI                            ; 004b140a
    XOR EDI,EDI                         ; 004b140b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b140d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0xc84]     ; 004b1412
    ADD ESP,0xc                         ; 004b1418
    TEST ECX,ECX                        ; 004b141b
    JLE 0x004b1450                      ; 004b141d
        ;   XREF to: 004b1450 (CONDITIONAL_JUMP)  ; LAB_004b1450
    LEA EBP,[EBX + 0xc88]               ; 004b141f
    PUSH EBP                            ; 004b1425
        ;   Label: LAB_004b1425
    PUSH 0x625e75                       ; 004b1426 | = "%s\n"
    PUSH ESI                            ; 004b142b
    INC EDI                             ; 004b142c
    ADD EBP,0x20                        ; 004b142d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b1430
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0xc84]     ; 004b1435
    ADD ESP,0xc                         ; 004b143b
    CMP EDI,EAX                         ; 004b143e
    JL 0x004b1425                       ; 004b1440
        ;   XREF to: 004b1425 (CONDITIONAL_JUMP)  ; LAB_004b1425
    LEA EAX,[EAX]                       ; 004b1442
    LEA EDX,[EDX]                       ; 004b1448
    MOV EAX,EAX                         ; 004b144e
    PUSH 0x625e79                       ; 004b1450 | = "// persistentEventCount, list\n"
        ;   Label: LAB_004b1450
    PUSH ESI                            ; 004b1455
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b1456
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004b145b
    MOV EDX,dword ptr [EBX + 0x258c]    ; 004b145e
    PUSH EDX                            ; 004b1464
    PUSH 0x625e98                       ; 004b1465 | = "%d\n"
    PUSH ESI                            ; 004b146a
    XOR EBP,EBP                         ; 004b146b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b146d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x258c]    ; 004b1472
    ADD ESP,0xc                         ; 004b1478
    TEST ECX,ECX                        ; 004b147b
    JLE 0x004b14b0                      ; 004b147d
        ;   XREF to: 004b14b0 (CONDITIONAL_JUMP)  ; LAB_004b14b0
    LEA EDI,[EBX + 0x2590]              ; 004b147f
    PUSH EDI                            ; 004b1485
        ;   Label: LAB_004b1485
    PUSH 0x625e9c                       ; 004b1486 | = "%s\n"
    PUSH ESI                            ; 004b148b
    INC EBP                             ; 004b148c
    ADD EDI,0x20                        ; 004b148d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b1490
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x258c]    ; 004b1495
    ADD ESP,0xc                         ; 004b149b
    CMP EBP,EAX                         ; 004b149e
    JL 0x004b1485                       ; 004b14a0
        ;   XREF to: 004b1485 (CONDITIONAL_JUMP)  ; LAB_004b1485
    LEA EAX,[EAX]                       ; 004b14a2
    LEA EDX,[EDX]                       ; 004b14a8
    MOV EAX,EAX                         ; 004b14ae
    PUSH 0x625ea0                       ; 004b14b0 | = "// timerCount, list(duration, name)\n"
        ;   Label: LAB_004b14b0
    PUSH ESI                            ; 004b14b5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b14b6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004b14bb
    MOV EDX,dword ptr [EBX + 0x3210]    ; 004b14be
    PUSH EDX                            ; 004b14c4
    PUSH 0x625ec5                       ; 004b14c5 | = "%d\n"
    PUSH ESI                            ; 004b14ca
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b14cb
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004b14d0
    XOR ECX,ECX                         ; 004b14d3
    MOV EDI,dword ptr [EBX + 0x3210]    ; 004b14d5
    MOV dword ptr [ESP + 0x4],ECX       ; 004b14db
    TEST EDI,EDI                        ; 004b14df
    JLE 0x004b1520                      ; 004b14e1
        ;   XREF to: 004b1520 (CONDITIONAL_JUMP)  ; LAB_004b1520
    LEA EBP,[EBX + 0x3214]              ; 004b14e3
    MOV EDI,EBX                         ; 004b14e9
    PUSH EBP                            ; 004b14eb
        ;   Label: LAB_004b14eb
    SUB ESP,0x8                         ; 004b14ec
    FLD float ptr [EDI + 0x3354]        ; 004b14ef
    FSTP double ptr [ESP]               ; 004b14f5
    PUSH 0x625ec9                       ; 004b14f8 | = "%f, %s\n"
    PUSH ESI                            ; 004b14fd
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b14fe
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004b1503
    ADD EDI,0x4                         ; 004b1506
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1509
    ADD EBP,0x20                        ; 004b150d
    INC EAX                             ; 004b1510
    MOV EDX,dword ptr [EBX + 0x3210]    ; 004b1511
    MOV dword ptr [ESP + 0x4],EAX       ; 004b1517
    CMP EAX,EDX                         ; 004b151b
    JL 0x004b14eb                       ; 004b151d
        ;   XREF to: 004b14eb (CONDITIONAL_JUMP)  ; LAB_004b14eb
    NOP                                 ; 004b151f
    PUSH 0x625ed1                       ; 004b1520 | = "// counterCount, list(value, name)\n"
        ;   Label: LAB_004b1520
    PUSH ESI                            ; 004b1525
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b1526
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004b152b
    MOV ECX,dword ptr [EBX + 0x337c]    ; 004b152e
    PUSH ECX                            ; 004b1534
    PUSH 0x625ef5                       ; 004b1535 | = "%d\n"
    PUSH ESI                            ; 004b153a
    XOR EDI,EDI                         ; 004b153b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b153d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004b1542
    MOV EBP,dword ptr [EBX + 0x337c]    ; 004b1545
    MOV dword ptr [ESP + 0x8],EDI       ; 004b154b
    TEST EBP,EBP                        ; 004b154f
    JLE 0x004b1590                      ; 004b1551
        ;   XREF to: 004b1590 (CONDITIONAL_JUMP)  ; LAB_004b1590
    LEA EDI,[EBX + 0x3380]              ; 004b1553
    MOV EBP,EBX                         ; 004b1559
    PUSH EDI                            ; 004b155b
        ;   Label: LAB_004b155b
    MOV EAX,dword ptr [EBP + 0x34c0]    ; 004b155c
    PUSH EAX                            ; 004b1562
    PUSH 0x625ef9                       ; 004b1563 | = "%d, %s\n"
    PUSH ESI                            ; 004b1568
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b1569
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004b156e
    ADD EBP,0x4                         ; 004b1571
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b1574
    ADD EDI,0x20                        ; 004b1578
    INC EDX                             ; 004b157b
    MOV ECX,dword ptr [EBX + 0x337c]    ; 004b157c
    MOV dword ptr [ESP + 0x8],EDX       ; 004b1582
    CMP EDX,ECX                         ; 004b1586
    JL 0x004b155b                       ; 004b1588
        ;   XREF to: 004b155b (CONDITIONAL_JUMP)  ; LAB_004b155b
    LEA EAX,[EAX]                       ; 004b158a
    PUSH 0x625f01                       ; 004b1590 | = "// actorVarCount, list(varName, actor..."
        ;   Label: LAB_004b1590
    PUSH ESI                            ; 004b1595
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b1596
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004b159b
    MOV EDI,dword ptr [EBX + 0x34e8]    ; 004b159e
    PUSH EDI                            ; 004b15a4
    PUSH 0x625f2d                       ; 004b15a5 | = "%d\n"
    PUSH ESI                            ; 004b15aa
    XOR EBP,EBP                         ; 004b15ab
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b15ad
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004b15b2
    ADD ESP,0xc                         ; 004b15b8
    TEST EAX,EAX                        ; 004b15bb
    JLE 0x004b1600                      ; 004b15bd
        ;   XREF to: 004b1600 (CONDITIONAL_JUMP)  ; LAB_004b1600
    LEA EAX,[EBX + 0x37da]              ; 004b15bf
    LEA EDI,[EBX + 0x34ec]              ; 004b15c5
    MOV dword ptr [ESP],EAX             ; 004b15cb
    MOV EDX,dword ptr [ESP]             ; 004b15ce
        ;   Label: LAB_004b15ce
    PUSH EDX                            ; 004b15d1
    PUSH EDI                            ; 004b15d2
    PUSH 0x625f31                       ; 004b15d3 | = "\"%s\", \"%s\"\n"
    PUSH ESI                            ; 004b15d8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b15d9
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004b15de
    INC EBP                             ; 004b15e1
    MOV ECX,dword ptr [ESP]             ; 004b15e2
    ADD EDI,0x1e                        ; 004b15e5
    ADD ECX,0x1e                        ; 004b15e8
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004b15eb
    MOV dword ptr [ESP],ECX             ; 004b15f1
    CMP EBP,EAX                         ; 004b15f4
    JL 0x004b15ce                       ; 004b15f6
        ;   XREF to: 004b15ce (CONDITIONAL_JUMP)  ; LAB_004b15ce
    LEA EAX,[EAX]                       ; 004b15f8
    MOV EDX,EDX                         ; 004b15fe
    PUSH 0x625f3d                       ; 004b1600 | = "// gameFlagCount, list\n"
        ;   Label: LAB_004b1600
    PUSH ESI                            ; 004b1605
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b1606
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004b160b
    MOV EDX,dword ptr [EBX + 0x1908]    ; 004b160e
    PUSH EDX                            ; 004b1614
    PUSH 0x625f55                       ; 004b1615 | = "%d\n"
    PUSH ESI                            ; 004b161a
    XOR EBP,EBP                         ; 004b161b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b161d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x1908]    ; 004b1622
    ADD ESP,0xc                         ; 004b1628
    TEST ECX,ECX                        ; 004b162b
    JLE 0x004b1660                      ; 004b162d
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    LEA EDI,[EBX + 0x190c]              ; 004b162f
    PUSH EDI                            ; 004b1635
        ;   Label: LAB_004b1635
    PUSH 0x625f59                       ; 004b1636 | = "%s\n"
    PUSH ESI                            ; 004b163b
    INC EBP                             ; 004b163c
    ADD EDI,0x20                        ; 004b163d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b1640
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x1908]    ; 004b1645
    ADD ESP,0xc                         ; 004b164b
    CMP EBP,EAX                         ; 004b164e
    JL 0x004b1635                       ; 004b1650
        ;   XREF to: 004b1635 (CONDITIONAL_JUMP)  ; LAB_004b1635
    LEA EAX,[EAX]                       ; 004b1652
    LEA EDX,[EDX]                       ; 004b1658
    MOV EAX,EAX                         ; 004b165e
    ADD ESP,0xc                         ; 004b1660
        ;   Label: LAB_004b1660
    POP EBP                             ; 004b1663
    POP EDI                             ; 004b1664
    POP ESI                             ; 004b1665
    POP EBX                             ; 004b1666
    RET                                 ; 004b1667

