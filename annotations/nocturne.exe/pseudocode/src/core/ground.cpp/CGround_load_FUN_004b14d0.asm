; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_ground_cpp_CGround_load_FUN_004b14d0(int *param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0xcc]:1  local_cc
; undefined1       Stack[-0xcb]:1  local_cb
; undefined1       Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x7b]:1  local_7b
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_init_FUN_005492b0 at 005492db
;
; Referenced Globals:
;   string s_..\\core\\ground.cpp_0058525d
;   string s_eopen_-_ext_not_found!_00585270
;   string s_..\\core\\ground.cpp_00585287
;   string s_eopen_-_Cannot_open_file_0058529a
;   TerminatedCString s_rb_005853e5
;   TerminatedCString s_raw_005853e8
;   undefined4 s_aw_005853e8+1
;   undefined4 s_w_005853e8+2
;   undefined4 s__005853e8+3
;   TerminatedCString s_data_005853ec
;   TerminatedCString s_rb_005853f1
;   TerminatedCString s_clr_005853f4
;   undefined4 s_lr_005853f4+1
;   undefined4 s_r_005853f4+2
;   undefined4 s__005853f4+3
;   ... and 3 more
;
; Called Functions:
;   core_texlist.cpp_CTextureList_load_FUN_00544950
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fread_FUN_005636d0
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b14d0
        ;   Label: core_ground.cpp_CGround_load_FUN_004b14d0
    PUSH ESI                            ; 004b14d1
    PUSH EDI                            ; 004b14d2
    PUSH EBP                            ; 004b14d3
    SUB ESP,0xbc                        ; 004b14d4
    MOV EBX,dword ptr [ESP + 0xd0]      ; 004b14da
    MOV EDX,0x5853ec                    ; 004b14e1 | = "data"
    MOV EBP,0x5853e8                    ; 004b14e6 | = "raw"
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004b14eb
    MOV EDI,ESP                         ; 004b14f2
    MOV ECX,0x5853e5                    ; 004b14f4 | = "rb"
    PUSH EDI                            ; 004b14f9
    MOV AL,byte ptr [ESI]               ; 004b14fa
        ;   Label: LAB_004b14fa
    MOV byte ptr [EDI],AL               ; 004b14fc
    CMP AL,0x0                          ; 004b14fe
    JZ 0x004b1512                       ; 004b1500
        ;   XREF to: 004b1512 (CONDITIONAL_JUMP)  ; LAB_004b1512
    MOV AL,byte ptr [ESI + 0x1]         ; 004b1502
    ADD ESI,0x2                         ; 004b1505
    MOV byte ptr [EDI + 0x1],AL         ; 004b1508
    ADD EDI,0x2                         ; 004b150b
    CMP AL,0x0                          ; 004b150e
    JNZ 0x004b14fa                      ; 004b1510
        ;   XREF to: 004b14fa (CONDITIONAL_JUMP)  ; LAB_004b14fa
    POP EDI                             ; 004b1512
        ;   Label: LAB_004b1512
    MOV ESI,ESP                         ; 004b1513
    MOV dword ptr [ESP + 0xa8],EDX      ; 004b1515 | = "data"
    MOV DL,0x2e                         ; 004b151c
    MOV dword ptr [ESP + 0xac],ECX      ; 004b151e | = "rb"
    MOV AL,byte ptr [ESI]               ; 004b1525
        ;   Label: LAB_004b1525
    CMP AL,DL                           ; 004b1527
    JZ 0x004b153d                       ; 004b1529
        ;   XREF to: 004b153d (CONDITIONAL_JUMP)  ; LAB_004b153d
    CMP AL,0x0                          ; 004b152b
    JZ 0x004b153b                       ; 004b152d
        ;   XREF to: 004b153b (CONDITIONAL_JUMP)  ; LAB_004b153b
    INC ESI                             ; 004b152f
    MOV AL,byte ptr [ESI]               ; 004b1530
    CMP AL,DL                           ; 004b1532
    JZ 0x004b153d                       ; 004b1534
        ;   XREF to: 004b153d (CONDITIONAL_JUMP)  ; LAB_004b153d
    INC ESI                             ; 004b1536
    CMP AL,0x0                          ; 004b1537
    JNZ 0x004b1525                      ; 004b1539
        ;   XREF to: 004b1525 (CONDITIONAL_JUMP)  ; LAB_004b1525
    SUB ESI,ESI                         ; 004b153b
        ;   Label: LAB_004b153b
    MOV EDI,ESI                         ; 004b153d
        ;   Label: LAB_004b153d
    TEST ESI,ESI                        ; 004b153f
    JZ 0x004b17b1                       ; 004b1541
        ;   XREF to: 004b17b1 (CONDITIONAL_JUMP)  ; LAB_004b17b1
    INC EDI                             ; 004b1547
        ;   Label: LAB_004b1547
    MOV ESI,EBP                         ; 004b1548
    MOV EDX,dword ptr [ESP + 0xac]      ; 004b154a
    PUSH EDI                            ; 004b1551
    MOV AL,byte ptr [ESI]               ; 004b1552 | = "raw" | s_w_005853e8+2
        ;   Label: LAB_004b1552
    MOV byte ptr [EDI],AL               ; 004b1554
    CMP AL,0x0                          ; 004b1556
    JZ 0x004b156a                       ; 004b1558
        ;   XREF to: 004b156a (CONDITIONAL_JUMP)  ; LAB_004b156a
    MOV AL,byte ptr [ESI + 0x1]         ; 004b155a | s_aw_005853e8+1 | s__005853e8+3
    ADD ESI,0x2                         ; 004b155d
    MOV byte ptr [EDI + 0x1],AL         ; 004b1560
    ADD EDI,0x2                         ; 004b1563
    CMP AL,0x0                          ; 004b1566
    JNZ 0x004b1552                      ; 004b1568
        ;   XREF to: 004b1552 (CONDITIONAL_JUMP)  ; LAB_004b1552
    POP EDI                             ; 004b156a
        ;   Label: LAB_004b156a
    PUSH EDX                            ; 004b156b | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 004b156c
    PUSH EAX                            ; 004b1570
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004b1571
    PUSH ECX                            ; 004b1578 | = "data"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004b1579
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004b157e
    MOV ESI,EAX                         ; 004b1581
    TEST EAX,EAX                        ; 004b1583
    JNZ 0x004b15aa                      ; 004b1585
        ;   XREF to: 004b15aa (CONDITIONAL_JUMP)  ; LAB_004b15aa
    MOV EDI,0x585287                    ; 004b1587 | = "..\\core\\ground.cpp"
    MOV EBP,0x44                        ; 004b158c
    PUSH 0x58529a                       ; 004b1591 | = "eopen - Cannot open file"
    MOV dword ptr [0x01cc4800],EDI      ; 004b1596 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004b159c | DAT_01cc4804
    CALL FUN_004c8440                   ; 004b15a2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004b15a7
    XOR EAX,EAX                         ; 004b15aa
        ;   Label: LAB_004b15aa
    MOV EDX,dword ptr [EBX + 0x4]       ; 004b15ac
    MOV dword ptr [ESP + 0xb4],EAX      ; 004b15af
    TEST EDX,EDX                        ; 004b15b6
    JLE 0x004b161e                      ; 004b15b8
        ;   XREF to: 004b161e (CONDITIONAL_JUMP)  ; LAB_004b161e
    MOV EBP,dword ptr [EBX]             ; 004b15ba
        ;   Label: LAB_004b15ba
    XOR EDI,EDI                         ; 004b15bc
    TEST EBP,EBP                        ; 004b15be
    JLE 0x004b1608                      ; 004b15c0
        ;   XREF to: 004b1608 (CONDITIONAL_JUMP)  ; LAB_004b1608
    MOV EBP,dword ptr [ESI + 0x4]       ; 004b15c2
        ;   Label: LAB_004b15c2
    TEST EBP,EBP                        ; 004b15c5
    JLE 0x004b15e0                      ; 004b15c7
        ;   XREF to: 004b15e0 (CONDITIONAL_JUMP)  ; LAB_004b15e0
    MOV EAX,dword ptr [ESI]             ; 004b15c9
    MOV AL,byte ptr [EAX]               ; 004b15cb
    AND EAX,0xff                        ; 004b15cd
    SUB EAX,0xd                         ; 004b15d2
    CMP EAX,0xfd                        ; 004b15d5
    JA 0x004b17d8                       ; 004b15da
        ;   XREF to: 004b17d8 (CONDITIONAL_JUMP)  ; LAB_004b17d8
    PUSH ESI                            ; 004b15e0
        ;   Label: LAB_004b15e0
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004b15e1
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004b15e6
    SHL EAX,0x7                         ; 004b15e9
        ;   Label: LAB_004b15e9
    MOV EDX,dword ptr [EBX]             ; 004b15ec
    MOV ECX,EAX                         ; 004b15ee
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004b15f0
    IMUL EAX,EDX                        ; 004b15f7
    MOV EDX,dword ptr [EBX + 0x24]      ; 004b15fa
    ADD EAX,EDI                         ; 004b15fd
    MOV word ptr [EDX + EAX*0x4],CX     ; 004b15ff
    INC EDI                             ; 004b1603
    CMP EDI,dword ptr [EBX]             ; 004b1604
    JL 0x004b15c2                       ; 004b1606
        ;   XREF to: 004b15c2 (CONDITIONAL_JUMP)  ; LAB_004b15c2
    MOV ECX,dword ptr [ESP + 0xb4]      ; 004b1608
        ;   Label: LAB_004b1608
    INC ECX                             ; 004b160f
    MOV EDI,dword ptr [EBX + 0x4]       ; 004b1610
    MOV dword ptr [ESP + 0xb4],ECX      ; 004b1613
    CMP ECX,EDI                         ; 004b161a
    JL 0x004b15ba                       ; 004b161c
        ;   XREF to: 004b15ba (CONDITIONAL_JUMP)  ; LAB_004b15ba
    PUSH ESI                            ; 004b161e
        ;   Label: LAB_004b161e
    MOV EBP,0x5853f8                    ; 004b161f | = "data"
    LEA EDI,[ESP + 0x54]                ; 004b1624
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004b1628
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    MOV EAX,0x5853f1                    ; 004b162d | = "rb"
    ADD ESP,0x4                         ; 004b1632
    MOV DL,0x2e                         ; 004b1635
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004b1637
    MOV dword ptr [ESP + 0xa4],EBP      ; 004b163e | = "data"
    MOV dword ptr [ESP + 0xa0],EAX      ; 004b1645 | = "rb"
    PUSH EDI                            ; 004b164c
    MOV AL,byte ptr [ESI]               ; 004b164d
        ;   Label: LAB_004b164d
    MOV byte ptr [EDI],AL               ; 004b164f
    CMP AL,0x0                          ; 004b1651
    JZ 0x004b1665                       ; 004b1653
        ;   XREF to: 004b1665 (CONDITIONAL_JUMP)  ; LAB_004b1665
    MOV AL,byte ptr [ESI + 0x1]         ; 004b1655
    ADD ESI,0x2                         ; 004b1658
    MOV byte ptr [EDI + 0x1],AL         ; 004b165b
    ADD EDI,0x2                         ; 004b165e
    CMP AL,0x0                          ; 004b1661
    JNZ 0x004b164d                      ; 004b1663
        ;   XREF to: 004b164d (CONDITIONAL_JUMP)  ; LAB_004b164d
    POP EDI                             ; 004b1665
        ;   Label: LAB_004b1665
    LEA ESI,[ESP + 0x50]                ; 004b1666
    MOV EBP,0x5853f4                    ; 004b166a | = "clr"
    MOV AL,byte ptr [ESI]               ; 004b166f
        ;   Label: LAB_004b166f
    CMP AL,DL                           ; 004b1671
    JZ 0x004b1687                       ; 004b1673
        ;   XREF to: 004b1687 (CONDITIONAL_JUMP)  ; LAB_004b1687
    CMP AL,0x0                          ; 004b1675
    JZ 0x004b1685                       ; 004b1677
        ;   XREF to: 004b1685 (CONDITIONAL_JUMP)  ; LAB_004b1685
    INC ESI                             ; 004b1679
    MOV AL,byte ptr [ESI]               ; 004b167a
    CMP AL,DL                           ; 004b167c
    JZ 0x004b1687                       ; 004b167e
        ;   XREF to: 004b1687 (CONDITIONAL_JUMP)  ; LAB_004b1687
    INC ESI                             ; 004b1680
    CMP AL,0x0                          ; 004b1681
    JNZ 0x004b166f                      ; 004b1683
        ;   XREF to: 004b166f (CONDITIONAL_JUMP)  ; LAB_004b166f
    SUB ESI,ESI                         ; 004b1685
        ;   Label: LAB_004b1685
    MOV EDI,ESI                         ; 004b1687
        ;   Label: LAB_004b1687
    TEST ESI,ESI                        ; 004b1689
    JNZ 0x004b16b0                      ; 004b168b
        ;   XREF to: 004b16b0 (CONDITIONAL_JUMP)  ; LAB_004b16b0
    MOV EDX,0x58525d                    ; 004b168d | = "..\\core\\ground.cpp"
    MOV ECX,0x40                        ; 004b1692
    PUSH 0x585270                       ; 004b1697 | = "eopen - ext not found!"
    MOV dword ptr [0x01cc4800],EDX      ; 004b169c | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004b16a2 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004b16a8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004b16ad
    INC EDI                             ; 004b16b0
        ;   Label: LAB_004b16b0
    MOV ESI,EBP                         ; 004b16b1
    PUSH EDI                            ; 004b16b3
    MOV AL,byte ptr [ESI]               ; 004b16b4 | = "clr" | s_r_005853f4+2
        ;   Label: LAB_004b16b4
    MOV byte ptr [EDI],AL               ; 004b16b6
    CMP AL,0x0                          ; 004b16b8
    JZ 0x004b16cc                       ; 004b16ba
        ;   XREF to: 004b16cc (CONDITIONAL_JUMP)  ; LAB_004b16cc
    MOV AL,byte ptr [ESI + 0x1]         ; 004b16bc | s_lr_005853f4+1 | s__005853f4+3
    ADD ESI,0x2                         ; 004b16bf
    MOV byte ptr [EDI + 0x1],AL         ; 004b16c2
    ADD EDI,0x2                         ; 004b16c5
    CMP AL,0x0                          ; 004b16c8
    JNZ 0x004b16b4                      ; 004b16ca
        ;   XREF to: 004b16b4 (CONDITIONAL_JUMP)  ; LAB_004b16b4
    POP EDI                             ; 004b16cc
        ;   Label: LAB_004b16cc
    MOV ESI,dword ptr [ESP + 0xa0]      ; 004b16cd
    PUSH ESI                            ; 004b16d4 | = "rb"
    LEA EAX,[ESP + 0x54]                ; 004b16d5
    PUSH EAX                            ; 004b16d9
    MOV EDI,dword ptr [ESP + 0xac]      ; 004b16da
    PUSH EDI                            ; 004b16e1 | = "data"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004b16e2
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004b16e7
    MOV ESI,EAX                         ; 004b16ea
    TEST EAX,EAX                        ; 004b16ec
    JNZ 0x004b1712                      ; 004b16ee
        ;   XREF to: 004b1712 (CONDITIONAL_JUMP)  ; LAB_004b1712
    MOV EBP,0x585287                    ; 004b16f0 | = "..\\core\\ground.cpp"
    MOV EAX,0x44                        ; 004b16f5
    PUSH 0x58529a                       ; 004b16fa | = "eopen - Cannot open file"
    MOV dword ptr [0x01cc4800],EBP      ; 004b16ff | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004b1705 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004b170a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004b170f
    MOV dword ptr [ESP + 0xb0],ESI      ; 004b1712
        ;   Label: LAB_004b1712
    XOR EDX,EDX                         ; 004b1719
    MOV ECX,dword ptr [EBX + 0x4]       ; 004b171b
    MOV dword ptr [ESP + 0xb8],EDX      ; 004b171e
    TEST ECX,ECX                        ; 004b1725
    JLE 0x004b1780                      ; 004b1727
        ;   XREF to: 004b1780 (CONDITIONAL_JUMP)  ; LAB_004b1780
    MOV EBP,0x2                         ; 004b1729
    MOV EDI,dword ptr [EBX]             ; 004b172e
        ;   Label: LAB_004b172e
    XOR ESI,ESI                         ; 004b1730
    TEST EDI,EDI                        ; 004b1732
    JLE 0x004b176a                      ; 004b1734
        ;   XREF to: 004b176a (CONDITIONAL_JUMP)  ; LAB_004b176a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004b1736
        ;   Label: LAB_004b1736
    MOV EDX,dword ptr [EBX]             ; 004b173d
    PUSH EAX                            ; 004b173f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004b1740
    IMUL EAX,EDX                        ; 004b1747
    ADD EAX,ESI                         ; 004b174a
    MOV EDI,dword ptr [EBX + 0x24]      ; 004b174c
    SHL EAX,0x2                         ; 004b174f
    PUSH EBP                            ; 004b1752
    ADD EAX,EDI                         ; 004b1753
    PUSH 0x1                            ; 004b1755
    ADD EAX,0x2                         ; 004b1757
    PUSH EAX                            ; 004b175a
    INC ESI                             ; 004b175b
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004b175c
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    MOV ECX,dword ptr [EBX]             ; 004b1761
    ADD ESP,0x10                        ; 004b1763
    CMP ESI,ECX                         ; 004b1766
    JL 0x004b1736                       ; 004b1768
        ;   XREF to: 004b1736 (CONDITIONAL_JUMP)  ; LAB_004b1736
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004b176a
        ;   Label: LAB_004b176a
    INC EDX                             ; 004b1771
    MOV ECX,dword ptr [EBX + 0x4]       ; 004b1772
    MOV dword ptr [ESP + 0xb8],EDX      ; 004b1775
    CMP EDX,ECX                         ; 004b177c
    JL 0x004b172e                       ; 004b177e
        ;   XREF to: 004b172e (CONDITIONAL_JUMP)  ; LAB_004b172e
    MOV ESI,dword ptr [ESP + 0xb0]      ; 004b1780
        ;   Label: LAB_004b1780
    PUSH ESI                            ; 004b1787
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004b1788
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004b178d
    MOV EDI,dword ptr [ESP + 0xd4]      ; 004b1790
    PUSH EDI                            ; 004b1797
    MOV EBP,dword ptr [EBX + 0x28]      ; 004b1798
    PUSH EBP                            ; 004b179b
    CALL core_texlist.cpp_CTextureList_load_FUN_00544950 ; 004b179c
        ;   XREF to: 00544950 (UNCONDITIONAL_CALL)  ; undefined core_texlist.cpp_CTextureList_load_FUN_00544950()
    ADD ESP,0x8                         ; 004b17a1
    ADD ESP,0xbc                        ; 004b17a4
    POP EBP                             ; 004b17aa
    POP EDI                             ; 004b17ab
    POP ESI                             ; 004b17ac
    POP EBX                             ; 004b17ad
    MOV EAX,EAX                         ; 004b17ae
    RET                                 ; 004b17b0
    MOV ESI,0x58525d                    ; 004b17b1 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004b17b1
    MOV EAX,0x40                        ; 004b17b6
    PUSH 0x585270                       ; 004b17bb | = "eopen - ext not found!"
    MOV dword ptr [0x01cc4800],ESI      ; 004b17c0 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004b17c6 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004b17cb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004b17d0
    JMP 0x004b1547                      ; 004b17d3
        ;   XREF to: 004b1547 (UNCONDITIONAL_JUMP)  ; LAB_004b1547
    LEA EAX,[EBP + -0x1]                ; 004b17d8
        ;   Label: LAB_004b17d8
    MOV dword ptr [ESI + 0x4],EAX       ; 004b17db
    MOV EAX,dword ptr [ESI]             ; 004b17de
    LEA EDX,[EAX + 0x1]                 ; 004b17e0
    MOV dword ptr [ESI],EDX             ; 004b17e3
    MOV AL,byte ptr [EAX]               ; 004b17e5
    AND EAX,0xff                        ; 004b17e7
    JMP 0x004b15e9                      ; 004b17ec
        ;   XREF to: 004b15e9 (UNCONDITIONAL_JUMP)  ; LAB_004b15e9

