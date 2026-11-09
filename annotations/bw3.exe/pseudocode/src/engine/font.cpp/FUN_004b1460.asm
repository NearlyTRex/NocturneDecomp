; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_FUN_004b1460(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   character_code
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
; XREF[1]:
;   engine_font.cpp_FUN_004b0a20 at 004b0c7e
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_005fba38
;   undefined4 DAT_00604e60
;   undefined4 DAT_00604e68
;   undefined4 DAT_00604e70
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af7c
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af88
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;   ... and 9 more
;
; Called Functions:
;   engine_font.cpp_clipCharacter_FUN_004af6d0
;   engine_font.cpp_drawAlphaBlendedPixels_FUN_004b1310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1460
        ;   Label: engine_font.cpp_FUN_004b1460
    PUSH ESI                            ; 004b1461
    PUSH EDI                            ; 004b1462
    PUSH EBP                            ; 004b1463
    SUB ESP,0xc8                        ; 004b1464
    MOV EBX,dword ptr [ESP + 0xdc]      ; 004b146a
    MOV ESI,dword ptr [ESP + 0xe0]      ; 004b1471
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004b1478
    TEST ESI,ESI                        ; 004b147f
    JL 0x004b1670                       ; 004b1481
        ;   XREF to: 004b1670 (CONDITIONAL_JUMP)  ; LAB_004b1670
    CMP ESI,0x100                       ; 004b1487
    JGE 0x004b1670                      ; 004b148d
        ;   XREF to: 004b1670 (CONDITIONAL_JUMP)  ; LAB_004b1670
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x35e8] ; 004b1493
    ADD EAX,dword ptr [EBX + 0x41f4]    ; 004b149a
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0x1de8] ; 004b14a0
    MOV dword ptr [ESP],EAX             ; 004b14a7
    TEST EDI,EDI                        ; 004b14aa
    JZ 0x004b167f                       ; 004b14ac
        ;   XREF to: 004b167f (CONDITIONAL_JUMP)  ; LAB_004b167f
    CMP dword ptr [EBX + 0x420c],0x0    ; 004b14b2
    JNZ 0x004b14ed                      ; 004b14b9
        ;   XREF to: 004b14ed (CONDITIONAL_JUMP)  ; LAB_004b14ed
    CMP ECX,-0x1                        ; 004b14bb
    JZ 0x004b14ed                       ; 004b14be
        ;   XREF to: 004b14ed (CONDITIONAL_JUMP)  ; LAB_004b14ed
    PUSH -0x1                           ; 004b14c0
    MOV EAX,dword ptr [ESP + 0xec]      ; 004b14c2
    MOV EDX,dword ptr [EBX + 0x4200]    ; 004b14c9
    PUSH ECX                            ; 004b14cf
    ADD EAX,EDX                         ; 004b14d0
    PUSH EAX                            ; 004b14d2
    MOV ECX,dword ptr [EBX + 0x41fc]    ; 004b14d3
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004b14d9
    ADD EAX,ECX                         ; 004b14e0
    PUSH EAX                            ; 004b14e2
    PUSH ESI                            ; 004b14e3
    PUSH EBX                            ; 004b14e4
    CALL engine_font.cpp_FUN_004b1460   ; 004b14e5
        ;   XREF to: 004b1460 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b1460(CBitFont * this_ptr, int character_code, int x, int y, ...)
    ADD ESP,0x18                        ; 004b14ea
    LEA EDX,[ESI*0x4 + 0x0]             ; 004b14ed
        ;   Label: LAB_004b14ed
    ADD EDX,EBX                         ; 004b14f4
    MOV EAX,dword ptr [EDX + 0x1de8]    ; 004b14f6
    MOV dword ptr [ESP + 0x4],EAX       ; 004b14fc
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b1500
    MOV EAX,dword ptr [EDX + 0x3de8]    ; 004b1507
    ADD ESI,EAX                         ; 004b150d
    MOV dword ptr [ESP + 0xe8],ESI      ; 004b150f
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b1516
    ADD EAX,dword ptr [EDX + 0x35e8]    ; 004b151d
    DEC EAX                             ; 004b1523
    MOV dword ptr [ESP + 0x8],EAX       ; 004b1524
    MOV EBP,dword ptr [EDX + 0x39e8]    ; 004b1528
    LEA EAX,[ESI + EBP*0x1 + -0x1]      ; 004b152e
    MOV dword ptr [ESP + 0xc],EAX       ; 004b1532
    MOV ESI,dword ptr [EDX + 0x21e8]    ; 004b1536
    MOV EAX,dword ptr [EBX + 0x4204]    ; 004b153c
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0x1a4] ; 004b1542
    TEST EAX,EAX                        ; 004b1549
    JNZ 0x004b168e                      ; 004b154b
        ;   XREF to: 004b168e (CONDITIONAL_JUMP)  ; LAB_004b168e
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b1551
    MOV EBP,dword ptr [0x01c6b5a8]      ; 004b1558 | DAT_01c6b5a8
    MOV ECX,dword ptr [EDX + 0x35e8]    ; 004b155e
    MOV EDX,dword ptr [EDX + 0x39e8]    ; 004b1564
    CMP EAX,EBP                         ; 004b156a
    JL 0x004b1660                       ; 004b156c
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b1572
    CMP EAX,dword ptr [0x01c6b5ac]      ; 004b1579 | DAT_01c6b5ac
    JL 0x004b1660                       ; 004b157f
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EAX,[0x01c6b5b0]                ; 004b1585 | DAT_01c6b5b0
    INC EAX                             ; 004b158a
    SUB EAX,ECX                         ; 004b158b
    CMP EAX,dword ptr [ESP + 0xe4]      ; 004b158d
    JL 0x004b1660                       ; 004b1594
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EAX,[0x01c6b5b4]                ; 004b159a | DAT_01c6b5b4
    INC EAX                             ; 004b159f
    MOV EBP,dword ptr [ESP + 0xe8]      ; 004b15a0
    SUB EAX,EDX                         ; 004b15a7
    CMP EAX,EBP                         ; 004b15a9
    JL 0x004b1660                       ; 004b15ab
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b15b1
        ;   Label: LAB_004b15b1
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004b15b5
    INC EAX                             ; 004b15bc
    SUB EDI,EAX                         ; 004b15bd
    MOV ECX,dword ptr [0x005fba20]      ; 004b15bf | DAT_005fba20
    MOV dword ptr [ESP + 0x10],EDI      ; 004b15c5
    CMP ECX,0x8                         ; 004b15c9
    JNZ 0x004b185c                      ; 004b15cc
        ;   XREF to: 004b185c (CONDITIONAL_JUMP)  ; LAB_004b185c
    MOV ESI,dword ptr [ESP + 0xec]      ; 004b15d2
    CMP ESI,-0x1                        ; 004b15d9
    JNZ 0x004b16ce                      ; 004b15dc
        ;   XREF to: 004b16ce (CONDITIONAL_JUMP)  ; LAB_004b16ce
    MOV EDI,dword ptr [ESP + 0xc]       ; 004b15e2
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b15e6
    CMP ESI,EDI                         ; 004b15ed
    JG 0x004b1660                       ; 004b15ef
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    LEA EDI,[ESI*0x4 + 0x0]             ; 004b15f5
    MOV EBP,dword ptr [ESP + 0xe4]      ; 004b15fc
        ;   Label: LAB_004b15fc
    MOV EDX,dword ptr [EDI + 0x1c5faec] ; 004b1603 | DAT_01c5faec | DAT_01c5faf0
    MOV ECX,EBP                         ; 004b1609
    ADD EDX,EBP                         ; 004b160b
    CMP ECX,dword ptr [ESP + 0x8]       ; 004b160d
    JG 0x004b1641                       ; 004b1611
        ;   XREF to: 004b1641 (CONDITIONAL_JUMP)  ; LAB_004b1641
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1613
        ;   Label: LAB_004b1613
    MOV AL,byte ptr [EAX]               ; 004b1617
    AND EAX,0xff                        ; 004b1619
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b161e
    JZ 0x004b162e                       ; 004b1624
        ;   XREF to: 004b162e (CONDITIONAL_JUMP)  ; LAB_004b162e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1626
    MOV AL,byte ptr [EAX]               ; 004b162a
    MOV byte ptr [EDX],AL               ; 004b162c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b162e
        ;   Label: LAB_004b162e
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b1632
    INC EDX                             ; 004b1636
    INC EAX                             ; 004b1637
    INC ECX                             ; 004b1638
    MOV dword ptr [ESP + 0x4],EAX       ; 004b1639
    CMP ECX,EBP                         ; 004b163d
    JLE 0x004b1613                      ; 004b163f
        ;   XREF to: 004b1613 (CONDITIONAL_JUMP)  ; LAB_004b1613
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b1641
        ;   Label: LAB_004b1641
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b1645
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b1649
    ADD EDI,0x4                         ; 004b164d
    ADD EDX,EAX                         ; 004b1650
    INC ESI                             ; 004b1652
    MOV dword ptr [ESP + 0x4],EDX       ; 004b1653
    CMP ESI,ECX                         ; 004b1657
    JLE 0x004b15fc                      ; 004b1659
        ;   XREF to: 004b15fc (CONDITIONAL_JUMP)  ; LAB_004b15fc
    LEA EAX,[EAX]                       ; 004b165b
    MOV ECX,ECX                         ; 004b165e
    MOV EDX,dword ptr [ESP]             ; 004b1660
        ;   Label: LAB_004b1660
    MOV EAX,EDX                         ; 004b1663
    ADD ESP,0xc8                        ; 004b1665
    POP EBP                             ; 004b166b
    POP EDI                             ; 004b166c
    POP ESI                             ; 004b166d
    POP EBX                             ; 004b166e
    RET                                 ; 004b166f
    XOR EDX,EDX                         ; 004b1670
        ;   Label: LAB_004b1670
    MOV EAX,EDX                         ; 004b1672
    ADD ESP,0xc8                        ; 004b1674
    POP EBP                             ; 004b167a
    POP EDI                             ; 004b167b
    POP ESI                             ; 004b167c
    POP EBX                             ; 004b167d
    RET                                 ; 004b167e
    MOV EDX,EAX                         ; 004b167f
        ;   Label: LAB_004b167f
    MOV EAX,EDX                         ; 004b1681
    ADD ESP,0xc8                        ; 004b1683
    POP EBP                             ; 004b1689
    POP EDI                             ; 004b168a
    POP ESI                             ; 004b168b
    POP EBX                             ; 004b168c
    RET                                 ; 004b168d
    PUSH EDI                            ; 004b168e
        ;   Label: LAB_004b168e
    LEA EAX,[ESP + 0x10]                ; 004b168f
    PUSH EAX                            ; 004b1693
    LEA EAX,[ESP + 0x10]                ; 004b1694
    PUSH EAX                            ; 004b1698
    LEA EAX,[ESP + 0xf4]                ; 004b1699
    PUSH EAX                            ; 004b16a0
    LEA EAX,[ESP + 0xf4]                ; 004b16a1
    PUSH EAX                            ; 004b16a8
    LEA EAX,[ESP + 0x18]                ; 004b16a9
    PUSH EAX                            ; 004b16ad
    CALL engine_font.cpp_clipCharacter_FUN_004af6d0 ; 004b16ae
        ;   XREF to: 004af6d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_clipCharacter_FUN_004af6d0(int * bitmap_offset, int * left_x, int * top_y, int * right_x, ...)
    ADD ESP,0x18                        ; 004b16b3
    TEST EAX,EAX                        ; 004b16b6
    JZ 0x004b15b1                       ; 004b16b8
        ;   XREF to: 004b15b1 (CONDITIONAL_JUMP)  ; LAB_004b15b1
    MOV EDX,dword ptr [ESP]             ; 004b16be
    MOV EAX,EDX                         ; 004b16c1
    ADD ESP,0xc8                        ; 004b16c3
    POP EBP                             ; 004b16c9
    POP EDI                             ; 004b16ca
    POP ESI                             ; 004b16cb
    POP EBX                             ; 004b16cc
    RET                                 ; 004b16cd
    CMP ESI,-0x2                        ; 004b16ce
        ;   Label: LAB_004b16ce
    JNZ 0x004b1755                      ; 004b16d1
        ;   XREF to: 004b1755 (CONDITIONAL_JUMP)  ; LAB_004b1755
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b16d7
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b16db
    CMP ESI,ECX                         ; 004b16e2
    JG 0x004b1660                       ; 004b16e4
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    LEA EDI,[ESI*0x4 + 0x0]             ; 004b16ea
    MOV EBP,dword ptr [ESP + 0xe4]      ; 004b16f1
        ;   Label: LAB_004b16f1
    MOV EDX,dword ptr [EDI + 0x1c5faec] ; 004b16f8 | DAT_01c5faec | DAT_01c5faf0
    MOV ECX,EBP                         ; 004b16fe
    ADD EDX,EBP                         ; 004b1700
    CMP ECX,dword ptr [ESP + 0x8]       ; 004b1702
    JG 0x004b1735                       ; 004b1706
        ;   XREF to: 004b1735 (CONDITIONAL_JUMP)  ; LAB_004b1735
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1708
        ;   Label: LAB_004b1708
    MOV AL,byte ptr [EAX]               ; 004b170c
    AND EAX,0xff                        ; 004b170e
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b1713
    JZ 0x004b1722                       ; 004b1719
        ;   XREF to: 004b1722 (CONDITIONAL_JUMP)  ; LAB_004b1722
    MOV AL,[0x01d1ad60]                 ; 004b171b | DAT_01d1ad60
    MOV byte ptr [EDX],AL               ; 004b1720
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1722
        ;   Label: LAB_004b1722
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b1726
    INC EDX                             ; 004b172a
    INC EAX                             ; 004b172b
    INC ECX                             ; 004b172c
    MOV dword ptr [ESP + 0x4],EAX       ; 004b172d
    CMP ECX,EBP                         ; 004b1731
    JLE 0x004b1708                      ; 004b1733
        ;   XREF to: 004b1708 (CONDITIONAL_JUMP)  ; LAB_004b1708
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b1735
        ;   Label: LAB_004b1735
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b1739
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b173d
    ADD EDI,0x4                         ; 004b1741
    ADD EDX,EAX                         ; 004b1744
    INC ESI                             ; 004b1746
    MOV dword ptr [ESP + 0x4],EDX       ; 004b1747
    CMP ESI,ECX                         ; 004b174b
    JG 0x004b1660                       ; 004b174d
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b16f1                      ; 004b1753
        ;   XREF to: 004b16f1 (UNCONDITIONAL_JUMP)  ; LAB_004b16f1
    CMP ESI,-0x3                        ; 004b1755
        ;   Label: LAB_004b1755
    JNZ 0x004b17dc                      ; 004b1758
        ;   XREF to: 004b17dc (CONDITIONAL_JUMP)  ; LAB_004b17dc
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b175e
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b1762
    CMP ESI,EDX                         ; 004b1769
    JG 0x004b1660                       ; 004b176b
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    LEA EDI,[ESI*0x4 + 0x0]             ; 004b1771
    MOV EBP,dword ptr [ESP + 0xe4]      ; 004b1778
        ;   Label: LAB_004b1778
    MOV EDX,dword ptr [EDI + 0x1c5faec] ; 004b177f | DAT_01c5faec | DAT_01c5faf0
    MOV ECX,EBP                         ; 004b1785
    ADD EDX,EBP                         ; 004b1787
    CMP ECX,dword ptr [ESP + 0x8]       ; 004b1789
    JG 0x004b17bc                       ; 004b178d
        ;   XREF to: 004b17bc (CONDITIONAL_JUMP)  ; LAB_004b17bc
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b178f
        ;   Label: LAB_004b178f
    MOV AL,byte ptr [EAX]               ; 004b1793
    AND EAX,0xff                        ; 004b1795
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b179a
    JZ 0x004b17a9                       ; 004b17a0
        ;   XREF to: 004b17a9 (CONDITIONAL_JUMP)  ; LAB_004b17a9
    MOV AL,[0x01d1ad74]                 ; 004b17a2 | DAT_01d1ad74
    MOV byte ptr [EDX],AL               ; 004b17a7
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b17a9
        ;   Label: LAB_004b17a9
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b17ad
    INC EDX                             ; 004b17b1
    INC EAX                             ; 004b17b2
    INC ECX                             ; 004b17b3
    MOV dword ptr [ESP + 0x4],EAX       ; 004b17b4
    CMP ECX,EBP                         ; 004b17b8
    JLE 0x004b178f                      ; 004b17ba
        ;   XREF to: 004b178f (CONDITIONAL_JUMP)  ; LAB_004b178f
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b17bc
        ;   Label: LAB_004b17bc
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b17c0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b17c4
    ADD EDI,0x4                         ; 004b17c8
    ADD EDX,EAX                         ; 004b17cb
    INC ESI                             ; 004b17cd
    MOV dword ptr [ESP + 0x4],EDX       ; 004b17ce
    CMP ESI,ECX                         ; 004b17d2
    JG 0x004b1660                       ; 004b17d4
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b1778                      ; 004b17da
        ;   XREF to: 004b1778 (UNCONDITIONAL_JUMP)  ; LAB_004b1778
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b17dc
        ;   Label: LAB_004b17dc
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b17e0
    CMP ESI,EAX                         ; 004b17e7
    JG 0x004b1660                       ; 004b17e9
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    LEA EDI,[ESI*0x4 + 0x0]             ; 004b17ef
    MOV EBP,dword ptr [ESP + 0xe4]      ; 004b17f6
        ;   Label: LAB_004b17f6
    MOV ECX,dword ptr [EDI + 0x1c5faec] ; 004b17fd | DAT_01c5faec | DAT_01c5faf0
    MOV EDX,EBP                         ; 004b1803
    ADD ECX,EBP                         ; 004b1805
    CMP EDX,dword ptr [ESP + 0x8]       ; 004b1807
    JG 0x004b183c                       ; 004b180b
        ;   XREF to: 004b183c (CONDITIONAL_JUMP)  ; LAB_004b183c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b180d
        ;   Label: LAB_004b180d
    MOV AL,byte ptr [EAX]               ; 004b1811
    AND EAX,0xff                        ; 004b1813
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b1818
    JZ 0x004b1829                       ; 004b181e
        ;   XREF to: 004b1829 (CONDITIONAL_JUMP)  ; LAB_004b1829
    MOV AL,byte ptr [ESP + 0xec]        ; 004b1820
    MOV byte ptr [ECX],AL               ; 004b1827
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1829
        ;   Label: LAB_004b1829
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b182d
    INC ECX                             ; 004b1831
    INC EAX                             ; 004b1832
    INC EDX                             ; 004b1833
    MOV dword ptr [ESP + 0x4],EAX       ; 004b1834
    CMP EDX,EBP                         ; 004b1838
    JLE 0x004b180d                      ; 004b183a
        ;   XREF to: 004b180d (CONDITIONAL_JUMP)  ; LAB_004b180d
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b183c
        ;   Label: LAB_004b183c
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b1840
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b1844
    ADD EDI,0x4                         ; 004b1848
    ADD EDX,EAX                         ; 004b184b
    INC ESI                             ; 004b184d
    MOV dword ptr [ESP + 0x4],EDX       ; 004b184e
    CMP ESI,ECX                         ; 004b1852
    JG 0x004b1660                       ; 004b1854
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b17f6                      ; 004b185a
        ;   XREF to: 004b17f6 (UNCONDITIONAL_JUMP)  ; LAB_004b17f6
    MOV EDX,dword ptr [ESP + 0xe8]      ; 004b185c
        ;   Label: LAB_004b185c
    SHL EDX,0x2                         ; 004b1863
    CMP ECX,0x10                        ; 004b1866
    JNZ 0x004b25a1                      ; 004b1869
        ;   XREF to: 004b25a1 (CONDITIONAL_JUMP)  ; LAB_004b25a1
    MOV EDI,dword ptr [ESP + 0xec]      ; 004b186f
    CMP EDI,-0x1                        ; 004b1876
    JNZ 0x004b1bc2                      ; 004b1879
        ;   XREF to: 004b1bc2 (CONDITIONAL_JUMP)  ; LAB_004b1bc2
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004b187f
    JZ 0x004b1b20                       ; 004b1886
        ;   XREF to: 004b1b20 (CONDITIONAL_JUMP)  ; LAB_004b1b20
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b188c
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b1893
    MOV dword ptr [ESP + 0x14],EAX      ; 004b1897
    CMP EAX,ECX                         ; 004b189b
    JG 0x004b1660                       ; 004b189d
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EAX,ESI                         ; 004b18a3
    SHL EAX,0xa                         ; 004b18a5
    LEA EDX,[EBX + EAX*0x1]             ; 004b18a8
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b18ab
    SUB EAX,ESI                         ; 004b18b2
    SHL EAX,0x8                         ; 004b18b4
    ADD EBX,EAX                         ; 004b18b7
    MOV EAX,dword ptr [ESP + 0x14]      ; 004b18b9
    MOV dword ptr [ESP + 0x2c],EDX      ; 004b18bd
    SHL EAX,0x2                         ; 004b18c1
    MOV dword ptr [ESP + 0x1c],EBX      ; 004b18c4
    MOV dword ptr [ESP + 0xb8],EAX      ; 004b18c8
    MOV EBX,dword ptr [ESP + 0xb8]      ; 004b18cf
        ;   Label: LAB_004b18cf
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b18d6
    MOV EBX,dword ptr [EBX + 0x1c5faec] ; 004b18dd | DAT_01c5faec | DAT_01c5faf0
    ADD EAX,EAX                         ; 004b18e3
    ADD EBX,EAX                         ; 004b18e5
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b18e7
    MOV ESI,dword ptr [ESP + 0x8]       ; 004b18ee
    MOV dword ptr [ESP + 0x18],EAX      ; 004b18f2
    CMP EAX,ESI                         ; 004b18f6
    JG 0x004b1ae7                       ; 004b18f8
        ;   XREF to: 004b1ae7 (CONDITIONAL_JUMP)  ; LAB_004b1ae7
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b18fe
        ;   Label: LAB_004b18fe
    MOV CL,byte ptr [ECX]               ; 004b1902
    AND ECX,0xff                        ; 004b1904
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b190a
    LEA EAX,[ECX + ECX*0x2]             ; 004b190e
    ADD EAX,ESI                         ; 004b1911
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004b1913
    MOV EDX,dword ptr [0x005fba38]      ; 004b1919 | DAT_005fba38
    AND EAX,0xff                        ; 004b191f
    IMUL EDX,EAX                        ; 004b1924
    MOV EAX,EDX                         ; 004b1927
    SAR EDX,0x1f                        ; 004b1929
    SHL EDX,0x8                         ; 004b192c
    SBB EAX,EDX                         ; 004b192f
    SAR EAX,0x8                         ; 004b1931
    TEST EAX,EAX                        ; 004b1934
    JZ 0x004b1ac6                       ; 004b1936
        ;   XREF to: 004b1ac6 (CONDITIONAL_JUMP)  ; LAB_004b1ac6
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004b193c
    SHL ECX,0x2                         ; 004b1940
    ADD EBP,ECX                         ; 004b1943
    MOV EDI,dword ptr [0x00604e60]      ; 004b1945 | DAT_00604e60
    MOV ESI,dword ptr [EBP + 0xdb4]     ; 004b194b
    MOV CL,byte ptr [0x01c6af74]        ; 004b1951 | DAT_01c6af74
    AND ESI,EDI                         ; 004b1957
    SHR ESI,CL                          ; 004b1959
    MOV CL,byte ptr [0x01c6af7c]        ; 004b195b | DAT_01c6af7c
    SHL ESI,CL                          ; 004b1961
    AND ESI,0xff                        ; 004b1963
    IMUL ESI,EAX                        ; 004b1969
    MOV EDI,dword ptr [EBP + 0xdb4]     ; 004b196c
    AND EDI,dword ptr [0x00604e68]      ; 004b1972 | DAT_00604e68
    MOV CL,byte ptr [0x01c6af80]        ; 004b1978 | DAT_01c6af80
    SHR EDI,CL                          ; 004b197e
    MOV CL,byte ptr [0x01c6af88]        ; 004b1980 | DAT_01c6af88
    SHL EDI,CL                          ; 004b1986
    AND EDI,0xff                        ; 004b1988
    IMUL EDI,EAX                        ; 004b198e
    MOV DX,word ptr [EBX]               ; 004b1991
    MOV dword ptr [ESP + 0xc0],EDX      ; 004b1994
    MOV EDX,dword ptr [EBP + 0xdb4]     ; 004b199b
    AND EDX,dword ptr [0x00604e70]      ; 004b19a1 | DAT_00604e70
    MOV CL,byte ptr [0x01c6af8c]        ; 004b19a7 | DAT_01c6af8c
    SHR EDX,CL                          ; 004b19ad
    MOV CL,byte ptr [0x01c6af94]        ; 004b19af | DAT_01c6af94
    SHL EDX,CL                          ; 004b19b5
    AND EDX,0xff                        ; 004b19b7
    MOV dword ptr [ESP + 0x20],EDX      ; 004b19bd
    XOR EDX,EDX                         ; 004b19c1
    MOV ECX,dword ptr [0x00604e60]      ; 004b19c3 | DAT_00604e60
    MOV DX,word ptr [ESP + 0xc0]        ; 004b19c9
    AND ECX,EDX                         ; 004b19d1
    MOV dword ptr [ESP + 0x70],ECX      ; 004b19d3
    MOV EBP,dword ptr [ESP + 0x70]      ; 004b19d7
    MOV CL,byte ptr [0x01c6af74]        ; 004b19db | DAT_01c6af74
    SHR EBP,CL                          ; 004b19e1
    MOV CL,byte ptr [0x01c6af7c]        ; 004b19e3 | DAT_01c6af7c
    SHL EBP,CL                          ; 004b19e9
    MOV ECX,EBP                         ; 004b19eb
    AND ECX,0xff                        ; 004b19ed
    MOV dword ptr [ESP + 0x24],ECX      ; 004b19f3
    MOV ECX,dword ptr [0x00604e68]      ; 004b19f7 | DAT_00604e68
    AND ECX,EDX                         ; 004b19fd
    MOV dword ptr [ESP + 0x70],ECX      ; 004b19ff
    MOV EBP,dword ptr [ESP + 0x70]      ; 004b1a03
    MOV CL,byte ptr [0x01c6af80]        ; 004b1a07 | DAT_01c6af80
    SHR EBP,CL                          ; 004b1a0d
    MOV CL,byte ptr [0x01c6af88]        ; 004b1a0f | DAT_01c6af88
    SHL EBP,CL                          ; 004b1a15
    MOV ECX,EBP                         ; 004b1a17
    AND ECX,0xff                        ; 004b1a19
    MOV dword ptr [ESP + 0x28],ECX      ; 004b1a1f
    AND EDX,dword ptr [0x00604e70]      ; 004b1a23 | DAT_00604e70
    MOV CL,byte ptr [0x01c6af8c]        ; 004b1a29 | DAT_01c6af8c
    SHR EDX,CL                          ; 004b1a2f
    MOV CL,byte ptr [0x01c6af94]        ; 004b1a31 | DAT_01c6af94
    SHL EDX,CL                          ; 004b1a37
    MOV ECX,EDX                         ; 004b1a39
    MOV EDX,0xff                        ; 004b1a3b
    MOV EBP,dword ptr [ESP + 0x24]      ; 004b1a40
    SUB EDX,EAX                         ; 004b1a44
    IMUL EBP,EDX                        ; 004b1a46
    ADD ESI,EBP                         ; 004b1a49
    MOV EBP,dword ptr [ESP + 0x28]      ; 004b1a4b
    IMUL EBP,EDX                        ; 004b1a4f
    AND ECX,0xff                        ; 004b1a52
    IMUL EDX,ECX                        ; 004b1a58
    IMUL EAX,dword ptr [ESP + 0x20]     ; 004b1a5b
    ADD EAX,EDX                         ; 004b1a60
    ADD EDI,EBP                         ; 004b1a62
    MOV dword ptr [ESP + 0x20],EAX      ; 004b1a64
    MOV EBP,EAX                         ; 004b1a68
    MOV EAX,ESI                         ; 004b1a6a
    XOR EDX,EDX                         ; 004b1a6c
    SHR EAX,0x8                         ; 004b1a6e
    MOV ESI,dword ptr [0x01c6af78]      ; 004b1a71 | DAT_01c6af78
    MOV dword ptr [ESP + 0x30],EAX      ; 004b1a77
    DIV ESI                             ; 004b1a7b
    MOV ECX,EDI                         ; 004b1a7d
    MOV EDI,dword ptr [0x01c6af84]      ; 004b1a7f | DAT_01c6af84
    SHR ECX,0x8                         ; 004b1a85
    MOV dword ptr [ESP + 0x30],EAX      ; 004b1a88
    XOR EDX,EDX                         ; 004b1a8c
    MOV EAX,ECX                         ; 004b1a8e
    DIV EDI                             ; 004b1a90
    SHR EBP,0x8                         ; 004b1a92
    MOV EDI,EAX                         ; 004b1a95
    XOR EDX,EDX                         ; 004b1a97
    MOV EAX,EBP                         ; 004b1a99
    DIV dword ptr [0x01c6af90]          ; 004b1a9b | DAT_01c6af90
    MOV CL,byte ptr [0x01c6af74]        ; 004b1aa1 | DAT_01c6af74
    MOV ESI,EAX                         ; 004b1aa7
    MOV EAX,dword ptr [ESP + 0x30]      ; 004b1aa9
    SHL EAX,CL                          ; 004b1aad
    MOV CL,byte ptr [0x01c6af80]        ; 004b1aaf | DAT_01c6af80
    SHL EDI,CL                          ; 004b1ab5
    MOV CL,byte ptr [0x01c6af8c]        ; 004b1ab7 | DAT_01c6af8c
    OR EAX,EDI                          ; 004b1abd
    SHL ESI,CL                          ; 004b1abf
    OR EAX,ESI                          ; 004b1ac1
    MOV word ptr [EBX],AX               ; 004b1ac3
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b1ac6
        ;   Label: LAB_004b1ac6
    MOV EBP,dword ptr [ESP + 0x4]       ; 004b1aca
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b1ace
    ADD EBX,0x2                         ; 004b1ad2
    INC EDI                             ; 004b1ad5
    INC EBP                             ; 004b1ad6
    MOV dword ptr [ESP + 0x18],EDI      ; 004b1ad7
    MOV dword ptr [ESP + 0x4],EBP       ; 004b1adb
    CMP EDI,EDX                         ; 004b1adf
    JLE 0x004b18fe                      ; 004b1ae1
        ;   XREF to: 004b18fe (CONDITIONAL_JUMP)  ; LAB_004b18fe
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004b1ae7
        ;   Label: LAB_004b1ae7
    MOV EDX,dword ptr [ESP + 0x14]      ; 004b1aee
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b1af2
    ADD EAX,0x4                         ; 004b1af6
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b1af9
    MOV dword ptr [ESP + 0xb8],EAX      ; 004b1afd
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b1b04
    INC EDX                             ; 004b1b08
    ADD ECX,EAX                         ; 004b1b09
    MOV dword ptr [ESP + 0x14],EDX      ; 004b1b0b
    MOV dword ptr [ESP + 0x4],ECX       ; 004b1b0f
    CMP EDX,EBX                         ; 004b1b13
    JG 0x004b1660                       ; 004b1b15
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b18cf                      ; 004b1b1b
        ;   XREF to: 004b18cf (UNCONDITIONAL_JUMP)  ; LAB_004b18cf
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b1b20
        ;   Label: LAB_004b1b20
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b1b27
    MOV dword ptr [ESP + 0x34],EAX      ; 004b1b2b
    CMP EAX,EDX                         ; 004b1b2f
    JG 0x004b1660                       ; 004b1b31
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    SHL ESI,0xa                         ; 004b1b37
    LEA EDI,[EAX*0x4 + 0x0]             ; 004b1b3a
    ADD ESI,EBX                         ; 004b1b41
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b1b43
        ;   Label: LAB_004b1b43
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b1b4a
    MOV EDX,dword ptr [EDI + 0x1c5faec] ; 004b1b51 | DAT_01c5faec | DAT_01c5faf0
    ADD EAX,EAX                         ; 004b1b57
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b1b59
    ADD EDX,EAX                         ; 004b1b5d
    CMP ECX,EBP                         ; 004b1b5f
    JG 0x004b1b96                       ; 004b1b61
        ;   XREF to: 004b1b96 (CONDITIONAL_JUMP)  ; LAB_004b1b96
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1b63
        ;   Label: LAB_004b1b63
    MOV AL,byte ptr [EAX]               ; 004b1b67
    AND EAX,0xff                        ; 004b1b69
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b1b6e
    JZ 0x004b1b81                       ; 004b1b74
        ;   XREF to: 004b1b81 (CONDITIONAL_JUMP)  ; LAB_004b1b81
    MOV AX,word ptr [ESI + EAX*0x4 + 0xdb4] ; 004b1b76
    MOV word ptr [EDX],AX               ; 004b1b7e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1b81
        ;   Label: LAB_004b1b81
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b1b85
    INC ECX                             ; 004b1b89
    INC EAX                             ; 004b1b8a
    ADD EDX,0x2                         ; 004b1b8b
    MOV dword ptr [ESP + 0x4],EAX       ; 004b1b8e
    CMP ECX,EBP                         ; 004b1b92
    JLE 0x004b1b63                      ; 004b1b94
        ;   XREF to: 004b1b63 (CONDITIONAL_JUMP)  ; LAB_004b1b63
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b1b96
        ;   Label: LAB_004b1b96
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b1b9a
    INC EAX                             ; 004b1b9e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b1b9f
    MOV dword ptr [ESP + 0x34],EAX      ; 004b1ba3
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b1ba7
    ADD EDI,0x4                         ; 004b1bab
    ADD EDX,EAX                         ; 004b1bae
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b1bb0
    MOV dword ptr [ESP + 0x4],EDX       ; 004b1bb4
    CMP EAX,ECX                         ; 004b1bb8
    JG 0x004b1660                       ; 004b1bba
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b1b43                      ; 004b1bc0
        ;   XREF to: 004b1b43 (UNCONDITIONAL_JUMP)  ; LAB_004b1b43
    CMP EDI,-0x2                        ; 004b1bc2
        ;   Label: LAB_004b1bc2
    JNZ 0x004b1ee8                      ; 004b1bc5
        ;   XREF to: 004b1ee8 (CONDITIONAL_JUMP)  ; LAB_004b1ee8
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004b1bcb
    JZ 0x004b1e5d                       ; 004b1bd2
        ;   XREF to: 004b1e5d (CONDITIONAL_JUMP)  ; LAB_004b1e5d
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b1bd8
    MOV EBP,dword ptr [ESP + 0xc]       ; 004b1bdf
    MOV dword ptr [ESP + 0x38],EAX      ; 004b1be3
    CMP EAX,EBP                         ; 004b1be7
    JG 0x004b1660                       ; 004b1be9
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b1bef
    SUB EAX,ESI                         ; 004b1bf6
    SHL EAX,0x8                         ; 004b1bf8
    ADD EBX,EAX                         ; 004b1bfb
    MOV EAX,dword ptr [ESP + 0x38]      ; 004b1bfd
    SHL EAX,0x2                         ; 004b1c01
    MOV dword ptr [ESP + 0x40],EBX      ; 004b1c04
    MOV dword ptr [ESP + 0xb4],EAX      ; 004b1c08
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004b1c0f
        ;   Label: LAB_004b1c0f
    MOV EBX,dword ptr [ESP + 0xe4]      ; 004b1c16
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 004b1c1d | DAT_01c5faec | DAT_01c5faf0
    ADD EBX,EBX                         ; 004b1c23
    ADD EBX,EAX                         ; 004b1c25
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b1c27
    MOV ESI,dword ptr [ESP + 0x8]       ; 004b1c2e
    MOV dword ptr [ESP + 0x3c],EAX      ; 004b1c32
    CMP EAX,ESI                         ; 004b1c36
    JG 0x004b1e24                       ; 004b1c38
        ;   XREF to: 004b1e24 (CONDITIONAL_JUMP)  ; LAB_004b1e24
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b1c3e
        ;   Label: LAB_004b1c3e
    MOV DL,byte ptr [EDX]               ; 004b1c42
    AND EDX,0xff                        ; 004b1c44
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b1c4a
    MOV ECX,dword ptr [ESP + 0x40]      ; 004b1c51
    SUB EAX,EDX                         ; 004b1c55
    ADD EAX,ECX                         ; 004b1c57
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004b1c59
    MOV EDX,dword ptr [0x005fba38]      ; 004b1c5f | DAT_005fba38
    AND EAX,0xff                        ; 004b1c65
    IMUL EDX,EAX                        ; 004b1c6a
    MOV EAX,EDX                         ; 004b1c6d
    SAR EDX,0x1f                        ; 004b1c6f
    SHL EDX,0x8                         ; 004b1c72
    SBB EAX,EDX                         ; 004b1c75
    SAR EAX,0x8                         ; 004b1c77
    TEST EAX,EAX                        ; 004b1c7a
    JZ 0x004b1e03                       ; 004b1c7c
        ;   XREF to: 004b1e03 (CONDITIONAL_JUMP)  ; LAB_004b1e03
    XOR ESI,ESI                         ; 004b1c82
    MOV EDX,dword ptr [0x00604e60]      ; 004b1c84 | DAT_00604e60
    MOV SI,word ptr [0x01d1ad62]        ; 004b1c8a | DAT_01d1ad62
    MOV CL,byte ptr [0x01c6af74]        ; 004b1c91 | DAT_01c6af74
    AND EDX,ESI                         ; 004b1c97
    SHR EDX,CL                          ; 004b1c99
    MOV CL,byte ptr [0x01c6af7c]        ; 004b1c9b | DAT_01c6af7c
    SHL EDX,CL                          ; 004b1ca1
    AND EDX,0xff                        ; 004b1ca3
    MOV dword ptr [ESP + 0x44],EDX      ; 004b1ca9
    MOV EDX,dword ptr [0x00604e68]      ; 004b1cad | DAT_00604e68
    MOV CL,byte ptr [0x01c6af80]        ; 004b1cb3 | DAT_01c6af80
    AND EDX,ESI                         ; 004b1cb9
    MOV EBP,dword ptr [0x00604e70]      ; 004b1cbb | DAT_00604e70
    SHR EDX,CL                          ; 004b1cc1
    MOV CL,byte ptr [0x01c6af88]        ; 004b1cc3 | DAT_01c6af88
    AND ESI,EBP                         ; 004b1cc9
    SHL EDX,CL                          ; 004b1ccb
    MOV CL,byte ptr [0x01c6af8c]        ; 004b1ccd | DAT_01c6af8c
    SHR ESI,CL                          ; 004b1cd3
    MOV CL,byte ptr [0x01c6af94]        ; 004b1cd5 | DAT_01c6af94
    MOV DI,word ptr [EBX]               ; 004b1cdb
    SHL ESI,CL                          ; 004b1cde
    AND EDX,0xff                        ; 004b1ce0
    AND ESI,0xff                        ; 004b1ce6
    IMUL EDX,EAX                        ; 004b1cec
    MOV ECX,dword ptr [0x00604e60]      ; 004b1cef | DAT_00604e60
    AND EDI,0xffff                      ; 004b1cf5
    AND ECX,EDI                         ; 004b1cfb
    MOV dword ptr [ESP + 0x70],ECX      ; 004b1cfd
    MOV EBP,dword ptr [ESP + 0x70]      ; 004b1d01
    MOV CL,byte ptr [0x01c6af74]        ; 004b1d05 | DAT_01c6af74
    SHR EBP,CL                          ; 004b1d0b
    MOV CL,byte ptr [0x01c6af7c]        ; 004b1d0d | DAT_01c6af7c
    SHL EBP,CL                          ; 004b1d13
    MOV ECX,EBP                         ; 004b1d15
    AND ECX,0xff                        ; 004b1d17
    MOV dword ptr [ESP + 0x48],ECX      ; 004b1d1d
    MOV ECX,dword ptr [0x00604e68]      ; 004b1d21 | DAT_00604e68
    AND ECX,EDI                         ; 004b1d27
    MOV dword ptr [ESP + 0x70],ECX      ; 004b1d29
    MOV EBP,dword ptr [ESP + 0x70]      ; 004b1d2d
    MOV CL,byte ptr [0x01c6af80]        ; 004b1d31 | DAT_01c6af80
    SHR EBP,CL                          ; 004b1d37
    MOV CL,byte ptr [0x01c6af88]        ; 004b1d39 | DAT_01c6af88
    SHL EBP,CL                          ; 004b1d3f
    MOV ECX,EBP                         ; 004b1d41
    AND ECX,0xff                        ; 004b1d43
    MOV dword ptr [ESP + 0x4c],ECX      ; 004b1d49
    AND EDI,dword ptr [0x00604e70]      ; 004b1d4d | DAT_00604e70
    MOV CL,byte ptr [0x01c6af8c]        ; 004b1d53 | DAT_01c6af8c
    SHR EDI,CL                          ; 004b1d59
    MOV CL,byte ptr [0x01c6af94]        ; 004b1d5b | DAT_01c6af94
    SHL EDI,CL                          ; 004b1d61
    AND EDI,0xff                        ; 004b1d63
    MOV ECX,0xff                        ; 004b1d69
    MOV dword ptr [ESP + 0x50],EDI      ; 004b1d6e
    SUB ECX,EAX                         ; 004b1d72
    MOV EDI,dword ptr [ESP + 0x48]      ; 004b1d74
    IMUL EDI,ECX                        ; 004b1d78
    MOV dword ptr [ESP + 0x70],EDI      ; 004b1d7b
    MOV EDI,dword ptr [ESP + 0x44]      ; 004b1d7f
    IMUL EDI,EAX                        ; 004b1d83
    MOV EBP,dword ptr [ESP + 0x70]      ; 004b1d86
    ADD EBP,EDI                         ; 004b1d8a
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004b1d8c
    IMUL EDI,ECX                        ; 004b1d90
    MOV dword ptr [ESP + 0x44],EBP      ; 004b1d93
    MOV EBP,ESI                         ; 004b1d97
    IMUL EBP,EAX                        ; 004b1d99
    ADD EDX,EDI                         ; 004b1d9c
    IMUL ECX,dword ptr [ESP + 0x50]     ; 004b1d9e
    MOV EAX,dword ptr [ESP + 0x44]      ; 004b1da3
    MOV ESI,dword ptr [0x01c6af78]      ; 004b1da7 | DAT_01c6af78
    SHR EAX,0x8                         ; 004b1dad
    ADD EBP,ECX                         ; 004b1db0
    MOV ECX,EDX                         ; 004b1db2
    XOR EDX,EDX                         ; 004b1db4
    DIV ESI                             ; 004b1db6
    MOV EDI,dword ptr [0x01c6af84]      ; 004b1db8 | DAT_01c6af84
    SHR ECX,0x8                         ; 004b1dbe
    MOV ESI,EAX                         ; 004b1dc1
    XOR EDX,EDX                         ; 004b1dc3
    MOV EAX,ECX                         ; 004b1dc5
    DIV EDI                             ; 004b1dc7
    MOV dword ptr [ESP + 0x54],ECX      ; 004b1dc9
    SHR EBP,0x8                         ; 004b1dcd
    MOV dword ptr [ESP + 0x54],EAX      ; 004b1dd0
    XOR EDX,EDX                         ; 004b1dd4
    MOV EAX,EBP                         ; 004b1dd6
    DIV dword ptr [0x01c6af90]          ; 004b1dd8 | DAT_01c6af90
    MOV CL,byte ptr [0x01c6af74]        ; 004b1dde | DAT_01c6af74
    SHL ESI,CL                          ; 004b1de4
    MOV CL,byte ptr [0x01c6af80]        ; 004b1de6 | DAT_01c6af80
    MOV EDI,EAX                         ; 004b1dec
    MOV EAX,dword ptr [ESP + 0x54]      ; 004b1dee
    SHL EAX,CL                          ; 004b1df2
    MOV CL,byte ptr [0x01c6af8c]        ; 004b1df4 | DAT_01c6af8c
    OR EAX,ESI                          ; 004b1dfa
    SHL EDI,CL                          ; 004b1dfc
    OR EAX,EDI                          ; 004b1dfe
    MOV word ptr [EBX],AX               ; 004b1e00
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004b1e03
        ;   Label: LAB_004b1e03
    MOV EBP,dword ptr [ESP + 0x4]       ; 004b1e07
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b1e0b
    ADD EBX,0x2                         ; 004b1e0f
    INC EDI                             ; 004b1e12
    INC EBP                             ; 004b1e13
    MOV dword ptr [ESP + 0x3c],EDI      ; 004b1e14
    MOV dword ptr [ESP + 0x4],EBP       ; 004b1e18
    CMP EDI,EDX                         ; 004b1e1c
    JLE 0x004b1c3e                      ; 004b1e1e
        ;   XREF to: 004b1c3e (CONDITIONAL_JUMP)  ; LAB_004b1c3e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004b1e24
        ;   Label: LAB_004b1e24
    MOV EDX,dword ptr [ESP + 0x38]      ; 004b1e2b
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b1e2f
    ADD EAX,0x4                         ; 004b1e33
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b1e36
    MOV dword ptr [ESP + 0xb4],EAX      ; 004b1e3a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b1e41
    INC EDX                             ; 004b1e45
    ADD ECX,EAX                         ; 004b1e46
    MOV dword ptr [ESP + 0x38],EDX      ; 004b1e48
    MOV dword ptr [ESP + 0x4],ECX       ; 004b1e4c
    CMP EDX,EBX                         ; 004b1e50
    JG 0x004b1660                       ; 004b1e52
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b1c0f                      ; 004b1e58
        ;   XREF to: 004b1c0f (UNCONDITIONAL_JUMP)  ; LAB_004b1c0f
    MOV EDI,dword ptr [ESP + 0xc]       ; 004b1e5d
        ;   Label: LAB_004b1e5d
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b1e61
    CMP ESI,EDI                         ; 004b1e68
    JG 0x004b1660                       ; 004b1e6a
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    LEA EDI,[ESI*0x4 + 0x0]             ; 004b1e70
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004b1e77
        ;   Label: LAB_004b1e77
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b1e7e
    MOV EAX,dword ptr [EDI + 0x1c5faec] ; 004b1e85 | DAT_01c5faec | DAT_01c5faf0
    ADD EDX,EDX                         ; 004b1e8b
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b1e8d
    ADD EDX,EAX                         ; 004b1e91
    CMP ECX,EBP                         ; 004b1e93
    JG 0x004b1ec8                       ; 004b1e95
        ;   XREF to: 004b1ec8 (CONDITIONAL_JUMP)  ; LAB_004b1ec8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1e97
        ;   Label: LAB_004b1e97
    MOV AL,byte ptr [EAX]               ; 004b1e9b
    AND EAX,0xff                        ; 004b1e9d
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b1ea2
    JZ 0x004b1eb3                       ; 004b1ea8
        ;   XREF to: 004b1eb3 (CONDITIONAL_JUMP)  ; LAB_004b1eb3
    MOV AX,[0x01d1ad62]                 ; 004b1eaa | DAT_01d1ad62
    MOV word ptr [EDX],AX               ; 004b1eb0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1eb3
        ;   Label: LAB_004b1eb3
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b1eb7
    ADD EDX,0x2                         ; 004b1ebb
    INC EAX                             ; 004b1ebe
    INC ECX                             ; 004b1ebf
    MOV dword ptr [ESP + 0x4],EAX       ; 004b1ec0
    CMP ECX,EBP                         ; 004b1ec4
    JLE 0x004b1e97                      ; 004b1ec6
        ;   XREF to: 004b1e97 (CONDITIONAL_JUMP)  ; LAB_004b1e97
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b1ec8
        ;   Label: LAB_004b1ec8
    MOV EBP,dword ptr [ESP + 0x4]       ; 004b1ecc
    ADD EDI,0x4                         ; 004b1ed0
    INC ESI                             ; 004b1ed3
    ADD EBP,EAX                         ; 004b1ed4
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b1ed6
    MOV dword ptr [ESP + 0x4],EBP       ; 004b1eda
    CMP ESI,EAX                         ; 004b1ede
    JG 0x004b1660                       ; 004b1ee0
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b1e77                      ; 004b1ee6
        ;   XREF to: 004b1e77 (UNCONDITIONAL_JUMP)  ; LAB_004b1e77
    CMP EDI,-0x3                        ; 004b1ee8
        ;   Label: LAB_004b1ee8
    JNZ 0x004b222b                      ; 004b1eeb
        ;   XREF to: 004b222b (CONDITIONAL_JUMP)  ; LAB_004b222b
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004b1ef1
    JZ 0x004b21a0                       ; 004b1ef8
        ;   XREF to: 004b21a0 (CONDITIONAL_JUMP)  ; LAB_004b21a0
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b1efe
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b1f05
    MOV dword ptr [ESP + 0x58],EAX      ; 004b1f09
    CMP EAX,EDX                         ; 004b1f0d
    JG 0x004b1660                       ; 004b1f0f
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b1f15
    SUB EAX,ESI                         ; 004b1f1c
    SHL EAX,0x8                         ; 004b1f1e
    ADD EBX,EAX                         ; 004b1f21
    MOV EAX,dword ptr [ESP + 0x58]      ; 004b1f23
    SHL EAX,0x2                         ; 004b1f27
    MOV dword ptr [ESP + 0x60],EBX      ; 004b1f2a
    MOV dword ptr [ESP + 0xb0],EAX      ; 004b1f2e
    MOV EBX,dword ptr [ESP + 0xb0]      ; 004b1f35
        ;   Label: LAB_004b1f35
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b1f3c
    MOV EBX,dword ptr [EBX + 0x1c5faec] ; 004b1f43 | DAT_01c5faec | DAT_01c5faf0
    ADD EAX,EAX                         ; 004b1f49
    ADD EBX,EAX                         ; 004b1f4b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b1f4d
    MOV ESI,dword ptr [ESP + 0x8]       ; 004b1f54
    MOV dword ptr [ESP + 0x5c],EAX      ; 004b1f58
    CMP EAX,ESI                         ; 004b1f5c
    JG 0x004b2167                       ; 004b1f5e
        ;   XREF to: 004b2167 (CONDITIONAL_JUMP)  ; LAB_004b2167
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1f64
        ;   Label: LAB_004b1f64
    MOV AL,byte ptr [EAX]               ; 004b1f68
    AND EAX,0xff                        ; 004b1f6a
    MOV ECX,dword ptr [ESP + 0x60]      ; 004b1f6f
    LEA EAX,[EAX + EAX*0x2]             ; 004b1f73
    ADD EAX,ECX                         ; 004b1f76
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004b1f78
    MOV EDX,dword ptr [0x005fba38]      ; 004b1f7e | DAT_005fba38
    AND EAX,0xff                        ; 004b1f84
    IMUL EDX,EAX                        ; 004b1f89
    MOV EAX,EDX                         ; 004b1f8c
    SAR EDX,0x1f                        ; 004b1f8e
    SHL EDX,0x8                         ; 004b1f91
    SBB EAX,EDX                         ; 004b1f94
    SAR EAX,0x8                         ; 004b1f96
    TEST EAX,EAX                        ; 004b1f99
    JZ 0x004b2146                       ; 004b1f9b
        ;   XREF to: 004b2146 (CONDITIONAL_JUMP)  ; LAB_004b2146
    MOV EBP,dword ptr [0x01d1ad74]      ; 004b1fa1 | DAT_01d1ad74
    MOV ESI,dword ptr [0x00604e60]      ; 004b1fa7 | DAT_00604e60
    MOV CL,byte ptr [0x01c6af74]        ; 004b1fad | DAT_01c6af74
    AND EBP,ESI                         ; 004b1fb3
    SHR EBP,CL                          ; 004b1fb5
    MOV CL,byte ptr [0x01c6af7c]        ; 004b1fb7 | DAT_01c6af7c
    SHL EBP,CL                          ; 004b1fbd
    AND EBP,0xff                        ; 004b1fbf
    IMUL EBP,EAX                        ; 004b1fc5
    MOV ESI,dword ptr [0x01d1ad74]      ; 004b1fc8 | DAT_01d1ad74
    AND ESI,dword ptr [0x00604e68]      ; 004b1fce | DAT_00604e68
    MOV CL,byte ptr [0x01c6af80]        ; 004b1fd4 | DAT_01c6af80
    SHR ESI,CL                          ; 004b1fda
    MOV CL,byte ptr [0x01c6af88]        ; 004b1fdc | DAT_01c6af88
    SHL ESI,CL                          ; 004b1fe2
    AND ESI,0xff                        ; 004b1fe4
    IMUL ESI,EAX                        ; 004b1fea
    MOV EDX,dword ptr [0x01d1ad74]      ; 004b1fed | DAT_01d1ad74
    MOV ECX,dword ptr [0x00604e70]      ; 004b1ff3 | DAT_00604e70
    MOV DI,word ptr [EBX]               ; 004b1ff9
    AND EDX,ECX                         ; 004b1ffc
    MOV CL,byte ptr [0x01c6af8c]        ; 004b1ffe | DAT_01c6af8c
    SHR EDX,CL                          ; 004b2004
    MOV CL,byte ptr [0x01c6af94]        ; 004b2006 | DAT_01c6af94
    SHL EDX,CL                          ; 004b200c
    XOR ECX,ECX                         ; 004b200e
    MOV CX,DI                           ; 004b2010
    MOV EDI,dword ptr [0x00604e60]      ; 004b2013 | DAT_00604e60
    MOV dword ptr [ESP + 0x70],ECX      ; 004b2019
    AND ECX,EDI                         ; 004b201d
    MOV dword ptr [ESP + 0x98],ECX      ; 004b201f
    MOV EDI,dword ptr [ESP + 0x98]      ; 004b2026
    MOV CL,byte ptr [0x01c6af74]        ; 004b202d | DAT_01c6af74
    SHR EDI,CL                          ; 004b2033
    MOV CL,byte ptr [0x01c6af7c]        ; 004b2035 | DAT_01c6af7c
    SHL EDI,CL                          ; 004b203b
    MOV ECX,EDI                         ; 004b203d
    AND ECX,0xff                        ; 004b203f
    MOV EDI,dword ptr [0x00604e68]      ; 004b2045 | DAT_00604e68
    MOV dword ptr [ESP + 0x64],ECX      ; 004b204b
    MOV ECX,dword ptr [ESP + 0x70]      ; 004b204f
    AND ECX,EDI                         ; 004b2053
    MOV dword ptr [ESP + 0x98],ECX      ; 004b2055
    MOV EDI,dword ptr [ESP + 0x98]      ; 004b205c
    MOV CL,byte ptr [0x01c6af80]        ; 004b2063 | DAT_01c6af80
    SHR EDI,CL                          ; 004b2069
    MOV CL,byte ptr [0x01c6af88]        ; 004b206b | DAT_01c6af88
    SHL EDI,CL                          ; 004b2071
    MOV ECX,EDI                         ; 004b2073
    AND ECX,0xff                        ; 004b2075
    MOV EDI,dword ptr [0x00604e70]      ; 004b207b | DAT_00604e70
    MOV dword ptr [ESP + 0x68],ECX      ; 004b2081
    MOV ECX,dword ptr [ESP + 0x70]      ; 004b2085
    AND ECX,EDI                         ; 004b2089
    MOV dword ptr [ESP + 0x98],ECX      ; 004b208b
    MOV EDI,dword ptr [ESP + 0x98]      ; 004b2092
    MOV CL,byte ptr [0x01c6af8c]        ; 004b2099 | DAT_01c6af8c
    SHR EDI,CL                          ; 004b209f
    MOV CL,byte ptr [0x01c6af94]        ; 004b20a1 | DAT_01c6af94
    SHL EDI,CL                          ; 004b20a7
    MOV ECX,EDI                         ; 004b20a9
    AND ECX,0xff                        ; 004b20ab
    MOV dword ptr [ESP + 0x6c],ECX      ; 004b20b1
    MOV ECX,0xff                        ; 004b20b5
    MOV EDI,dword ptr [ESP + 0x64]      ; 004b20ba
    SUB ECX,EAX                         ; 004b20be
    IMUL EDI,ECX                        ; 004b20c0
    ADD EBP,EDI                         ; 004b20c3
    MOV EDI,dword ptr [ESP + 0x68]      ; 004b20c5
    IMUL EDI,ECX                        ; 004b20c9
    ADD ESI,EDI                         ; 004b20cc
    IMUL ECX,dword ptr [ESP + 0x6c]     ; 004b20ce
    AND EDX,0xff                        ; 004b20d3
    MOV EDI,EDX                         ; 004b20d9
    IMUL EDI,EAX                        ; 004b20db
    MOV EAX,EBP                         ; 004b20de
    XOR EDX,EDX                         ; 004b20e0
    SHR EAX,0x8                         ; 004b20e2
    MOV EBP,dword ptr [0x01c6af78]      ; 004b20e5 | DAT_01c6af78
    MOV dword ptr [ESP + 0x74],EAX      ; 004b20eb
    DIV EBP                             ; 004b20ef
    ADD EDI,ECX                         ; 004b20f1
    MOV ECX,ESI                         ; 004b20f3
    SHR ECX,0x8                         ; 004b20f5
    MOV dword ptr [ESP + 0x74],EAX      ; 004b20f8
    XOR EDX,EDX                         ; 004b20fc
    MOV EAX,ECX                         ; 004b20fe
    DIV dword ptr [0x01c6af84]          ; 004b2100 | DAT_01c6af84
    SHR EDI,0x8                         ; 004b2106
    MOV dword ptr [ESP + 0x78],EDI      ; 004b2109
    MOV ESI,EAX                         ; 004b210d
    XOR EDX,EDX                         ; 004b210f
    MOV EAX,EDI                         ; 004b2111
    DIV dword ptr [0x01c6af90]          ; 004b2113 | DAT_01c6af90
    MOV CL,byte ptr [0x01c6af74]        ; 004b2119 | DAT_01c6af74
    MOV EDX,dword ptr [ESP + 0x74]      ; 004b211f
    MOV dword ptr [ESP + 0x78],EAX      ; 004b2123
    MOV EAX,ESI                         ; 004b2127
    SHL EDX,CL                          ; 004b2129
    MOV CL,byte ptr [0x01c6af80]        ; 004b212b | DAT_01c6af80
    SHL EAX,CL                          ; 004b2131
    MOV CL,byte ptr [0x01c6af8c]        ; 004b2133 | DAT_01c6af8c
    OR EAX,EDX                          ; 004b2139
    MOV EDX,dword ptr [ESP + 0x78]      ; 004b213b
    SHL EDX,CL                          ; 004b213f
    OR EAX,EDX                          ; 004b2141
    MOV word ptr [EBX],AX               ; 004b2143
    MOV EDI,dword ptr [ESP + 0x5c]      ; 004b2146
        ;   Label: LAB_004b2146
    MOV EBP,dword ptr [ESP + 0x4]       ; 004b214a
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b214e
    ADD EBX,0x2                         ; 004b2152
    INC EDI                             ; 004b2155
    INC EBP                             ; 004b2156
    MOV dword ptr [ESP + 0x5c],EDI      ; 004b2157
    MOV dword ptr [ESP + 0x4],EBP       ; 004b215b
    CMP EDI,EDX                         ; 004b215f
    JLE 0x004b1f64                      ; 004b2161
        ;   XREF to: 004b1f64 (CONDITIONAL_JUMP)  ; LAB_004b1f64
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004b2167
        ;   Label: LAB_004b2167
    MOV EDX,dword ptr [ESP + 0x58]      ; 004b216e
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b2172
    ADD EAX,0x4                         ; 004b2176
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b2179
    MOV dword ptr [ESP + 0xb0],EAX      ; 004b217d
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b2184
    INC EDX                             ; 004b2188
    ADD ECX,EAX                         ; 004b2189
    MOV dword ptr [ESP + 0x58],EDX      ; 004b218b
    MOV dword ptr [ESP + 0x4],ECX       ; 004b218f
    CMP EDX,EBX                         ; 004b2193
    JG 0x004b1660                       ; 004b2195
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b1f35                      ; 004b219b
        ;   XREF to: 004b1f35 (UNCONDITIONAL_JUMP)  ; LAB_004b1f35
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b21a0
        ;   Label: LAB_004b21a0
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b21a4
    CMP ESI,EAX                         ; 004b21ab
    JG 0x004b1660                       ; 004b21ad
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    LEA EDI,[ESI*0x4 + 0x0]             ; 004b21b3
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b21ba
        ;   Label: LAB_004b21ba
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004b21c1
    MOV EAX,dword ptr [EDI + 0x1c5faec] ; 004b21c8 | DAT_01c5faec | DAT_01c5faf0
    ADD ECX,ECX                         ; 004b21ce
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b21d0
    ADD ECX,EAX                         ; 004b21d4
    CMP EDX,EBP                         ; 004b21d6
    JG 0x004b220b                       ; 004b21d8
        ;   XREF to: 004b220b (CONDITIONAL_JUMP)  ; LAB_004b220b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b21da
        ;   Label: LAB_004b21da
    MOV AL,byte ptr [EAX]               ; 004b21de
    AND EAX,0xff                        ; 004b21e0
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b21e5
    JZ 0x004b21f6                       ; 004b21eb
        ;   XREF to: 004b21f6 (CONDITIONAL_JUMP)  ; LAB_004b21f6
    MOV AX,[0x01d1ad74]                 ; 004b21ed | DAT_01d1ad74
    MOV word ptr [ECX],AX               ; 004b21f3
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b21f6
        ;   Label: LAB_004b21f6
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b21fa
    INC EDX                             ; 004b21fe
    INC EAX                             ; 004b21ff
    ADD ECX,0x2                         ; 004b2200
    MOV dword ptr [ESP + 0x4],EAX       ; 004b2203
    CMP EDX,EBP                         ; 004b2207
    JLE 0x004b21da                      ; 004b2209
        ;   XREF to: 004b21da (CONDITIONAL_JUMP)  ; LAB_004b21da
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b220b
        ;   Label: LAB_004b220b
    MOV EBP,dword ptr [ESP + 0x4]       ; 004b220f
    ADD EDI,0x4                         ; 004b2213
    INC ESI                             ; 004b2216
    ADD EBP,EAX                         ; 004b2217
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b2219
    MOV dword ptr [ESP + 0x4],EBP       ; 004b221d
    CMP ESI,EAX                         ; 004b2221
    JG 0x004b1660                       ; 004b2223
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b21ba                      ; 004b2229
        ;   XREF to: 004b21ba (UNCONDITIONAL_JUMP)  ; LAB_004b21ba
    MOV AX,word ptr [EDI*0x2 + 0x1c6a070] ; 004b222b
        ;   Label: LAB_004b222b
    MOV ECX,dword ptr [EBX + 0x1de4]    ; 004b2233
    MOV dword ptr [ESP + 0xc4],EAX      ; 004b2239
    TEST ECX,ECX                        ; 004b2240
    JZ 0x004b251a                       ; 004b2242
        ;   XREF to: 004b251a (CONDITIONAL_JUMP)  ; LAB_004b251a
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b2248
    MOV EDI,dword ptr [ESP + 0xc]       ; 004b224f
    MOV dword ptr [ESP + 0x7c],EAX      ; 004b2253
    CMP EAX,EDI                         ; 004b2257
    JG 0x004b1660                       ; 004b2259
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b225f
    SUB EAX,ESI                         ; 004b2266
    SHL EAX,0x8                         ; 004b2268
    ADD EBX,EAX                         ; 004b226b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004b226d
    SHL EAX,0x2                         ; 004b2271
    MOV dword ptr [ESP + 0x84],EBX      ; 004b2274
    MOV dword ptr [ESP + 0xac],EAX      ; 004b227b
    MOV EBX,dword ptr [ESP + 0xac]      ; 004b2282
        ;   Label: LAB_004b2282
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b2289
    MOV EBX,dword ptr [EBX + 0x1c5faec] ; 004b2290 | DAT_01c5faec | DAT_01c5faf0
    ADD EAX,EAX                         ; 004b2296
    ADD EBX,EAX                         ; 004b2298
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b229a
    MOV ESI,dword ptr [ESP + 0x8]       ; 004b22a1
    MOV dword ptr [ESP + 0x80],EAX      ; 004b22a5
    CMP EAX,ESI                         ; 004b22ac
    JG 0x004b24e1                       ; 004b22ae
        ;   XREF to: 004b24e1 (CONDITIONAL_JUMP)  ; LAB_004b24e1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b22b4
        ;   Label: LAB_004b22b4
    MOV AL,byte ptr [EAX]               ; 004b22b8
    AND EAX,0xff                        ; 004b22ba
    MOV ECX,dword ptr [ESP + 0x84]      ; 004b22bf
    LEA EAX,[EAX + EAX*0x2]             ; 004b22c6
    ADD EAX,ECX                         ; 004b22c9
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004b22cb
    MOV EDX,dword ptr [0x005fba38]      ; 004b22d1 | DAT_005fba38
    AND EAX,0xff                        ; 004b22d7
    IMUL EDX,EAX                        ; 004b22dc
    MOV EAX,EDX                         ; 004b22df
    SAR EDX,0x1f                        ; 004b22e1
    SHL EDX,0x8                         ; 004b22e4
    SBB EAX,EDX                         ; 004b22e7
    SAR EAX,0x8                         ; 004b22e9
    TEST EAX,EAX                        ; 004b22ec
    JZ 0x004b24ba                       ; 004b22ee
        ;   XREF to: 004b24ba (CONDITIONAL_JUMP)  ; LAB_004b24ba
    MOV DX,word ptr [EBX]               ; 004b22f4
    MOV dword ptr [ESP + 0xbc],EDX      ; 004b22f7
    XOR EDX,EDX                         ; 004b22fe
    MOV ESI,dword ptr [0x00604e60]      ; 004b2300 | DAT_00604e60
    MOV DX,word ptr [ESP + 0xc4]        ; 004b2306
    MOV CL,byte ptr [0x01c6af74]        ; 004b230e | DAT_01c6af74
    AND ESI,EDX                         ; 004b2314
    MOV EDI,dword ptr [0x00604e68]      ; 004b2316 | DAT_00604e68
    SHR ESI,CL                          ; 004b231c
    MOV CL,byte ptr [0x01c6af7c]        ; 004b231e | DAT_01c6af7c
    AND EDI,EDX                         ; 004b2324
    SHL ESI,CL                          ; 004b2326
    MOV CL,byte ptr [0x01c6af80]        ; 004b2328 | DAT_01c6af80
    SHR EDI,CL                          ; 004b232e
    MOV CL,byte ptr [0x01c6af88]        ; 004b2330 | DAT_01c6af88
    SHL EDI,CL                          ; 004b2336
    AND EDI,0xff                        ; 004b2338
    IMUL EDI,EAX                        ; 004b233e
    AND ESI,0xff                        ; 004b2341
    MOV dword ptr [ESP + 0x88],ESI      ; 004b2347
    MOV ESI,dword ptr [0x00604e70]      ; 004b234e | DAT_00604e70
    AND ESI,EDX                         ; 004b2354
    MOV CL,byte ptr [0x01c6af8c]        ; 004b2356 | DAT_01c6af8c
    SHR ESI,CL                          ; 004b235c
    MOV CL,byte ptr [0x01c6af94]        ; 004b235e | DAT_01c6af94
    SHL ESI,CL                          ; 004b2364
    AND ESI,0xff                        ; 004b2366
    IMUL ESI,EAX                        ; 004b236c
    XOR EDX,EDX                         ; 004b236f
    MOV DX,word ptr [ESP + 0xbc]        ; 004b2371
    MOV ECX,dword ptr [0x00604e60]      ; 004b2379 | DAT_00604e60
    AND ECX,EDX                         ; 004b237f
    MOV dword ptr [ESP + 0x98],ECX      ; 004b2381
    MOV EBP,dword ptr [ESP + 0x98]      ; 004b2388
    MOV CL,byte ptr [0x01c6af74]        ; 004b238f | DAT_01c6af74
    SHR EBP,CL                          ; 004b2395
    MOV CL,byte ptr [0x01c6af7c]        ; 004b2397 | DAT_01c6af7c
    SHL EBP,CL                          ; 004b239d
    MOV ECX,EBP                         ; 004b239f
    AND ECX,0xff                        ; 004b23a1
    MOV dword ptr [ESP + 0x8c],ECX      ; 004b23a7
    MOV ECX,dword ptr [0x00604e68]      ; 004b23ae | DAT_00604e68
    AND ECX,EDX                         ; 004b23b4
    MOV dword ptr [ESP + 0x98],ECX      ; 004b23b6
    MOV EBP,dword ptr [ESP + 0x98]      ; 004b23bd
    MOV CL,byte ptr [0x01c6af80]        ; 004b23c4 | DAT_01c6af80
    SHR EBP,CL                          ; 004b23ca
    MOV CL,byte ptr [0x01c6af88]        ; 004b23cc | DAT_01c6af88
    SHL EBP,CL                          ; 004b23d2
    MOV ECX,EBP                         ; 004b23d4
    AND EDX,dword ptr [0x00604e70]      ; 004b23d6 | DAT_00604e70
    MOV EBP,dword ptr [ESP + 0x88]      ; 004b23dc
    IMUL EBP,EAX                        ; 004b23e3
    AND ECX,0xff                        ; 004b23e6
    MOV dword ptr [ESP + 0x90],ECX      ; 004b23ec
    MOV CL,byte ptr [0x01c6af8c]        ; 004b23f3 | DAT_01c6af8c
    SHR EDX,CL                          ; 004b23f9
    MOV CL,byte ptr [0x01c6af94]        ; 004b23fb | DAT_01c6af94
    SHL EDX,CL                          ; 004b2401
    AND EDX,0xff                        ; 004b2403
    MOV dword ptr [ESP + 0x94],EDX      ; 004b2409
    MOV EDX,0xff                        ; 004b2410
    MOV ECX,dword ptr [ESP + 0x8c]      ; 004b2415
    SUB EDX,EAX                         ; 004b241c
    IMUL ECX,EDX                        ; 004b241e
    ADD EBP,ECX                         ; 004b2421
    MOV ECX,dword ptr [ESP + 0x90]      ; 004b2423
    IMUL ECX,EDX                        ; 004b242a
    ADD EDI,ECX                         ; 004b242d
    IMUL EDX,dword ptr [ESP + 0x94]     ; 004b242f
    MOV EAX,EBP                         ; 004b2437
    SHR EAX,0x8                         ; 004b2439
    MOV ECX,EDI                         ; 004b243c
    ADD ESI,EDX                         ; 004b243e
    MOV EDI,dword ptr [0x01c6af78]      ; 004b2440 | DAT_01c6af78
    XOR EDX,EDX                         ; 004b2446
    MOV dword ptr [ESP + 0x9c],EAX      ; 004b2448
    DIV EDI                             ; 004b244f
    MOV dword ptr [ESP + 0x88],EBP      ; 004b2451
    MOV EBP,dword ptr [0x01c6af84]      ; 004b2458 | DAT_01c6af84
    SHR ECX,0x8                         ; 004b245e
    MOV dword ptr [ESP + 0x9c],EAX      ; 004b2461
    XOR EDX,EDX                         ; 004b2468
    MOV EAX,ECX                         ; 004b246a
    DIV EBP                             ; 004b246c
    SHR ESI,0x8                         ; 004b246e
    MOV ECX,dword ptr [0x01c6af90]      ; 004b2471 | DAT_01c6af90
    MOV EDI,EAX                         ; 004b2477
    XOR EDX,EDX                         ; 004b2479
    MOV EAX,ESI                         ; 004b247b
    DIV ECX                             ; 004b247d
    MOV dword ptr [ESP + 0xa0],ESI      ; 004b247f
    MOV CL,byte ptr [0x01c6af74]        ; 004b2486 | DAT_01c6af74
    MOV dword ptr [ESP + 0xa0],EAX      ; 004b248c
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004b2493
    SHL EAX,CL                          ; 004b249a
    MOV CL,byte ptr [0x01c6af80]        ; 004b249c | DAT_01c6af80
    SHL EDI,CL                          ; 004b24a2
    MOV CL,byte ptr [0x01c6af8c]        ; 004b24a4 | DAT_01c6af8c
    OR EDI,EAX                          ; 004b24aa
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004b24ac
    SHL EAX,CL                          ; 004b24b3
    OR EAX,EDI                          ; 004b24b5
    MOV word ptr [EBX],AX               ; 004b24b7
    MOV EDI,dword ptr [ESP + 0x80]      ; 004b24ba
        ;   Label: LAB_004b24ba
    MOV EBP,dword ptr [ESP + 0x4]       ; 004b24c1
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b24c5
    ADD EBX,0x2                         ; 004b24c9
    INC EDI                             ; 004b24cc
    INC EBP                             ; 004b24cd
    MOV dword ptr [ESP + 0x80],EDI      ; 004b24ce
    MOV dword ptr [ESP + 0x4],EBP       ; 004b24d5
    CMP EDI,EDX                         ; 004b24d9
    JLE 0x004b22b4                      ; 004b24db
        ;   XREF to: 004b22b4 (CONDITIONAL_JUMP)  ; LAB_004b22b4
    MOV EAX,dword ptr [ESP + 0xac]      ; 004b24e1
        ;   Label: LAB_004b24e1
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004b24e8
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b24ec
    ADD EAX,0x4                         ; 004b24f0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b24f3
    MOV dword ptr [ESP + 0xac],EAX      ; 004b24f7
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b24fe
    INC EDX                             ; 004b2502
    ADD ECX,EAX                         ; 004b2503
    MOV dword ptr [ESP + 0x7c],EDX      ; 004b2505
    MOV dword ptr [ESP + 0x4],ECX       ; 004b2509
    CMP EDX,EBX                         ; 004b250d
    JG 0x004b1660                       ; 004b250f
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b2282                      ; 004b2515
        ;   XREF to: 004b2282 (UNCONDITIONAL_JUMP)  ; LAB_004b2282
    MOV ESI,dword ptr [ESP + 0xc]       ; 004b251a
        ;   Label: LAB_004b251a
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004b251e
    CMP EDI,ESI                         ; 004b2525
    JG 0x004b1660                       ; 004b2527
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV ESI,EDX                         ; 004b252d
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b252f
        ;   Label: LAB_004b252f
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b2536
    MOV EDX,dword ptr [ESI + 0x1c5faec] ; 004b253d | DAT_01c5faec | DAT_01c5faf0
    ADD EAX,EAX                         ; 004b2543
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b2545
    ADD EDX,EAX                         ; 004b2549
    CMP ECX,EBP                         ; 004b254b
    JG 0x004b2581                       ; 004b254d
        ;   XREF to: 004b2581 (CONDITIONAL_JUMP)  ; LAB_004b2581
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b254f
        ;   Label: LAB_004b254f
    MOV AL,byte ptr [EAX]               ; 004b2553
    AND EAX,0xff                        ; 004b2555
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b255a
    JZ 0x004b256c                       ; 004b2560
        ;   XREF to: 004b256c (CONDITIONAL_JUMP)  ; LAB_004b256c
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004b2562
    MOV word ptr [EDX],AX               ; 004b2569
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b256c
        ;   Label: LAB_004b256c
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b2570
    INC ECX                             ; 004b2574
    INC EAX                             ; 004b2575
    ADD EDX,0x2                         ; 004b2576
    MOV dword ptr [ESP + 0x4],EAX       ; 004b2579
    CMP ECX,EBP                         ; 004b257d
    JLE 0x004b254f                      ; 004b257f
        ;   XREF to: 004b254f (CONDITIONAL_JUMP)  ; LAB_004b254f
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b2581
        ;   Label: LAB_004b2581
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b2585
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b2589
    ADD ESI,0x4                         ; 004b258d
    ADD EDX,EAX                         ; 004b2590
    INC EDI                             ; 004b2592
    MOV dword ptr [ESP + 0x4],EDX       ; 004b2593
    CMP EDI,ECX                         ; 004b2597
    JG 0x004b1660                       ; 004b2599
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b252f                      ; 004b259f
        ;   XREF to: 004b252f (UNCONDITIONAL_JUMP)  ; LAB_004b252f
    CMP ECX,0x20                        ; 004b25a1
        ;   Label: LAB_004b25a1
    JNZ 0x004b1660                      ; 004b25a4
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EAX,ESI                         ; 004b25aa
    LEA EDI,[EBX + 0xdb4]               ; 004b25ac
    SHL EAX,0xa                         ; 004b25b2
    MOV ECX,dword ptr [ESP + 0xec]      ; 004b25b5
    ADD EDI,EAX                         ; 004b25bc
    CMP ECX,-0x1                        ; 004b25be
    JZ 0x004b2668                       ; 004b25c1
        ;   XREF to: 004b2668 (CONDITIONAL_JUMP)  ; LAB_004b2668
    CMP ECX,-0x2                        ; 004b25c7
    JNZ 0x004b2829                      ; 004b25ca
        ;   XREF to: 004b2829 (CONDITIONAL_JUMP)  ; LAB_004b2829
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004b25d0
    JZ 0x004b27a4                       ; 004b25d7
        ;   XREF to: 004b27a4 (CONDITIONAL_JUMP)  ; LAB_004b27a4
    MOV EBP,dword ptr [ESP + 0xc]       ; 004b25dd
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b25e1
    CMP ESI,EBP                         ; 004b25e8
    JG 0x004b1660                       ; 004b25ea
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EBX,EDX                         ; 004b25f0
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004b25f2
        ;   Label: LAB_004b25f2
    MOV EAX,dword ptr [EBX + 0x1c5faec] ; 004b25f9 | DAT_01c5faec | DAT_01c5faf0
    SHL EDX,0x2                         ; 004b25ff
    MOV EBP,dword ptr [ESP + 0xe4]      ; 004b2602
    ADD EDX,EAX                         ; 004b2609
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b260b
    MOV ECX,dword ptr [0x01d1ad64]      ; 004b260f | DAT_01d1ad64
    SUB EAX,EBP                         ; 004b2615
    PUSH ECX                            ; 004b2617
    INC EAX                             ; 004b2618
    PUSH EAX                            ; 004b2619
    PUSH EDI                            ; 004b261a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b261b
    PUSH EAX                            ; 004b261f
    PUSH EDX                            ; 004b2620
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004b1310 ; 004b2621
        ;   XREF to: 004b1310 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004b1310(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004b2626
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b2629
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004b262d
    ADD EBX,0x4                         ; 004b2634
    SUB EAX,EDX                         ; 004b2637
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b2639
    INC EAX                             ; 004b263d
    INC ESI                             ; 004b263e
    ADD ECX,EAX                         ; 004b263f
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b2641
    MOV dword ptr [ESP + 0x4],ECX       ; 004b2645
    LEA EBP,[ECX + EAX*0x1]             ; 004b2649
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b264c
    MOV dword ptr [ESP + 0x4],EBP       ; 004b2650
    CMP ESI,EAX                         ; 004b2654
    JLE 0x004b25f2                      ; 004b2656
        ;   XREF to: 004b25f2 (CONDITIONAL_JUMP)  ; LAB_004b25f2
    MOV EDX,dword ptr [ESP]             ; 004b2658
    MOV EAX,EDX                         ; 004b265b
    ADD ESP,0xc8                        ; 004b265d
    POP EBP                             ; 004b2663
    POP EDI                             ; 004b2664
    POP ESI                             ; 004b2665
    POP EBX                             ; 004b2666
    RET                                 ; 004b2667
    LEA ECX,[EBX + EAX*0x1]             ; 004b2668
        ;   Label: LAB_004b2668
    MOV EAX,dword ptr [EBX + 0x1de4]    ; 004b266b
    MOV dword ptr [ESP + 0xa8],ECX      ; 004b2671
    TEST EAX,EAX                        ; 004b2678
    JZ 0x004b2718                       ; 004b267a
        ;   XREF to: 004b2718 (CONDITIONAL_JUMP)  ; LAB_004b2718
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b2680
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b2684
    CMP ESI,EBX                         ; 004b268b
    JG 0x004b1660                       ; 004b268d
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EBX,EDX                         ; 004b2693
    MOV EBP,ECX                         ; 004b2695
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b2697
        ;   Label: LAB_004b2697
    MOV EDX,dword ptr [EBX + 0x1c5faec] ; 004b269e | DAT_01c5faec | DAT_01c5faf0
    SHL EAX,0x2                         ; 004b26a4
    ADD EAX,EDX                         ; 004b26a7
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b26a9
    MOV DL,byte ptr [EDX]               ; 004b26ad
    AND EDX,0xff                        ; 004b26af
    MOV ECX,dword ptr [EBP + EDX*0x4 + 0xdb4] ; 004b26b5
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b26bc
    PUSH ECX                            ; 004b26c0
    SUB EDX,dword ptr [ESP + 0xe8]      ; 004b26c1
    INC EDX                             ; 004b26c8
    PUSH EDX                            ; 004b26c9
    PUSH EDI                            ; 004b26ca
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b26cb
    PUSH EDX                            ; 004b26cf
    PUSH EAX                            ; 004b26d0
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004b1310 ; 004b26d1
        ;   XREF to: 004b1310 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004b1310(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004b26d6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b26d9
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b26dd
    ADD EBX,0x4                         ; 004b26e4
    SUB EAX,ECX                         ; 004b26e7
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b26e9
    INC EAX                             ; 004b26ed
    INC ESI                             ; 004b26ee
    ADD EDX,EAX                         ; 004b26ef
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b26f1
    MOV dword ptr [ESP + 0x4],EDX       ; 004b26f5
    LEA ECX,[EDX + EAX*0x1]             ; 004b26f9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b26fc
    MOV dword ptr [ESP + 0x4],ECX       ; 004b2700
    CMP ESI,EAX                         ; 004b2704
    JLE 0x004b2697                      ; 004b2706
        ;   XREF to: 004b2697 (CONDITIONAL_JUMP)  ; LAB_004b2697
    MOV EDX,dword ptr [ESP]             ; 004b2708
    MOV EAX,EDX                         ; 004b270b
    ADD ESP,0xc8                        ; 004b270d
    POP EBP                             ; 004b2713
    POP EDI                             ; 004b2714
    POP ESI                             ; 004b2715
    POP EBX                             ; 004b2716
    RET                                 ; 004b2717
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b2718
        ;   Label: LAB_004b2718
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004b271c
    CMP EDI,ECX                         ; 004b2723
    JG 0x004b1660                       ; 004b2725
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV ESI,dword ptr [ESP + 0xa8]      ; 004b272b
    MOV EBP,EDX                         ; 004b2732
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004b2734
        ;   Label: LAB_004b2734
    MOV EAX,dword ptr [EBP + 0x1c5faec] ; 004b273b | DAT_01c5faec | DAT_01c5faf0
    SHL EDX,0x2                         ; 004b2741
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b2744
    ADD EDX,EAX                         ; 004b274b
    CMP ECX,dword ptr [ESP + 0x8]       ; 004b274d
    JG 0x004b2784                       ; 004b2751
        ;   XREF to: 004b2784 (CONDITIONAL_JUMP)  ; LAB_004b2784
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b2753
        ;   Label: LAB_004b2753
    MOV AL,byte ptr [EAX]               ; 004b2757
    AND EAX,0xff                        ; 004b2759
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b275e
    JZ 0x004b276f                       ; 004b2764
        ;   XREF to: 004b276f (CONDITIONAL_JUMP)  ; LAB_004b276f
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0xdb4] ; 004b2766
    MOV dword ptr [EDX],EAX             ; 004b276d
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b276f
        ;   Label: LAB_004b276f
    INC EAX                             ; 004b2773
    INC ECX                             ; 004b2774
    MOV dword ptr [ESP + 0x4],EAX       ; 004b2775
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b2779
    ADD EDX,0x4                         ; 004b277d
    CMP ECX,EAX                         ; 004b2780
    JLE 0x004b2753                      ; 004b2782
        ;   XREF to: 004b2753 (CONDITIONAL_JUMP)  ; LAB_004b2753
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b2784
        ;   Label: LAB_004b2784
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b2788
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b278c
    ADD EBP,0x4                         ; 004b2790
    ADD EDX,EAX                         ; 004b2793
    INC EDI                             ; 004b2795
    MOV dword ptr [ESP + 0x4],EDX       ; 004b2796
    CMP EDI,ECX                         ; 004b279a
    JG 0x004b1660                       ; 004b279c
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b2734                      ; 004b27a2
        ;   XREF to: 004b2734 (UNCONDITIONAL_JUMP)  ; LAB_004b2734
    MOV EDI,dword ptr [ESP + 0xc]       ; 004b27a4
        ;   Label: LAB_004b27a4
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b27a8
    CMP ESI,EDI                         ; 004b27af
    JG 0x004b1660                       ; 004b27b1
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EDI,EDX                         ; 004b27b7
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b27b9
        ;   Label: LAB_004b27b9
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004b27c0
    MOV EAX,dword ptr [EDI + 0x1c5faec] ; 004b27c7 | DAT_01c5faec | DAT_01c5faf0
    SHL ECX,0x2                         ; 004b27cd
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b27d0
    ADD ECX,EAX                         ; 004b27d4
    CMP EDX,EBP                         ; 004b27d6
    JG 0x004b2809                       ; 004b27d8
        ;   XREF to: 004b2809 (CONDITIONAL_JUMP)  ; LAB_004b2809
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b27da
        ;   Label: LAB_004b27da
    MOV AL,byte ptr [EAX]               ; 004b27de
    AND EAX,0xff                        ; 004b27e0
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b27e5
    JZ 0x004b27f4                       ; 004b27eb
        ;   XREF to: 004b27f4 (CONDITIONAL_JUMP)  ; LAB_004b27f4
    MOV EAX,[0x01d1ad64]                ; 004b27ed | DAT_01d1ad64
    MOV dword ptr [ECX],EAX             ; 004b27f2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b27f4
        ;   Label: LAB_004b27f4
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b27f8
    INC EDX                             ; 004b27fc
    INC EAX                             ; 004b27fd
    ADD ECX,0x4                         ; 004b27fe
    MOV dword ptr [ESP + 0x4],EAX       ; 004b2801
    CMP EDX,EBP                         ; 004b2805
    JLE 0x004b27da                      ; 004b2807
        ;   XREF to: 004b27da (CONDITIONAL_JUMP)  ; LAB_004b27da
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b2809
        ;   Label: LAB_004b2809
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b280d
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b2811
    ADD EDI,0x4                         ; 004b2815
    ADD EDX,EAX                         ; 004b2818
    INC ESI                             ; 004b281a
    MOV dword ptr [ESP + 0x4],EDX       ; 004b281b
    CMP ESI,ECX                         ; 004b281f
    JG 0x004b1660                       ; 004b2821
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b27b9                      ; 004b2827
        ;   XREF to: 004b27b9 (UNCONDITIONAL_JUMP)  ; LAB_004b27b9
    CMP ECX,-0x3                        ; 004b2829
        ;   Label: LAB_004b2829
    JNZ 0x004b294f                      ; 004b282c
        ;   XREF to: 004b294f (CONDITIONAL_JUMP)  ; LAB_004b294f
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004b2832
    JZ 0x004b28ca                       ; 004b2839
        ;   XREF to: 004b28ca (CONDITIONAL_JUMP)  ; LAB_004b28ca
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b283f
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b2843
    CMP ESI,EBX                         ; 004b284a
    JG 0x004b1660                       ; 004b284c
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EBX,EDX                         ; 004b2852
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b2854
        ;   Label: LAB_004b2854
    MOV EDX,dword ptr [EBX + 0x1c5faec] ; 004b285b | DAT_01c5faec | DAT_01c5faf0
    SHL EAX,0x2                         ; 004b2861
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b2864
    ADD EDX,EAX                         ; 004b286b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b286d
    MOV EBP,dword ptr [0x01d1ad74]      ; 004b2871 | DAT_01d1ad74
    SUB EAX,ECX                         ; 004b2877
    PUSH EBP                            ; 004b2879
    INC EAX                             ; 004b287a
    PUSH EAX                            ; 004b287b
    PUSH EDI                            ; 004b287c
    MOV EBP,dword ptr [ESP + 0x10]      ; 004b287d
    PUSH EBP                            ; 004b2881
    PUSH EDX                            ; 004b2882
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004b1310 ; 004b2883
        ;   XREF to: 004b1310 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004b1310(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004b2888
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b288b
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004b288f
    ADD EBX,0x4                         ; 004b2896
    SUB EAX,EDX                         ; 004b2899
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b289b
    INC EAX                             ; 004b289f
    INC ESI                             ; 004b28a0
    ADD ECX,EAX                         ; 004b28a1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b28a3
    MOV dword ptr [ESP + 0x4],ECX       ; 004b28a7
    LEA EBP,[ECX + EAX*0x1]             ; 004b28ab
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b28ae
    MOV dword ptr [ESP + 0x4],EBP       ; 004b28b2
    CMP ESI,EAX                         ; 004b28b6
    JLE 0x004b2854                      ; 004b28b8
        ;   XREF to: 004b2854 (CONDITIONAL_JUMP)  ; LAB_004b2854
    MOV EDX,dword ptr [ESP]             ; 004b28ba
    MOV EAX,EDX                         ; 004b28bd
    ADD ESP,0xc8                        ; 004b28bf
    POP EBP                             ; 004b28c5
    POP EDI                             ; 004b28c6
    POP ESI                             ; 004b28c7
    POP EBX                             ; 004b28c8
    RET                                 ; 004b28c9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b28ca
        ;   Label: LAB_004b28ca
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004b28ce
    CMP EDI,ECX                         ; 004b28d5
    JG 0x004b1660                       ; 004b28d7
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV ESI,EDX                         ; 004b28dd
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b28df
        ;   Label: LAB_004b28df
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004b28e6
    MOV EAX,dword ptr [ESI + 0x1c5faec] ; 004b28ed | DAT_01c5faec | DAT_01c5faf0
    SHL ECX,0x2                         ; 004b28f3
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b28f6
    ADD ECX,EAX                         ; 004b28fa
    CMP EDX,EBP                         ; 004b28fc
    JG 0x004b292f                       ; 004b28fe
        ;   XREF to: 004b292f (CONDITIONAL_JUMP)  ; LAB_004b292f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b2900
        ;   Label: LAB_004b2900
    MOV AL,byte ptr [EAX]               ; 004b2904
    AND EAX,0xff                        ; 004b2906
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b290b
    JZ 0x004b291a                       ; 004b2911
        ;   XREF to: 004b291a (CONDITIONAL_JUMP)  ; LAB_004b291a
    MOV EAX,[0x01d1ad74]                ; 004b2913 | DAT_01d1ad74
    MOV dword ptr [ECX],EAX             ; 004b2918
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b291a
        ;   Label: LAB_004b291a
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b291e
    INC EDX                             ; 004b2922
    INC EAX                             ; 004b2923
    ADD ECX,0x4                         ; 004b2924
    MOV dword ptr [ESP + 0x4],EAX       ; 004b2927
    CMP EDX,EBP                         ; 004b292b
    JLE 0x004b2900                      ; 004b292d
        ;   XREF to: 004b2900 (CONDITIONAL_JUMP)  ; LAB_004b2900
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b292f
        ;   Label: LAB_004b292f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b2933
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b2937
    ADD ESI,0x4                         ; 004b293b
    ADD EDX,EAX                         ; 004b293e
    INC EDI                             ; 004b2940
    MOV dword ptr [ESP + 0x4],EDX       ; 004b2941
    CMP EDI,ECX                         ; 004b2945
    JG 0x004b1660                       ; 004b2947
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b28df                      ; 004b294d
        ;   XREF to: 004b28df (UNCONDITIONAL_JUMP)  ; LAB_004b28df
    MOV EAX,dword ptr [EBX + 0x1de4]    ; 004b294f
        ;   Label: LAB_004b294f
    MOV ESI,dword ptr [ECX*0x4 + 0x1c6a270] ; 004b2955
    TEST EAX,EAX                        ; 004b295c
    JZ 0x004b29e9                       ; 004b295e
        ;   XREF to: 004b29e9 (CONDITIONAL_JUMP)  ; LAB_004b29e9
    MOV EBP,dword ptr [ESP + 0xc]       ; 004b2964
    MOV EBX,dword ptr [ESP + 0xe8]      ; 004b2968
    CMP EBX,EBP                         ; 004b296f
    JG 0x004b1660                       ; 004b2971
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EBP,EDI                         ; 004b2977
    MOV EDI,EDX                         ; 004b2979
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004b297b
        ;   Label: LAB_004b297b
    MOV EAX,dword ptr [EDI + 0x1c5faec] ; 004b2982 | DAT_01c5faec | DAT_01c5faf0
    SHL EDX,0x2                         ; 004b2988
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b298b
    ADD EDX,EAX                         ; 004b2992
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b2994
    SUB EAX,ECX                         ; 004b2998
    PUSH ESI                            ; 004b299a
    INC EAX                             ; 004b299b
    PUSH EAX                            ; 004b299c
    PUSH EBP                            ; 004b299d
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b299e
    PUSH EAX                            ; 004b29a2
    PUSH EDX                            ; 004b29a3
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004b1310 ; 004b29a4
        ;   XREF to: 004b1310 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004b1310(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004b29a9
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b29ac
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004b29b0
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b29b7
    INC EAX                             ; 004b29bb
    ADD EDI,0x4                         ; 004b29bc
    ADD ECX,EAX                         ; 004b29bf
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b29c1
    MOV dword ptr [ESP + 0x4],ECX       ; 004b29c5
    LEA EDX,[ECX + EAX*0x1]             ; 004b29c9
    INC EBX                             ; 004b29cc
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b29cd
    MOV dword ptr [ESP + 0x4],EDX       ; 004b29d1
    CMP EBX,ECX                         ; 004b29d5
    JLE 0x004b297b                      ; 004b29d7
        ;   XREF to: 004b297b (CONDITIONAL_JUMP)  ; LAB_004b297b
    MOV EDX,dword ptr [ESP]             ; 004b29d9
    MOV EAX,EDX                         ; 004b29dc
    ADD ESP,0xc8                        ; 004b29de
    POP EBP                             ; 004b29e4
    POP EDI                             ; 004b29e5
    POP ESI                             ; 004b29e6
    POP EBX                             ; 004b29e7
    RET                                 ; 004b29e8
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b29e9
        ;   Label: LAB_004b29e9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b29f0
    MOV dword ptr [ESP + 0xa4],EAX      ; 004b29f4
    CMP EAX,ECX                         ; 004b29fb
    JG 0x004b1660                       ; 004b29fd
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    MOV EDI,EDX                         ; 004b2a03
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004b2a05
        ;   Label: LAB_004b2a05
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b2a0c
    MOV EAX,dword ptr [EDI + 0x1c5faec] ; 004b2a13 | DAT_01c5faec | DAT_01c5faf0
    SHL EDX,0x2                         ; 004b2a19
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b2a1c
    ADD EDX,EAX                         ; 004b2a20
    CMP ECX,EBP                         ; 004b2a22
    JG 0x004b2a50                       ; 004b2a24
        ;   XREF to: 004b2a50 (CONDITIONAL_JUMP)  ; LAB_004b2a50
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b2a26
        ;   Label: LAB_004b2a26
    MOV AL,byte ptr [EAX]               ; 004b2a2a
    AND EAX,0xff                        ; 004b2a2c
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004b2a31
    JZ 0x004b2a3b                       ; 004b2a37
        ;   XREF to: 004b2a3b (CONDITIONAL_JUMP)  ; LAB_004b2a3b
    MOV dword ptr [EDX],ESI             ; 004b2a39
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b2a3b
        ;   Label: LAB_004b2a3b
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b2a3f
    INC ECX                             ; 004b2a43
    INC EAX                             ; 004b2a44
    ADD EDX,0x4                         ; 004b2a45
    MOV dword ptr [ESP + 0x4],EAX       ; 004b2a48
    CMP ECX,EBP                         ; 004b2a4c
    JLE 0x004b2a26                      ; 004b2a4e
        ;   XREF to: 004b2a26 (CONDITIONAL_JUMP)  ; LAB_004b2a26
    MOV EDX,dword ptr [ESP + 0xa4]      ; 004b2a50
        ;   Label: LAB_004b2a50
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b2a57
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b2a5b
    MOV EBP,dword ptr [ESP + 0xc]       ; 004b2a5f
    ADD EDI,0x4                         ; 004b2a63
    INC EDX                             ; 004b2a66
    ADD ECX,EAX                         ; 004b2a67
    MOV dword ptr [ESP + 0xa4],EDX      ; 004b2a69
    MOV dword ptr [ESP + 0x4],ECX       ; 004b2a70
    CMP EDX,EBP                         ; 004b2a74
    JG 0x004b1660                       ; 004b2a76
        ;   XREF to: 004b1660 (CONDITIONAL_JUMP)  ; LAB_004b1660
    JMP 0x004b2a05                      ; 004b2a7c
        ;   XREF to: 004b2a05 (UNCONDITIONAL_JUMP)  ; LAB_004b2a05

