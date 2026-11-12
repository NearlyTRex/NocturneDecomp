; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004c157e(CBitFont *param_1,char *param_2)
;
;
; Called Functions:
;   crt_string.c_strupr_FUN_005c2c20
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004c1540
;   engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0
;   support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
;   support_trstream.cpp_FUN_0059f5a0
;   support_trstream.cpp_FUN_005a07a0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004c157e
        ;   Label: engine_font.cpp_FUN_004c157e
    PUSH EBX                            ; 004c1580
    PUSH ESI                            ; 004c1581
    PUSH EDI                            ; 004c1582
    PUSH EBP                            ; 004c1583
    SUB ESP,0x24c                       ; 004c1584
    MOV EBX,dword ptr [ESP + 0x260]     ; 004c158a
    MOV EBP,dword ptr [ESP + 0x264]     ; 004c1591
    LEA EAX,[ESP + 0x200]               ; 004c1598
    PUSH EAX                            ; 004c159f
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0 ; 004c15a0
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004c15a5
    LEA EDX,[EBX + 0x144]               ; 004c15a8
    MOV ESI,EBP                         ; 004c15ae
    MOV EDI,EDX                         ; 004c15b0
    PUSH EDI                            ; 004c15b2
    MOV AL,byte ptr [ESI]               ; 004c15b3
        ;   Label: LAB_004c15b3
    MOV byte ptr [EDI],AL               ; 004c15b5
    CMP AL,0x0                          ; 004c15b7
    JZ 0x004c15cb                       ; 004c15b9
        ;   XREF to: 004c15cb (CONDITIONAL_JUMP)  ; LAB_004c15cb
    MOV AL,byte ptr [ESI + 0x1]         ; 004c15bb
    ADD ESI,0x2                         ; 004c15be
    MOV byte ptr [EDI + 0x1],AL         ; 004c15c1
    ADD EDI,0x2                         ; 004c15c4
    CMP AL,0x0                          ; 004c15c7
    JNZ 0x004c15b3                      ; 004c15c9
        ;   XREF to: 004c15b3 (CONDITIONAL_JUMP)  ; LAB_004c15b3
    POP EDI                             ; 004c15cb
        ;   Label: LAB_004c15cb
    PUSH EDX                            ; 004c15cc
    CALL crt_string.c_strupr_FUN_005c2c20 ; 004c15cd
        ;   XREF to: 005c2c20 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005c2c20(char * string)
    ADD ESP,0x4                         ; 004c15d2
    PUSH 0x1                            ; 004c15d5
    PUSH EBP                            ; 004c15d7
    PUSH 0x5e0994                       ; 004c15d8
    LEA EAX,[ESP + 0x20c]               ; 004c15dd
    PUSH EAX                            ; 004c15e4
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 004c15e5
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 004c15ea
    TEST EAX,EAX                        ; 004c15ed
    JNZ 0x004c160e                      ; 004c15ef
        ;   XREF to: 004c160e (CONDITIONAL_JUMP)  ; LAB_004c160e
    PUSH 0x0                            ; 004c15f1
        ;   Label: LAB_004c15f1
    LEA EAX,[ESP + 0x204]               ; 004c15f3
    PUSH EAX                            ; 004c15fa
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 004c15fb
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c1600
    ADD ESP,0x24c                       ; 004c1603
    POP EBP                             ; 004c1609
    POP EDI                             ; 004c160a
    POP ESI                             ; 004c160b
    POP EBX                             ; 004c160c
    RET                                 ; 004c160d
    PUSH 0xff                           ; 004c160e
        ;   Label: LAB_004c160e
    LEA EAX,[ESP + 0x104]               ; 004c1613
    PUSH EAX                            ; 004c161a
    LEA EAX,[ESP + 0x208]               ; 004c161b
    PUSH EAX                            ; 004c1622
    CALL support_trstream.cpp_FUN_005a07a0 ; 004c1623
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a07a0()
    ADD ESP,0xc                         ; 004c1628
    MOV EAX,ESP                         ; 004c162b
    PUSH EAX                            ; 004c162d
    PUSH 0x5e0998                       ; 004c162e
    LEA EAX,[ESP + 0x208]               ; 004c1633
    PUSH EAX                            ; 004c163a
    CALL support_trstream.cpp_FUN_0059f5a0 ; 004c163b
        ;   XREF to: 0059f5a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f5a0()
    ADD ESP,0xc                         ; 004c1640
    PUSH 0xff                           ; 004c1643
    LEA EAX,[ESP + 0x104]               ; 004c1648
    PUSH EAX                            ; 004c164f
    LEA EAX,[ESP + 0x208]               ; 004c1650
    PUSH EAX                            ; 004c1657
    CALL support_trstream.cpp_FUN_005a07a0 ; 004c1658
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a07a0()
    ADD ESP,0xc                         ; 004c165d
    LEA EAX,[ESP + 0x230]               ; 004c1660
    PUSH EAX                            ; 004c1667
    LEA EAX,[ESP + 0x230]               ; 004c1668
    PUSH EAX                            ; 004c166f
    PUSH 0x5e099c                       ; 004c1670
    LEA EAX,[ESP + 0x20c]               ; 004c1675
    PUSH EAX                            ; 004c167c
    CALL support_trstream.cpp_FUN_0059f5a0 ; 004c167d
        ;   XREF to: 0059f5a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f5a0()
    ADD ESP,0x10                        ; 004c1682
    PUSH 0xff                           ; 004c1685
    LEA EAX,[ESP + 0x104]               ; 004c168a
    PUSH EAX                            ; 004c1691
    LEA EAX,[ESP + 0x208]               ; 004c1692
    PUSH EAX                            ; 004c1699
    CALL support_trstream.cpp_FUN_005a07a0 ; 004c169a
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a07a0()
    ADD ESP,0xc                         ; 004c169f
    LEA EAX,[ESP + 0x238]               ; 004c16a2
    PUSH EAX                            ; 004c16a9
    LEA EAX,[ESP + 0x238]               ; 004c16aa
    PUSH EAX                            ; 004c16b1
    PUSH 0x5e09a3                       ; 004c16b2
    LEA EAX,[ESP + 0x20c]               ; 004c16b7
    PUSH EAX                            ; 004c16be
    CALL support_trstream.cpp_FUN_0059f5a0 ; 004c16bf
        ;   XREF to: 0059f5a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f5a0()
    ADD ESP,0x10                        ; 004c16c4
    PUSH 0xff                           ; 004c16c7
    LEA EAX,[ESP + 0x104]               ; 004c16cc
    PUSH EAX                            ; 004c16d3
    LEA EAX,[ESP + 0x208]               ; 004c16d4
    PUSH EAX                            ; 004c16db
    CALL support_trstream.cpp_FUN_005a07a0 ; 004c16dc
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a07a0()
    ADD ESP,0xc                         ; 004c16e1
    LEA EAX,[ESP + 0x23c]               ; 004c16e4
    PUSH EAX                            ; 004c16eb
    PUSH 0x5e09aa                       ; 004c16ec
    LEA EAX,[ESP + 0x208]               ; 004c16f1
    PUSH EAX                            ; 004c16f8
    CALL support_trstream.cpp_FUN_0059f5a0 ; 004c16f9
        ;   XREF to: 0059f5a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f5a0()
    ADD ESP,0xc                         ; 004c16fe
    PUSH 0xff                           ; 004c1701
    LEA EAX,[ESP + 0x104]               ; 004c1706
    PUSH EAX                            ; 004c170d
    LEA EAX,[ESP + 0x208]               ; 004c170e
    PUSH EAX                            ; 004c1715
    CALL support_trstream.cpp_FUN_005a07a0 ; 004c1716
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a07a0()
    ADD ESP,0xc                         ; 004c171b
    LEA EAX,[ESP + 0x240]               ; 004c171e
    PUSH EAX                            ; 004c1725
    PUSH 0x5e09ae                       ; 004c1726
    LEA EAX,[ESP + 0x208]               ; 004c172b
    PUSH EAX                            ; 004c1732
    CALL support_trstream.cpp_FUN_0059f5a0 ; 004c1733
        ;   XREF to: 0059f5a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f5a0()
    ADD ESP,0xc                         ; 004c1738
    PUSH 0xff                           ; 004c173b
    LEA EAX,[ESP + 0x104]               ; 004c1740
    PUSH EAX                            ; 004c1747
    LEA EAX,[ESP + 0x208]               ; 004c1748
    PUSH EAX                            ; 004c174f
    CALL support_trstream.cpp_FUN_005a07a0 ; 004c1750
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a07a0()
    ADD ESP,0xc                         ; 004c1755
    LEA EAX,[ESP + 0x248]               ; 004c1758
    PUSH EAX                            ; 004c175f
    LEA EAX,[ESP + 0x248]               ; 004c1760
    PUSH EAX                            ; 004c1767
    PUSH 0x5e09b2                       ; 004c1768
    LEA EAX,[ESP + 0x20c]               ; 004c176d
    PUSH EAX                            ; 004c1774
    CALL support_trstream.cpp_FUN_0059f5a0 ; 004c1775
        ;   XREF to: 0059f5a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f5a0()
    ADD ESP,0x10                        ; 004c177a
    LEA EAX,[ESP + 0x200]               ; 004c177d
    PUSH EAX                            ; 004c1784
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 004c1785
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004c178a
    CMP dword ptr [ESP + 0x234],0x20    ; 004c178d
    JZ 0x004c17f9                       ; 004c1795
        ;   XREF to: 004c17f9 (CONDITIONAL_JUMP)  ; LAB_004c17f9
    MOV EAX,dword ptr [ESP + 0x23c]     ; 004c1797
        ;   Label: LAB_004c1797
    PUSH EAX                            ; 004c179e
    MOV EDX,dword ptr [ESP + 0x23c]     ; 004c179f
    PUSH EDX                            ; 004c17a6
    MOV ECX,dword ptr [ESP + 0x23c]     ; 004c17a7
    PUSH ECX                            ; 004c17ae
    MOV ESI,dword ptr [ESP + 0x23c]     ; 004c17af
    PUSH ESI                            ; 004c17b6
    MOV EDI,dword ptr [ESP + 0x23c]     ; 004c17b7
    PUSH EDI                            ; 004c17be
    LEA EAX,[ESP + 0x14]                ; 004c17bf
    PUSH EAX                            ; 004c17c3
    PUSH EBX                            ; 004c17c4
    CALL engine_font.cpp_CBitFont_loadNewBitmap_FUN_004c1540 ; 004c17c5
        ;   XREF to: 004c1540 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_loadNewBitmap_FUN_004c1540(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x1c                        ; 004c17ca
    MOV EAX,dword ptr [ESP + 0x240]     ; 004c17cd
        ;   Label: LAB_004c17cd
    MOV dword ptr [EBX + 0x3668],EAX    ; 004c17d4
    MOV EAX,dword ptr [ESP + 0x244]     ; 004c17da
    MOV EDX,dword ptr [ESP + 0x248]     ; 004c17e1
    MOV dword ptr [EBX + 0x41fc],EAX    ; 004c17e8
    MOV dword ptr [EBX + 0x4200],EDX    ; 004c17ee
    JMP 0x004c15f1                      ; 004c17f4
        ;   XREF to: 004c15f1 (UNCONDITIONAL_JUMP)  ; LAB_004c15f1
    CMP dword ptr [ESP + 0x238],0xff    ; 004c17f9
        ;   Label: LAB_004c17f9
    JNZ 0x004c1797                      ; 004c1804
        ;   XREF to: 004c1797 (CONDITIONAL_JUMP)  ; LAB_004c1797
    MOV ESI,dword ptr [ESP + 0x23c]     ; 004c1806
    PUSH ESI                            ; 004c180d
    MOV EDI,dword ptr [ESP + 0x234]     ; 004c180e
    PUSH EDI                            ; 004c1815
    MOV EBP,dword ptr [ESP + 0x234]     ; 004c1816
    PUSH EBP                            ; 004c181d
    LEA EAX,[ESP + 0xc]                 ; 004c181e
    PUSH EAX                            ; 004c1822
    PUSH EBX                            ; 004c1823
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0 ; 004c1824
        ;   XREF to: 004c0ca0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 004c1829
    JMP 0x004c17cd                      ; 004c182c
        ;   XREF to: 004c17cd (UNCONDITIONAL_JUMP)  ; LAB_004c17cd

