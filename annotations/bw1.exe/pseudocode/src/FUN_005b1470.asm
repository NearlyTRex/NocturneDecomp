; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b1470(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_werewolf_die_wav_005f9bad
;   TerminatedCString s_werewolf_hurt_wav_005f9bbf
;   undefined4 DAT_005f9bd2
;   undefined4 DAT_005f9bda
;   undefined4 DAT_005f9be2
;   undefined4 DAT_0061c010
;   undefined4 DAT_00622c18
;   undefined4 DAT_01fdcfc4
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040cc60
;   FUN_004a0f00
;   FUN_004b59e0
;   FUN_00524770
;   FUN_005247c0
;   FUN_005735a0
;   FUN_00573a80
;   FUN_005b0bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1470
        ;   Label: FUN_005b1470
    PUSH ESI                            ; 005b1471
    PUSH EDI                            ; 005b1472
    PUSH EBP                            ; 005b1473
    MOV EBP,ESP                         ; 005b1474
    SUB ESP,0x28                        ; 005b1476
    AND ESP,0xfffffff8                  ; 005b1479
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b147c
    MOV EDX,dword ptr [EAX + 0xc284]    ; 005b147f
    PUSH EDX                            ; 005b1485
    CALL FUN_00573a80                   ; 005b1486
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 005b148b
    MOV EAX,dword ptr [EBP + 0x18]      ; 005b148e
    CMP dword ptr [EAX + 0x30],0x6c     ; 005b1491
    JZ 0x005b15aa                       ; 005b1495
        ;   XREF to: 005b15aa (CONDITIONAL_JUMP)  ; LAB_005b15aa
    CMP dword ptr [EAX + 0x28],0x3      ; 005b149b
    JZ 0x005b15dd                       ; 005b149f
        ;   XREF to: 005b15dd (CONDITIONAL_JUMP)  ; LAB_005b15dd
    LEA EAX,[EAX]                       ; 005b14a5
    LEA EDX,[EDX]                       ; 005b14ab
    MOV EBX,EBX                         ; 005b14ae
    MOV EAX,dword ptr [EBP + 0x18]      ; 005b14b0
        ;   Label: LAB_005b14b0
    FLD float ptr [EAX + 0x4]           ; 005b14b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b14b6
    FSUBR float ptr [EAX + 0x2538]      ; 005b14b9
    LEA EBX,[EAX + 0x158]               ; 005b14bf
    FST float ptr [EAX + 0x2538]        ; 005b14c5
    FLDZ                                ; 005b14cb
    FCOMPP                              ; 005b14cd
    FNSTSW AX                           ; 005b14cf
    SAHF                                ; 005b14d1
    JC 0x005b165e                       ; 005b14d2
        ;   XREF to: 005b165e (CONDITIONAL_JUMP)  ; LAB_005b165e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b14d8
    PUSH EBX                            ; 005b14db
    MOV dword ptr [EAX + 0x2538],0x0    ; 005b14dc
    CALL FUN_00524770                   ; 005b14e6
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005b14eb
    ADD ESP,0x4                         ; 005b14ee
    CMP EAX,0xd                         ; 005b14f1
    JZ 0x005b1593                       ; 005b14f4
        ;   XREF to: 005b1593 (CONDITIONAL_JUMP)  ; LAB_005b1593
    CMP EAX,0xc                         ; 005b14fa
    JZ 0x005b1593                       ; 005b14fd
        ;   XREF to: 005b1593 (CONDITIONAL_JUMP)  ; LAB_005b1593
    PUSH 0x1                            ; 005b1503
    PUSH 0xc                            ; 005b1505
    PUSH EBX                            ; 005b1507
    CALL FUN_005247c0                   ; 005b1508
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005b150d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b1510
    CMP dword ptr [EAX + 0xc268],0x0    ; 005b1513
    JNZ 0x005b154c                      ; 005b151a
        ;   XREF to: 005b154c (CONDITIONAL_JUMP)  ; LAB_005b154c
    MOV EAX,[0x00622c18]                ; 005b151c | DAT_00622c18
    CMP dword ptr [EAX + 0x15ae5c],0x0  ; 005b1521 | DAT_01fdcfc4
    JZ 0x005b154c                       ; 005b1528
        ;   XREF to: 005b154c (CONDITIONAL_JUMP)  ; LAB_005b154c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b152a
    FLD float ptr [EAX + 0x20]          ; 005b152d
    FST double ptr [ESP]                ; 005b1530
    FCOMP double ptr [0x005f9bda]       ; 005b1533 | DAT_005f9bda
    FNSTSW AX                           ; 005b1539
    SAHF                                ; 005b153b
    JBE 0x005b163d                      ; 005b153c
        ;   XREF to: 005b163d (CONDITIONAL_JUMP)  ; LAB_005b163d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b1542
    MOV dword ptr [EAX + 0x34],0xbfc90fdb ; 005b1545
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b154c
        ;   Label: LAB_005b154c
    MOV ESI,dword ptr [EAX + 0xc28c]    ; 005b154f
    PUSH ESI                            ; 005b1555
    CALL FUN_00573a80                   ; 005b1556
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 005b155b
    PUSH 0x5f9bad                       ; 005b155e | = "werewolf-die?.wav"
    MOV EDI,dword ptr [EBP + 0x14]      ; 005b1563
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b1566
    PUSH EDI                            ; 005b1569
    MOV EAX,dword ptr [EAX + 0x154]     ; 005b156a
    CALL dword ptr [EAX + 0x2c]         ; 005b1570
    ADD ESP,0x8                         ; 005b1573
    PUSH 0x41c80000                     ; 005b1576
    MOV dword ptr [EDI + 0xc28c],EAX    ; 005b157b
    PUSH 0x32                           ; 005b1581
    MOV EAX,dword ptr [EDI + 0x154]     ; 005b1583
    PUSH EDI                            ; 005b1589
    CALL dword ptr [EAX + 0xa8]         ; 005b158a
    ADD ESP,0xc                         ; 005b1590
    MOV ECX,dword ptr [EBP + 0x18]      ; 005b1593
        ;   Label: LAB_005b1593
    PUSH ECX                            ; 005b1596
    MOV EBX,dword ptr [EBP + 0x14]      ; 005b1597
    PUSH EBX                            ; 005b159a
    CALL FUN_004a0f00                   ; 005b159b
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 005b15a0
    MOV ESP,EBP                         ; 005b15a3
    POP EBP                             ; 005b15a5
    POP EDI                             ; 005b15a6
    POP ESI                             ; 005b15a7
    POP EBX                             ; 005b15a8
    RET                                 ; 005b15a9
    MOV EDI,dword ptr [EBP + 0x14]      ; 005b15aa
        ;   Label: LAB_005b15aa
    PUSH EDI                            ; 005b15ad
    CALL FUN_005b0bb0                   ; 005b15ae
        ;   XREF to: 005b0bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b0bb0()
    ADD ESP,0x4                         ; 005b15b3
    PUSH 0x1                            ; 005b15b6
    PUSH 0x16                           ; 005b15b8
    LEA EAX,[EDI + 0x158]               ; 005b15ba
    PUSH EAX                            ; 005b15c0
    CALL FUN_005247c0                   ; 005b15c1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005b15c6
    MOV EAX,dword ptr [EBP + 0x18]      ; 005b15c9
    PUSH EAX                            ; 005b15cc
    PUSH EDI                            ; 005b15cd
    CALL FUN_004a0f00                   ; 005b15ce
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 005b15d3
    MOV ESP,EBP                         ; 005b15d6
    POP EBP                             ; 005b15d8
    POP EDI                             ; 005b15d9
    POP ESI                             ; 005b15da
    POP EBX                             ; 005b15db
    RET                                 ; 005b15dc
    FLD float ptr [EAX + 0x4]           ; 005b15dd
        ;   Label: LAB_005b15dd
    ADD EAX,0x1c                        ; 005b15e0
    FLD ST0                             ; 005b15e3
    FMUL double ptr [0x005f9bd2]        ; 005b15e5 | DAT_005f9bd2
    PUSH EAX                            ; 005b15eb
    MOV ESI,dword ptr [EBP + 0x14]      ; 005b15ec
    LEA EDI,[ESP + 0x18]                ; 005b15ef
    PUSH ESI                            ; 005b15f3
    FSTP ST1                            ; 005b15f4
    LEA ESI,[ESP + 0x10]                ; 005b15f6
    FSTP float ptr [EAX + -0x18]        ; 005b15fa
    CALL FUN_00408b40                   ; 005b15fd
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x10]                ; 005b1602
    ADD ESP,0x8                         ; 005b1606
    XOR EBX,EBX                         ; 005b1609
    MOVSD ES:EDI,ESI                    ; 005b160b
    MOVSD ES:EDI,ESI                    ; 005b160c
    MOVSD ES:EDI,ESI                    ; 005b160d
    MOV ESI,0x4000                      ; 005b160e
    PUSH 0xffff                         ; 005b1613
        ;   Label: LAB_005b1613
    PUSH 0x0                            ; 005b1618
    PUSH ESI                            ; 005b161a
    PUSH ESI                            ; 005b161b
    PUSH 0x0                            ; 005b161c
    LEA EAX,[ESP + 0x28]                ; 005b161e
    PUSH EAX                            ; 005b1622
    MOV ECX,dword ptr [0x0061c010]      ; 005b1623 | DAT_0061c010
    PUSH ECX                            ; 005b1629
    INC EBX                             ; 005b162a
    CALL FUN_004b59e0                   ; 005b162b
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b59e0()
    ADD ESP,0x1c                        ; 005b1630
    CMP EBX,0x5                         ; 005b1633
    JL 0x005b1613                       ; 005b1636
        ;   XREF to: 005b1613 (CONDITIONAL_JUMP)  ; LAB_005b1613
    JMP 0x005b14b0                      ; 005b1638
        ;   XREF to: 005b14b0 (UNCONDITIONAL_JUMP)  ; LAB_005b14b0
    FLD double ptr [ESP]                ; 005b163d
        ;   Label: LAB_005b163d
    FCOMP double ptr [0x005f9be2]       ; 005b1640 | DAT_005f9be2
    FNSTSW AX                           ; 005b1646
    SAHF                                ; 005b1648
    JNC 0x005b154c                      ; 005b1649
        ;   XREF to: 005b154c (CONDITIONAL_JUMP)  ; LAB_005b154c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b164f
    MOV dword ptr [EAX + 0x34],0x3fc90fdb ; 005b1652
    JMP 0x005b154c                      ; 005b1659
        ;   XREF to: 005b154c (UNCONDITIONAL_JUMP)  ; LAB_005b154c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b165e
        ;   Label: LAB_005b165e
    CMP dword ptr [EAX + 0xc268],0x2    ; 005b1661
    JZ 0x005b16d9                       ; 005b1668
        ;   XREF to: 005b16d9 (CONDITIONAL_JUMP)  ; LAB_005b16d9
    PUSH EBX                            ; 005b166a
    CALL FUN_00524770                   ; 005b166b
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005b1670
    ADD ESP,0x4                         ; 005b1673
    CMP EAX,0xe                         ; 005b1676
    JNZ 0x005b1719                      ; 005b1679
        ;   XREF to: 005b1719 (CONDITIONAL_JUMP)  ; LAB_005b1719
    PUSH 0x2                            ; 005b167f
        ;   Label: LAB_005b167f
    PUSH 0x0                            ; 005b1681
    CALL FUN_0040cc60                   ; 005b1683
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 005b1688
    MOV EBX,EAX                         ; 005b168b
    TEST EAX,EAX                        ; 005b168d
    JNZ 0x005b16a6                      ; 005b168f
        ;   XREF to: 005b16a6 (CONDITIONAL_JUMP)  ; LAB_005b16a6
    PUSH 0x1                            ; 005b1691
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b1693
    PUSH 0x9                            ; 005b1696
    ADD EAX,0x158                       ; 005b1698
    PUSH EAX                            ; 005b169d
    CALL FUN_005247c0                   ; 005b169e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005b16a3
    CMP EBX,0x1                         ; 005b16a6
        ;   Label: LAB_005b16a6
    JNZ 0x005b16bf                      ; 005b16a9
        ;   XREF to: 005b16bf (CONDITIONAL_JUMP)  ; LAB_005b16bf
    PUSH EBX                            ; 005b16ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b16ac
    PUSH 0xa                            ; 005b16af
    ADD EAX,0x158                       ; 005b16b1
    PUSH EAX                            ; 005b16b6
    CALL FUN_005247c0                   ; 005b16b7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005b16bc
    CMP EBX,0x2                         ; 005b16bf
        ;   Label: LAB_005b16bf
    JNZ 0x005b16d9                      ; 005b16c2
        ;   XREF to: 005b16d9 (CONDITIONAL_JUMP)  ; LAB_005b16d9
    PUSH 0x1                            ; 005b16c4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b16c6
    PUSH 0xb                            ; 005b16c9
    ADD EAX,0x158                       ; 005b16cb
        ;   Label: LAB_005b16cb
    PUSH EAX                            ; 005b16d0
    CALL FUN_005247c0                   ; 005b16d1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005b16d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b16d9
        ;   Label: LAB_005b16d9
    MOV EDI,dword ptr [EAX + 0xc28c]    ; 005b16dc
    PUSH EDI                            ; 005b16e2
    CALL FUN_005735a0                   ; 005b16e3
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 005b16e8
    TEST EAX,EAX                        ; 005b16eb
    JNZ 0x005b1593                      ; 005b16ed
        ;   XREF to: 005b1593 (CONDITIONAL_JUMP)  ; LAB_005b1593
    PUSH 0x5f9bbf                       ; 005b16f3 | = "werewolf-hurt?.wav"
    MOV EDX,dword ptr [EBP + 0x14]      ; 005b16f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b16fb
    PUSH EDX                            ; 005b16fe
    MOV EAX,dword ptr [EAX + 0x154]     ; 005b16ff
    CALL dword ptr [EAX + 0x2c]         ; 005b1705
    ADD ESP,0x8                         ; 005b1708
    MOV EBX,dword ptr [EBP + 0x14]      ; 005b170b
    MOV dword ptr [EBX + 0xc28c],EAX    ; 005b170e
    JMP 0x005b1593                      ; 005b1714
        ;   XREF to: 005b1593 (UNCONDITIONAL_JUMP)  ; LAB_005b1593
    CMP EAX,0xf                         ; 005b1719
        ;   Label: LAB_005b1719
    JZ 0x005b167f                       ; 005b171c
        ;   XREF to: 005b167f (CONDITIONAL_JUMP)  ; LAB_005b167f
    TEST EAX,EAX                        ; 005b1722
    JNZ 0x005b177b                      ; 005b1724
        ;   XREF to: 005b177b (CONDITIONAL_JUMP)  ; LAB_005b177b
    PUSH 0x2                            ; 005b1726
        ;   Label: LAB_005b1726
    PUSH 0x0                            ; 005b1728
    CALL FUN_0040cc60                   ; 005b172a
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 005b172f
    MOV EBX,EAX                         ; 005b1732
    TEST EAX,EAX                        ; 005b1734
    JNZ 0x005b174d                      ; 005b1736
        ;   XREF to: 005b174d (CONDITIONAL_JUMP)  ; LAB_005b174d
    PUSH 0x1                            ; 005b1738
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b173a
    PUSH 0x10                           ; 005b173d
    ADD EAX,0x158                       ; 005b173f
    PUSH EAX                            ; 005b1744
    CALL FUN_005247c0                   ; 005b1745
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005b174a
    CMP EBX,0x1                         ; 005b174d
        ;   Label: LAB_005b174d
    JNZ 0x005b1766                      ; 005b1750
        ;   XREF to: 005b1766 (CONDITIONAL_JUMP)  ; LAB_005b1766
    PUSH EBX                            ; 005b1752
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b1753
    PUSH 0x11                           ; 005b1756
    ADD EAX,0x158                       ; 005b1758
    PUSH EAX                            ; 005b175d
    CALL FUN_005247c0                   ; 005b175e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005b1763
    CMP EBX,0x2                         ; 005b1766
        ;   Label: LAB_005b1766
    JNZ 0x005b16d9                      ; 005b1769
        ;   XREF to: 005b16d9 (CONDITIONAL_JUMP)  ; LAB_005b16d9
    PUSH 0x1                            ; 005b176f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b1771
    PUSH 0x12                           ; 005b1774
    JMP 0x005b16cb                      ; 005b1776
        ;   XREF to: 005b16cb (UNCONDITIONAL_JUMP)  ; LAB_005b16cb
    CMP EAX,0x1                         ; 005b177b
        ;   Label: LAB_005b177b
    JZ 0x005b1726                       ; 005b177e
        ;   XREF to: 005b1726 (CONDITIONAL_JUMP)  ; LAB_005b1726
    CMP EAX,0x2                         ; 005b1780
    JZ 0x005b1726                       ; 005b1783
        ;   XREF to: 005b1726 (CONDITIONAL_JUMP)  ; LAB_005b1726
    CMP EAX,0x13                        ; 005b1785
    JZ 0x005b1726                       ; 005b1788
        ;   XREF to: 005b1726 (CONDITIONAL_JUMP)  ; LAB_005b1726
    CMP EAX,0x3                         ; 005b178a
    JZ 0x005b1726                       ; 005b178d
        ;   XREF to: 005b1726 (CONDITIONAL_JUMP)  ; LAB_005b1726
    CMP EAX,0x4                         ; 005b178f
    JZ 0x005b1726                       ; 005b1792
        ;   XREF to: 005b1726 (CONDITIONAL_JUMP)  ; LAB_005b1726
    JMP 0x005b16d9                      ; 005b1794
        ;   XREF to: 005b16d9 (UNCONDITIONAL_JUMP)  ; LAB_005b16d9

