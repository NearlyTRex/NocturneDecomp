; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f13a0(int param_1,int param_2)
;
; Local Variables:
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
; XREF[2]:
;   FUN_004f1830 at 004f1903
;   FUN_004f2090 at 004f214a
;
; Referenced Globals:
;   undefined4 DAT_006004e0
;   undefined4 DAT_006004e4
;   undefined4 DAT_006004e8
;   undefined4 DAT_006004ec
;   undefined4 DAT_006004f0
;   undefined4 DAT_01d80844
;   undefined4 DAT_01d80848
;   undefined4 DAT_01d8084c
;   undefined4 DAT_01d80850
;   undefined4 DAT_01d80854
;   undefined4 DAT_01d80858
;   undefined4 DAT_01d80860
;   undefined4 DAT_01d80864
;   undefined4 DAT_01d80868
;   undefined4 DAT_01d8086c
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f13a0
        ;   Label: FUN_004f13a0
    PUSH ESI                            ; 004f13a1
    PUSH EDI                            ; 004f13a2
    PUSH EBP                            ; 004f13a3
    SUB ESP,0x50                        ; 004f13a4
    MOV EDI,dword ptr [ESP + 0x64]      ; 004f13a7
    MOV EAX,[0x01d80844]                ; 004f13ab | DAT_01d80844
    LEA EBP,[EAX*0x4 + 0x0]             ; 004f13b0
    ADD EBP,EAX                         ; 004f13b7
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f13b9
    SHL EBP,0x4                         ; 004f13bd
    FLD float ptr [EDI + 0x18]          ; 004f13c0
    ADD EBP,0x1d80848                   ; 004f13c3
    FCOMP float ptr [EAX + 0x18]        ; 004f13c9
    FNSTSW AX                           ; 004f13cc
    SAHF                                ; 004f13ce
    JBE 0x004f13db                      ; 004f13cf
        ;   XREF to: 004f13db (CONDITIONAL_JUMP)  ; LAB_004f13db
    MOV EAX,EDI                         ; 004f13d1
    MOV EDI,dword ptr [ESP + 0x68]      ; 004f13d3
    MOV dword ptr [ESP + 0x68],EAX      ; 004f13d7
    LEA EBX,[EDI + 0x18]                ; 004f13db
        ;   Label: LAB_004f13db
    MOV EAX,EBP                         ; 004f13de
    FLD float ptr [EBX]                 ; 004f13e0
    FLD float ptr [0x006004e0]          ; 004f13e2 | DAT_006004e0
    FSUBP                               ; 004f13e8
    FISTP dword ptr [EAX]               ; 004f13ea | DAT_01d80848
    MOV EBX,dword ptr [ESP + 0x68]      ; 004f13ec
    LEA EAX,[EBP + 0x4]                 ; 004f13f0
    ADD EBX,0x18                        ; 004f13f3
    FLD float ptr [EBX]                 ; 004f13f6
    FLD float ptr [0x006004e0]          ; 004f13f8 | DAT_006004e0
    FSUBP                               ; 004f13fe
    FISTP dword ptr [EAX]               ; 004f1400 | DAT_01d8084c
    MOV EAX,dword ptr [EBP]             ; 004f1402 | DAT_01d80848
    CMP EAX,dword ptr [EBP + 0x4]       ; 004f1405 | DAT_01d8084c
    JZ 0x004f17af                       ; 004f1408
        ;   XREF to: 004f17af (CONDITIONAL_JUMP)  ; LAB_004f17af
    CMP EAX,dword ptr [0x01d80d48]      ; 004f140e | DAT_01d80d48
    JGE 0x004f141b                      ; 004f1414
        ;   XREF to: 004f141b (CONDITIONAL_JUMP)  ; LAB_004f141b
    MOV [0x01d80d48],EAX                ; 004f1416 | DAT_01d80d48
    MOV EBX,dword ptr [0x01d80d4c]      ; 004f141b | DAT_01d80d4c
        ;   Label: LAB_004f141b
    MOV EAX,dword ptr [EBP + 0x4]       ; 004f1421 | DAT_01d8084c
    CMP EAX,EBX                         ; 004f1424
    JLE 0x004f142d                      ; 004f1426
        ;   XREF to: 004f142d (CONDITIONAL_JUMP)  ; LAB_004f142d
    MOV [0x01d80d4c],EAX                ; 004f1428 | DAT_01d80d4c
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f142d
        ;   Label: LAB_004f142d
    FLD float ptr [EAX + 0x18]          ; 004f1431
    FSUB float ptr [EDI + 0x18]         ; 004f1434
    FSTP float ptr [ESP + 0x48]         ; 004f1437
    CMP dword ptr [ESP + 0x48],0x3f800000 ; 004f143b
    JGE 0x004f17b7                      ; 004f1443
        ;   XREF to: 004f17b7 (CONDITIONAL_JUMP)  ; LAB_004f17b7
    XOR EAX,EAX                         ; 004f1449
    MOV dword ptr [ESP + 0x48],EAX      ; 004f144b
    FLD1                                ; 004f144f
        ;   Label: LAB_004f144f
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f1451
    FSUB float ptr [EDI + 0x18]         ; 004f1455
    FILD dword ptr [EBP]                ; 004f1458 | DAT_01d80848
    FLD float ptr [EAX + 0x14]          ; 004f145b
    FSUB float ptr [EDI + 0x14]         ; 004f145e
    FXCH                                ; 004f1461
    FADDP ST2,ST0                       ; 004f1463
    FMUL float ptr [ESP + 0x48]         ; 004f1465
    FXCH                                ; 004f1469
    FMUL float ptr [ESP + 0x48]         ; 004f146b
    LEA EBX,[ESP + 0x4]                 ; 004f146f
    LEA EAX,[EBP + 0xc]                 ; 004f1473
    FXCH                                ; 004f1476
    FSTP float ptr [ESP + 0x4]          ; 004f1478
    FSTP float ptr [ESP + 0x44]         ; 004f147c
    FLD float ptr [EBX]                 ; 004f1480
    FLD float ptr [0x006004e8]          ; 004f1482 | DAT_006004e8
    FMULP                               ; 004f1488
    FLD float ptr [0x006004e0]          ; 004f148a | DAT_006004e0
    FSUBP                               ; 004f1490
    FISTP dword ptr [EAX]               ; 004f1492 | DAT_01d80854
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f1494
    FLD float ptr [EAX + 0x14]          ; 004f1498
    FSUB float ptr [EDI + 0x14]         ; 004f149b
    FMUL float ptr [ESP + 0x44]         ; 004f149e
    LEA EBX,[ESP + 0x24]                ; 004f14a2
    FADD float ptr [EDI + 0x14]         ; 004f14a6
    LEA EAX,[EBP + 0x8]                 ; 004f14a9
    FSTP float ptr [ESP + 0x24]         ; 004f14ac
    FLD float ptr [EBX]                 ; 004f14b0
    FLD float ptr [0x006004e8]          ; 004f14b2 | DAT_006004e8
    FMULP                               ; 004f14b8
    FLD float ptr [0x006004e0]          ; 004f14ba | DAT_006004e0
    FSUBP                               ; 004f14c0
    FISTP dword ptr [EAX]               ; 004f14c2 | DAT_01d80850
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f14c4
    FLD float ptr [EAX + 0x1c]          ; 004f14c8
    FSUB float ptr [EDI + 0x1c]         ; 004f14cb
    FMUL float ptr [ESP + 0x48]         ; 004f14ce
    LEA EBX,[ESP + 0x8]                 ; 004f14d2
    LEA EAX,[EBP + 0x1c]                ; 004f14d6
    FSTP float ptr [ESP + 0x8]          ; 004f14d9
    FLD float ptr [EBX]                 ; 004f14dd
    FLD float ptr [0x006004ec]          ; 004f14df | DAT_006004ec
    FMULP                               ; 004f14e5
    FLD float ptr [0x006004e0]          ; 004f14e7 | DAT_006004e0
    FSUBP                               ; 004f14ed
    FISTP dword ptr [EAX]               ; 004f14ef | DAT_01d80864
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f14f1
    FLD float ptr [EAX + 0x1c]          ; 004f14f5
    FSUB float ptr [EDI + 0x1c]         ; 004f14f8
    FMUL float ptr [ESP + 0x44]         ; 004f14fb
    LEA EBX,[ESP + 0x28]                ; 004f14ff
    FADD float ptr [EDI + 0x1c]         ; 004f1503
    LEA EAX,[EBP + 0x18]                ; 004f1506
    FSTP float ptr [ESP + 0x28]         ; 004f1509
    FLD float ptr [EBX]                 ; 004f150d
    FLD float ptr [0x006004ec]          ; 004f150f | DAT_006004ec
    FMULP                               ; 004f1515
    FLD float ptr [0x006004e0]          ; 004f1517 | DAT_006004e0
    FSUBP                               ; 004f151d
    FISTP dword ptr [EAX]               ; 004f151f | DAT_01d80860
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f1521
    FLD float ptr [EAX + 0x20]          ; 004f1525
    FSUB float ptr [EDI + 0x20]         ; 004f1528
    FMUL float ptr [ESP + 0x48]         ; 004f152b
    LEA EBX,[ESP + 0xc]                 ; 004f152f
    LEA EAX,[EBP + 0x24]                ; 004f1533
    FSTP float ptr [ESP + 0xc]          ; 004f1536
    FLD float ptr [EBX]                 ; 004f153a
    FLD float ptr [0x006004ec]          ; 004f153c | DAT_006004ec
    FMULP                               ; 004f1542
    FLD float ptr [0x006004e0]          ; 004f1544 | DAT_006004e0
    FSUBP                               ; 004f154a
    FISTP dword ptr [EAX]               ; 004f154c | DAT_01d8086c
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f154e
    FLD float ptr [EAX + 0x20]          ; 004f1552
    FSUB float ptr [EDI + 0x20]         ; 004f1555
    FMUL float ptr [ESP + 0x44]         ; 004f1558
    LEA EBX,[ESP + 0x2c]                ; 004f155c
    FADD float ptr [EDI + 0x20]         ; 004f1560
    LEA EAX,[EBP + 0x20]                ; 004f1563
    FSTP float ptr [ESP + 0x2c]         ; 004f1566
    FLD float ptr [EBX]                 ; 004f156a
    FLD float ptr [0x006004ec]          ; 004f156c | DAT_006004ec
    FMULP                               ; 004f1572
    FLD float ptr [0x006004e0]          ; 004f1574 | DAT_006004e0
    FSUBP                               ; 004f157a
    FISTP dword ptr [EAX]               ; 004f157c | DAT_01d80868
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f157e
    FLD float ptr [EAX + 0x2c]          ; 004f1582
    FSUB float ptr [EDI + 0x2c]         ; 004f1585
    FMUL float ptr [ESP + 0x48]         ; 004f1588
    LEA EBX,[ESP + 0x10]                ; 004f158c
    LEA EAX,[EBP + 0x14]                ; 004f1590
    FSTP float ptr [ESP + 0x10]         ; 004f1593
    FLD float ptr [EBX]                 ; 004f1597
    FLD float ptr [0x006004e4]          ; 004f1599 | DAT_006004e4
    FMULP                               ; 004f159f
    FLD float ptr [0x006004e0]          ; 004f15a1 | DAT_006004e0
    FSUBP                               ; 004f15a7
    FISTP dword ptr [EAX]               ; 004f15a9
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f15ab
    FLD float ptr [EAX + 0x2c]          ; 004f15af
    FSUB float ptr [EDI + 0x2c]         ; 004f15b2
    FMUL float ptr [ESP + 0x44]         ; 004f15b5
    LEA EBX,[ESP + 0x30]                ; 004f15b9
    FADD float ptr [EDI + 0x2c]         ; 004f15bd
    LEA EAX,[EBP + 0x10]                ; 004f15c0
    FSTP float ptr [ESP + 0x30]         ; 004f15c3
    FLD float ptr [EBX]                 ; 004f15c7
    FLD float ptr [0x006004e4]          ; 004f15c9 | DAT_006004e4
    FMULP                               ; 004f15cf
    FLD float ptr [0x006004e0]          ; 004f15d1 | DAT_006004e0
    FSUBP                               ; 004f15d7
    FISTP dword ptr [EAX]               ; 004f15d9 | DAT_01d80858
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f15db
    FLD float ptr [EAX + 0x34]          ; 004f15df
    FSUB float ptr [EDI + 0x34]         ; 004f15e2
    FMUL float ptr [ESP + 0x48]         ; 004f15e5
    LEA EBX,[ESP + 0x14]                ; 004f15e9
    LEA EAX,[EBP + 0x34]                ; 004f15ed
    FSTP float ptr [ESP + 0x14]         ; 004f15f0
    FLD float ptr [EBX]                 ; 004f15f4
    FLD float ptr [0x006004e4]          ; 004f15f6 | DAT_006004e4
    FMULP                               ; 004f15fc
    FLD float ptr [0x006004e0]          ; 004f15fe | DAT_006004e0
    FSUBP                               ; 004f1604
    FISTP dword ptr [EAX]               ; 004f1606
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f1608
    FLD float ptr [EAX + 0x34]          ; 004f160c
    FSUB float ptr [EDI + 0x34]         ; 004f160f
    FMUL float ptr [ESP + 0x44]         ; 004f1612
    LEA EBX,[ESP + 0x34]                ; 004f1616
    FADD float ptr [EDI + 0x34]         ; 004f161a
    LEA EAX,[EBP + 0x30]                ; 004f161d
    FSTP float ptr [ESP + 0x34]         ; 004f1620
    FLD float ptr [EBX]                 ; 004f1624
    FLD float ptr [0x006004e4]          ; 004f1626 | DAT_006004e4
    FMULP                               ; 004f162c
    FLD float ptr [0x006004e0]          ; 004f162e | DAT_006004e0
    FSUBP                               ; 004f1634
    FISTP dword ptr [EAX]               ; 004f1636
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f1638
    FLD float ptr [EAX + 0x30]          ; 004f163c
    FSUB float ptr [EDI + 0x30]         ; 004f163f
    FMUL float ptr [ESP + 0x48]         ; 004f1642
    LEA EBX,[ESP + 0x18]                ; 004f1646
    LEA EAX,[EBP + 0x4c]                ; 004f164a
    FSTP float ptr [ESP + 0x18]         ; 004f164d
    FLD float ptr [EBX]                 ; 004f1651
    FLD float ptr [0x006004e4]          ; 004f1653 | DAT_006004e4
    FMULP                               ; 004f1659
    FLD float ptr [0x006004e0]          ; 004f165b | DAT_006004e0
    FSUBP                               ; 004f1661
    FISTP dword ptr [EAX]               ; 004f1663
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f1665
    FLD float ptr [EAX + 0x30]          ; 004f1669
    FSUB float ptr [EDI + 0x30]         ; 004f166c
    FMUL float ptr [ESP + 0x44]         ; 004f166f
    LEA EBX,[ESP + 0x38]                ; 004f1673
    FADD float ptr [EDI + 0x30]         ; 004f1677
    LEA EAX,[EBP + 0x48]                ; 004f167a
    FSTP float ptr [ESP + 0x38]         ; 004f167d
    FLD float ptr [EBX]                 ; 004f1681
    FLD float ptr [0x006004e4]          ; 004f1683 | DAT_006004e4
    FMULP                               ; 004f1689
    FLD float ptr [0x006004e0]          ; 004f168b | DAT_006004e0
    FSUBP                               ; 004f1691
    FISTP dword ptr [EAX]               ; 004f1693
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f1695
    FLD float ptr [EAX + 0xc]           ; 004f1699
    FSUB float ptr [EDI + 0xc]          ; 004f169c
    FMUL float ptr [ESP + 0x48]         ; 004f169f
    LEA EBX,[ESP + 0x1c]                ; 004f16a3
    LEA EAX,[EBP + 0x2c]                ; 004f16a7
    FSTP float ptr [ESP + 0x1c]         ; 004f16aa
    FLD float ptr [EBX]                 ; 004f16ae
    FLD float ptr [0x006004f0]          ; 004f16b0 | DAT_006004f0
    FMULP                               ; 004f16b6
    FLD float ptr [0x006004e0]          ; 004f16b8 | DAT_006004e0
    FSUBP                               ; 004f16be
    FISTP dword ptr [EAX]               ; 004f16c0 | DAT_01d80874
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f16c2
    FLD float ptr [EAX + 0xc]           ; 004f16c6
    FSUB float ptr [EDI + 0xc]          ; 004f16c9
    FMUL float ptr [ESP + 0x44]         ; 004f16cc
    LEA EBX,[ESP + 0x3c]                ; 004f16d0
    FADD float ptr [EDI + 0xc]          ; 004f16d4
    LEA EAX,[EBP + 0x28]                ; 004f16d7
    FSTP float ptr [ESP + 0x3c]         ; 004f16da
    FLD float ptr [EBX]                 ; 004f16de
    FLD float ptr [0x006004f0]          ; 004f16e0 | DAT_006004f0
    FMULP                               ; 004f16e6
    FLD float ptr [0x006004e0]          ; 004f16e8 | DAT_006004e0
    FSUBP                               ; 004f16ee
    FISTP dword ptr [EAX]               ; 004f16f0 | DAT_01d80870
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f16f2
    FLD float ptr [EAX + 0x28]          ; 004f16f6
    FSUB float ptr [EDI + 0x28]         ; 004f16f9
    FMUL float ptr [ESP + 0x48]         ; 004f16fc
    LEA EBX,[ESP + 0x4c]                ; 004f1700
    LEA EAX,[EBP + 0x3c]                ; 004f1704
    FSTP float ptr [ESP + 0x4c]         ; 004f1707
    FLD float ptr [EBX]                 ; 004f170b
    FLD float ptr [0x006004e4]          ; 004f170d | DAT_006004e4
    FMULP                               ; 004f1713
    FLD float ptr [0x006004e0]          ; 004f1715 | DAT_006004e0
    FSUBP                               ; 004f171b
    FISTP dword ptr [EAX]               ; 004f171d
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f171f
    FLD float ptr [EAX + 0x28]          ; 004f1723
    FSUB float ptr [EDI + 0x28]         ; 004f1726
    FMUL float ptr [ESP + 0x44]         ; 004f1729
    LEA EBX,[ESP + 0x40]                ; 004f172d
    FADD float ptr [EDI + 0x28]         ; 004f1731
    LEA EAX,[EBP + 0x38]                ; 004f1734
    FSTP float ptr [ESP + 0x40]         ; 004f1737
    FLD float ptr [EBX]                 ; 004f173b
    FLD float ptr [0x006004e4]          ; 004f173d | DAT_006004e4
    FMULP                               ; 004f1743
    FLD float ptr [0x006004e0]          ; 004f1745 | DAT_006004e0
    FSUBP                               ; 004f174b
    FISTP dword ptr [EAX]               ; 004f174d
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f174f
    FLD float ptr [EAX + 0x24]          ; 004f1753
    FSUB float ptr [EDI + 0x24]         ; 004f1756
    FMUL float ptr [ESP + 0x48]         ; 004f1759
    LEA EBX,[ESP + 0x20]                ; 004f175d
    LEA EAX,[EBP + 0x44]                ; 004f1761
    FSTP float ptr [ESP + 0x20]         ; 004f1764
    FLD float ptr [EBX]                 ; 004f1768
    FLD float ptr [0x006004e4]          ; 004f176a | DAT_006004e4
    FMULP                               ; 004f1770
    FLD float ptr [0x006004e0]          ; 004f1772 | DAT_006004e0
    FSUBP                               ; 004f1778
    FISTP dword ptr [EAX]               ; 004f177a
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f177c
    FLD float ptr [EAX + 0x24]          ; 004f1780
    FSUB float ptr [EDI + 0x24]         ; 004f1783
    FMUL float ptr [ESP + 0x44]         ; 004f1786
    MOV EBX,ESP                         ; 004f178a
    FADD float ptr [EDI + 0x24]         ; 004f178c
    LEA EAX,[EBP + 0x40]                ; 004f178f
    FSTP float ptr [ESP]                ; 004f1792
    FLD float ptr [EBX]                 ; 004f1795
    FLD float ptr [0x006004e4]          ; 004f1797 | DAT_006004e4
    FMULP                               ; 004f179d
    FLD float ptr [0x006004e0]          ; 004f179f | DAT_006004e0
    FSUBP                               ; 004f17a5
    FISTP dword ptr [EAX]               ; 004f17a7
    INC dword ptr [0x01d80844]          ; 004f17a9 | DAT_01d80844
    ADD ESP,0x50                        ; 004f17af
        ;   Label: LAB_004f17af
    POP EBP                             ; 004f17b2
    POP EDI                             ; 004f17b3
    POP ESI                             ; 004f17b4
    POP EBX                             ; 004f17b5
    RET                                 ; 004f17b6
    FLD1                                ; 004f17b7
        ;   Label: LAB_004f17b7
    FDIV float ptr [ESP + 0x48]         ; 004f17b9
    FSTP float ptr [ESP + 0x48]         ; 004f17bd
    JMP 0x004f144f                      ; 004f17c1
        ;   XREF to: 004f144f (UNCONDITIONAL_JUMP)  ; LAB_004f144f

