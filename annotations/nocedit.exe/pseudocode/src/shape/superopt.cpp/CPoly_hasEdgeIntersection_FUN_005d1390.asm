; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_CPoly_hasEdgeIntersection_FUN_005d1390(CPoly *this_ptr,CPoly *other)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   other
; Local Variables:
; undefined8       Stack[-0x1d0]:8  local_1d0
; undefined8       Stack[-0x1c8]:8  local_1c8
; undefined8       Stack[-0x1c0]:8  local_1c0
; undefined8       Stack[-0x1b8]:8  local_1b8
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined8       Stack[-0x1a8]:8  local_1a8
; undefined8       Stack[-0x1a0]:8  local_1a0
; undefined8       Stack[-0x198]:8  local_198
; int              Stack[-0x190]:4  local_190
; int              Stack[-0x18c]:4  local_18c
; int              Stack[-0x188]:4  local_188
; int              Stack[-0x184]:4  local_184
; undefined8       Stack[-0x180]:8  local_180
; undefined8       Stack[-0x178]:8  local_178
; undefined8       Stack[-0x170]:8  local_170
; undefined8       Stack[-0x168]:8  local_168
; undefined8       Stack[-0x160]:8  local_160
; int              Stack[-0x158]:4  local_158
; int              Stack[-0x154]:4  local_154
; undefined8       Stack[-0x150]:8  local_150
; undefined8       Stack[-0x148]:8  local_148
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
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
;
; Called Functions:
;   shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d1390
        ;   Label: shape_superopt.cpp_CPoly_hasEdgeIntersection_FUN_005d1390
    PUSH ESI                            ; 005d1391
    PUSH EDI                            ; 005d1392
    PUSH EBP                            ; 005d1393
    MOV EBP,ESP                         ; 005d1394
    SUB ESP,0x1bc                       ; 005d1396
    AND ESP,0xfffffff8                  ; 005d139c
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d139f
    MOV EDI,dword ptr [EBP + 0x18]      ; 005d13a2
    FLDZ                                ; 005d13a5
    FCOMP double ptr [EDX + 0x40]       ; 005d13a7
    FNSTSW AX                           ; 005d13aa
    SAHF                                ; 005d13ac
    JBE 0x005d1a0a                      ; 005d13ad
        ;   XREF to: 005d1a0a (CONDITIONAL_JUMP)  ; LAB_005d1a0a
    FLD double ptr [EDX + 0x40]         ; 005d13b3
    FCHS                                ; 005d13b6
    FSTP double ptr [ESP]               ; 005d13b8
    MOV EAX,dword ptr [ESP]             ; 005d13bb
        ;   Label: LAB_005d13bb
    MOV dword ptr [ESP + 0x18],EAX      ; 005d13be
    MOV EAX,dword ptr [ESP + 0x4]       ; 005d13c2
    FLDZ                                ; 005d13c6
    MOV dword ptr [ESP + 0x1c],EAX      ; 005d13c8
    FCOMP double ptr [EDX + 0x48]       ; 005d13cc
    FNSTSW AX                           ; 005d13cf
    SAHF                                ; 005d13d1
    JA 0x005d1a1c                       ; 005d13d2
        ;   XREF to: 005d1a1c (CONDITIONAL_JUMP)  ; LAB_005d1a1c
    MOV EAX,dword ptr [EDX + 0x48]      ; 005d13d8
    MOV dword ptr [ESP + 0x8],EAX       ; 005d13db
    MOV EAX,dword ptr [EDX + 0x4c]      ; 005d13df
    MOV dword ptr [ESP + 0xc],EAX       ; 005d13e2
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d13e6
        ;   Label: LAB_005d13e6
    MOV dword ptr [ESP + 0x28],EAX      ; 005d13ea
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d13ee
    FLDZ                                ; 005d13f2
    MOV dword ptr [ESP + 0x2c],EAX      ; 005d13f4
    FCOMP double ptr [EDX + 0x50]       ; 005d13f8
    FNSTSW AX                           ; 005d13fb
    SAHF                                ; 005d13fd
    JA 0x005d1a2a                       ; 005d13fe
        ;   XREF to: 005d1a2a (CONDITIONAL_JUMP)  ; LAB_005d1a2a
    MOV EAX,dword ptr [EDX + 0x50]      ; 005d1404
    MOV dword ptr [ESP + 0x20],EAX      ; 005d1407
    MOV EAX,dword ptr [EDX + 0x54]      ; 005d140b
    MOV dword ptr [ESP + 0x24],EAX      ; 005d140e
    MOV EAX,dword ptr [ESP + 0x20]      ; 005d1412
        ;   Label: LAB_005d1412
    MOV dword ptr [ESP + 0x10],EAX      ; 005d1416
    MOV EAX,dword ptr [ESP + 0x24]      ; 005d141a
    MOV dword ptr [ESP + 0x14],EAX      ; 005d141e
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d1422
    SHL EAX,0x3                         ; 005d1425
    MOV ECX,dword ptr [EDX]             ; 005d1428
    MOV EBX,EAX                         ; 005d142a
    SHL EAX,0x3                         ; 005d142c
    MOV ECX,dword ptr [ECX + 0x4]       ; 005d142f
    SUB EAX,EBX                         ; 005d1432
    LEA EBX,[ECX + EAX*0x1]             ; 005d1434
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d1437
    SHL EAX,0x3                         ; 005d143a
    MOV dword ptr [ESP + 0x1b4],EBX     ; 005d143d
    MOV EBX,EAX                         ; 005d1444
    SHL EAX,0x3                         ; 005d1446
    SUB EAX,EBX                         ; 005d1449
    LEA EBX,[ECX + EAX*0x1]             ; 005d144b
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d144e
    SHL EAX,0x3                         ; 005d1451
    MOV EDX,EAX                         ; 005d1454
    SHL EAX,0x3                         ; 005d1456
    SUB EAX,EDX                         ; 005d1459
    LEA ESI,[ECX + EAX*0x1]             ; 005d145b
    MOV EAX,dword ptr [EDI + 0x4]       ; 005d145e
    SHL EAX,0x3                         ; 005d1461
    MOV ECX,dword ptr [EDI]             ; 005d1464
    MOV EDX,EAX                         ; 005d1466
    SHL EAX,0x3                         ; 005d1468
    MOV ECX,dword ptr [ECX + 0x4]       ; 005d146b
    SUB EAX,EDX                         ; 005d146e
    MOV dword ptr [ESP + 0x1b8],EBX     ; 005d1470
    LEA EBX,[ECX + EAX*0x1]             ; 005d1477
    MOV EAX,dword ptr [EDI + 0x8]       ; 005d147a
    SHL EAX,0x3                         ; 005d147d
    MOV EDX,EAX                         ; 005d1480
    SHL EAX,0x3                         ; 005d1482
    SUB EAX,EDX                         ; 005d1485
    LEA EDX,[ECX + EAX*0x1]             ; 005d1487
    MOV EAX,dword ptr [EDI + 0xc]       ; 005d148a
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005d148d
    SHL EAX,0x3                         ; 005d1494
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005d1497
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 005d149e
    SHL EAX,0x3                         ; 005d14a5
    SUB EAX,EDI                         ; 005d14a8
    FLD double ptr [ESP + 0x18]         ; 005d14aa
    ADD ECX,EAX                         ; 005d14ae
    FCOMP double ptr [ESP + 0x28]       ; 005d14b0
    FNSTSW AX                           ; 005d14b4
    SAHF                                ; 005d14b6
    JC 0x005d1a38                       ; 005d14b7
        ;   XREF to: 005d1a38 (CONDITIONAL_JUMP)  ; LAB_005d1a38
    FLD double ptr [ESP + 0x18]         ; 005d14bd
    FCOMP double ptr [ESP + 0x20]       ; 005d14c1
    FNSTSW AX                           ; 005d14c5
    SAHF                                ; 005d14c7
    JC 0x005d1a38                       ; 005d14c8
        ;   XREF to: 005d1a38 (CONDITIONAL_JUMP)  ; LAB_005d1a38
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d14ce
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d14d5
    MOV dword ptr [ESP + 0x128],EAX     ; 005d14d8
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d14df
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d14e6
    MOV dword ptr [ESP + 0x12c],EAX     ; 005d14e9
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d14f0
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d14f7
    MOV dword ptr [ESP + 0x130],EAX     ; 005d14fa
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d1501
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d1508
    MOV dword ptr [ESP + 0x134],EAX     ; 005d150b
    MOV EAX,dword ptr [ESP + 0x128]     ; 005d1512
    MOV dword ptr [ESP + 0x50],EAX      ; 005d1519
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005d151d
    MOV dword ptr [ESP + 0x54],EAX      ; 005d1524
    MOV EAX,dword ptr [ESP + 0x130]     ; 005d1528
    MOV dword ptr [ESP + 0x58],EAX      ; 005d152f
    MOV EAX,dword ptr [ESP + 0x134]     ; 005d1533
    MOV dword ptr [ESP + 0x5c],EAX      ; 005d153a
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d153e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d1545
    MOV dword ptr [ESP + 0x138],EAX     ; 005d1548
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d154f
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d1556
    MOV dword ptr [ESP + 0x13c],EAX     ; 005d1559
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d1560
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d1567
    MOV dword ptr [ESP + 0xd0],EAX      ; 005d156a
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d1571
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d1578
    MOV dword ptr [ESP + 0xd4],EAX      ; 005d157b
    MOV EAX,dword ptr [ESP + 0x138]     ; 005d1582
    MOV dword ptr [ESP + 0x30],EAX      ; 005d1589
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005d158d
    MOV dword ptr [ESP + 0x34],EAX      ; 005d1594
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005d1598
    MOV dword ptr [ESP + 0x38],EAX      ; 005d159f
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005d15a3
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d15aa
    MOV EAX,dword ptr [ESI + 0x8]       ; 005d15ae
    MOV dword ptr [ESP + 0xd8],EAX      ; 005d15b1
    MOV EAX,dword ptr [ESI + 0xc]       ; 005d15b8
    MOV dword ptr [ESP + 0xdc],EAX      ; 005d15bb
    MOV EAX,dword ptr [ESI + 0x10]      ; 005d15c2
    MOV dword ptr [ESP + 0xe0],EAX      ; 005d15c5
    MOV EAX,dword ptr [ESI + 0x14]      ; 005d15cc
    MOV dword ptr [ESP + 0xe4],EAX      ; 005d15cf
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005d15d6
    MOV dword ptr [ESP + 0x40],EAX      ; 005d15dd
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005d15e1
    MOV dword ptr [ESP + 0x44],EAX      ; 005d15e8
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005d15ec
    MOV dword ptr [ESP + 0x48],EAX      ; 005d15f3
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005d15f7
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d15fe
    MOV EAX,dword ptr [EBX + 0x8]       ; 005d1602
    MOV dword ptr [ESP + 0xe8],EAX      ; 005d1605
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d160c
    MOV dword ptr [ESP + 0xec],EAX      ; 005d160f
    MOV EAX,dword ptr [EBX + 0x10]      ; 005d1616
    MOV dword ptr [ESP + 0xf0],EAX      ; 005d1619
    MOV EAX,dword ptr [EBX + 0x14]      ; 005d1620
    MOV dword ptr [ESP + 0xf4],EAX      ; 005d1623
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005d162a
    MOV dword ptr [ESP + 0x80],EAX      ; 005d1631
    MOV EAX,dword ptr [ESP + 0xec]      ; 005d1638
    MOV dword ptr [ESP + 0x84],EAX      ; 005d163f
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005d1646
    MOV dword ptr [ESP + 0x88],EAX      ; 005d164d
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005d1654
    MOV dword ptr [ESP + 0x8c],EAX      ; 005d165b
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d1662
    MOV dword ptr [ESP + 0xf8],EAX      ; 005d1665
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d166c
    MOV dword ptr [ESP + 0xfc],EAX      ; 005d166f
    MOV EAX,dword ptr [EDX + 0x10]      ; 005d1676
    MOV dword ptr [ESP + 0x100],EAX     ; 005d1679
    MOV EAX,dword ptr [EDX + 0x14]      ; 005d1680
    MOV dword ptr [ESP + 0x104],EAX     ; 005d1683
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005d168a
    MOV dword ptr [ESP + 0x60],EAX      ; 005d1691
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005d1695
    MOV dword ptr [ESP + 0x64],EAX      ; 005d169c
    MOV EAX,dword ptr [ESP + 0x100]     ; 005d16a0
    MOV dword ptr [ESP + 0x68],EAX      ; 005d16a7
    MOV EAX,dword ptr [ESP + 0x104]     ; 005d16ab
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d16b2
    MOV EAX,dword ptr [ECX + 0x8]       ; 005d16b6
    MOV dword ptr [ESP + 0x108],EAX     ; 005d16b9
    MOV EAX,dword ptr [ECX + 0xc]       ; 005d16c0
    MOV dword ptr [ESP + 0x10c],EAX     ; 005d16c3
    MOV EAX,dword ptr [ECX + 0x10]      ; 005d16ca
    MOV dword ptr [ESP + 0x110],EAX     ; 005d16cd
    MOV EAX,dword ptr [ECX + 0x14]      ; 005d16d4
    MOV dword ptr [ESP + 0x114],EAX     ; 005d16d7
    MOV EAX,dword ptr [ESP + 0x108]     ; 005d16de
    MOV dword ptr [ESP + 0x70],EAX      ; 005d16e5
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005d16e9
    MOV dword ptr [ESP + 0x74],EAX      ; 005d16f0
    MOV EAX,dword ptr [ESP + 0x110]     ; 005d16f4
    MOV dword ptr [ESP + 0x78],EAX      ; 005d16fb
    MOV EAX,dword ptr [ESP + 0x114]     ; 005d16ff
    MOV dword ptr [ESP + 0x7c],EAX      ; 005d1706
        ;   Label: LAB_005d1706
    FLD double ptr [ESP + 0x50]         ; 005d170a
    FCOMP double ptr [ESP + 0x60]       ; 005d170e
    FNSTSW AX                           ; 005d1712
    SAHF                                ; 005d1714
    JZ 0x005d1ec8                       ; 005d1715
        ;   XREF to: 005d1ec8 (CONDITIONAL_JUMP)  ; LAB_005d1ec8
    FLD double ptr [ESP + 0x30]         ; 005d171b
        ;   Label: LAB_005d171b
    FCOMP double ptr [ESP + 0x80]       ; 005d171f
    FNSTSW AX                           ; 005d1726
    SAHF                                ; 005d1728
    JNZ 0x005d173b                      ; 005d1729
        ;   XREF to: 005d173b (CONDITIONAL_JUMP)  ; LAB_005d173b
    FLD double ptr [ESP + 0x38]         ; 005d172b
    FCOMP double ptr [ESP + 0x88]       ; 005d172f
    FNSTSW AX                           ; 005d1736
    SAHF                                ; 005d1738
    JZ 0x005d1762                       ; 005d1739
        ;   XREF to: 005d1762 (CONDITIONAL_JUMP)  ; LAB_005d1762
    LEA EAX,[ESP + 0x60]                ; 005d173b
        ;   Label: LAB_005d173b
    PUSH EAX                            ; 005d173f
    LEA EAX,[ESP + 0x84]                ; 005d1740
    PUSH EAX                            ; 005d1747
    LEA EAX,[ESP + 0x38]                ; 005d1748
    PUSH EAX                            ; 005d174c
    LEA EAX,[ESP + 0x5c]                ; 005d174d
    PUSH EAX                            ; 005d1751
    CALL shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0 ; 005d1752
        ;   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d * point_a, CVector2d * point_b, CVector2d * point_c, CVector2d * point_d)
    ADD ESP,0x10                        ; 005d1757
    TEST EAX,EAX                        ; 005d175a
    JNZ 0x005d19fe                      ; 005d175c
        ;   XREF to: 005d19fe (CONDITIONAL_JUMP)  ; LAB_005d19fe
    FLD double ptr [ESP + 0x50]         ; 005d1762
        ;   Label: LAB_005d1762
    FCOMP double ptr [ESP + 0x70]       ; 005d1766
    FNSTSW AX                           ; 005d176a
    SAHF                                ; 005d176c
    JZ 0x005d1ede                       ; 005d176d
        ;   XREF to: 005d1ede (CONDITIONAL_JUMP)  ; LAB_005d1ede
    FLD double ptr [ESP + 0x30]         ; 005d1773
        ;   Label: LAB_005d1773
    FCOMP double ptr [ESP + 0x60]       ; 005d1777
    FNSTSW AX                           ; 005d177b
    SAHF                                ; 005d177d
    JNZ 0x005d178d                      ; 005d177e
        ;   XREF to: 005d178d (CONDITIONAL_JUMP)  ; LAB_005d178d
    FLD double ptr [ESP + 0x38]         ; 005d1780
    FCOMP double ptr [ESP + 0x68]       ; 005d1784
    FNSTSW AX                           ; 005d1788
    SAHF                                ; 005d178a
    JZ 0x005d17b1                       ; 005d178b
        ;   XREF to: 005d17b1 (CONDITIONAL_JUMP)  ; LAB_005d17b1
    LEA EAX,[ESP + 0x70]                ; 005d178d
        ;   Label: LAB_005d178d
    PUSH EAX                            ; 005d1791
    LEA EAX,[ESP + 0x64]                ; 005d1792
    PUSH EAX                            ; 005d1796
    LEA EAX,[ESP + 0x38]                ; 005d1797
    PUSH EAX                            ; 005d179b
    LEA EAX,[ESP + 0x5c]                ; 005d179c
    PUSH EAX                            ; 005d17a0
    CALL shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0 ; 005d17a1
        ;   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d * point_a, CVector2d * point_b, CVector2d * point_c, CVector2d * point_d)
    ADD ESP,0x10                        ; 005d17a6
    TEST EAX,EAX                        ; 005d17a9
    JNZ 0x005d19fe                      ; 005d17ab
        ;   XREF to: 005d19fe (CONDITIONAL_JUMP)  ; LAB_005d19fe
    FLD double ptr [ESP + 0x50]         ; 005d17b1
        ;   Label: LAB_005d17b1
    FCOMP double ptr [ESP + 0x80]       ; 005d17b5
    FNSTSW AX                           ; 005d17bc
    SAHF                                ; 005d17be
    JZ 0x005d1ef4                       ; 005d17bf
        ;   XREF to: 005d1ef4 (CONDITIONAL_JUMP)  ; LAB_005d1ef4
    FLD double ptr [ESP + 0x30]         ; 005d17c5
        ;   Label: LAB_005d17c5
    FCOMP double ptr [ESP + 0x70]       ; 005d17c9
    FNSTSW AX                           ; 005d17cd
    SAHF                                ; 005d17cf
    JNZ 0x005d17df                      ; 005d17d0
        ;   XREF to: 005d17df (CONDITIONAL_JUMP)  ; LAB_005d17df
    FLD double ptr [ESP + 0x38]         ; 005d17d2
    FCOMP double ptr [ESP + 0x78]       ; 005d17d6
    FNSTSW AX                           ; 005d17da
    SAHF                                ; 005d17dc
    JZ 0x005d1806                       ; 005d17dd
        ;   XREF to: 005d1806 (CONDITIONAL_JUMP)  ; LAB_005d1806
    LEA EAX,[ESP + 0x80]                ; 005d17df
        ;   Label: LAB_005d17df
    PUSH EAX                            ; 005d17e6
    LEA EAX,[ESP + 0x74]                ; 005d17e7
    PUSH EAX                            ; 005d17eb
    LEA EAX,[ESP + 0x38]                ; 005d17ec
    PUSH EAX                            ; 005d17f0
    LEA EAX,[ESP + 0x5c]                ; 005d17f1
    PUSH EAX                            ; 005d17f5
    CALL shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0 ; 005d17f6
        ;   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d * point_a, CVector2d * point_b, CVector2d * point_c, CVector2d * point_d)
    ADD ESP,0x10                        ; 005d17fb
    TEST EAX,EAX                        ; 005d17fe
    JNZ 0x005d19fe                      ; 005d1800
        ;   XREF to: 005d19fe (CONDITIONAL_JUMP)  ; LAB_005d19fe
    FLD double ptr [ESP + 0x30]         ; 005d1806
        ;   Label: LAB_005d1806
    FCOMP double ptr [ESP + 0x70]       ; 005d180a
    FNSTSW AX                           ; 005d180e
    SAHF                                ; 005d1810
    JZ 0x005d1f0d                       ; 005d1811
        ;   XREF to: 005d1f0d (CONDITIONAL_JUMP)  ; LAB_005d1f0d
    FLD double ptr [ESP + 0x40]         ; 005d1817
        ;   Label: LAB_005d1817
    FCOMP double ptr [ESP + 0x60]       ; 005d181b
    FNSTSW AX                           ; 005d181f
    SAHF                                ; 005d1821
    JNZ 0x005d1831                      ; 005d1822
        ;   XREF to: 005d1831 (CONDITIONAL_JUMP)  ; LAB_005d1831
    FLD double ptr [ESP + 0x48]         ; 005d1824
    FCOMP double ptr [ESP + 0x68]       ; 005d1828
    FNSTSW AX                           ; 005d182c
    SAHF                                ; 005d182e
    JZ 0x005d1855                       ; 005d182f
        ;   XREF to: 005d1855 (CONDITIONAL_JUMP)  ; LAB_005d1855
    LEA EAX,[ESP + 0x70]                ; 005d1831
        ;   Label: LAB_005d1831
    PUSH EAX                            ; 005d1835
    LEA EAX,[ESP + 0x64]                ; 005d1836
    PUSH EAX                            ; 005d183a
    LEA EAX,[ESP + 0x48]                ; 005d183b
    PUSH EAX                            ; 005d183f
    LEA EAX,[ESP + 0x3c]                ; 005d1840
    PUSH EAX                            ; 005d1844
    CALL shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0 ; 005d1845
        ;   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d * point_a, CVector2d * point_b, CVector2d * point_c, CVector2d * point_d)
    ADD ESP,0x10                        ; 005d184a
    TEST EAX,EAX                        ; 005d184d
    JNZ 0x005d19fe                      ; 005d184f
        ;   XREF to: 005d19fe (CONDITIONAL_JUMP)  ; LAB_005d19fe
    FLD double ptr [ESP + 0x30]         ; 005d1855
        ;   Label: LAB_005d1855
    FCOMP double ptr [ESP + 0x80]       ; 005d1859
    FNSTSW AX                           ; 005d1860
    SAHF                                ; 005d1862
    JZ 0x005d1f23                       ; 005d1863
        ;   XREF to: 005d1f23 (CONDITIONAL_JUMP)  ; LAB_005d1f23
    FLD double ptr [ESP + 0x40]         ; 005d1869
        ;   Label: LAB_005d1869
    FCOMP double ptr [ESP + 0x70]       ; 005d186d
    FNSTSW AX                           ; 005d1871
    SAHF                                ; 005d1873
    JNZ 0x005d1883                      ; 005d1874
        ;   XREF to: 005d1883 (CONDITIONAL_JUMP)  ; LAB_005d1883
    FLD double ptr [ESP + 0x48]         ; 005d1876
    FCOMP double ptr [ESP + 0x78]       ; 005d187a
    FNSTSW AX                           ; 005d187e
    SAHF                                ; 005d1880
    JZ 0x005d18aa                       ; 005d1881
        ;   XREF to: 005d18aa (CONDITIONAL_JUMP)  ; LAB_005d18aa
    LEA EAX,[ESP + 0x80]                ; 005d1883
        ;   Label: LAB_005d1883
    PUSH EAX                            ; 005d188a
    LEA EAX,[ESP + 0x74]                ; 005d188b
    PUSH EAX                            ; 005d188f
    LEA EAX,[ESP + 0x48]                ; 005d1890
    PUSH EAX                            ; 005d1894
    LEA EAX,[ESP + 0x3c]                ; 005d1895
    PUSH EAX                            ; 005d1899
    CALL shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0 ; 005d189a
        ;   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d * point_a, CVector2d * point_b, CVector2d * point_c, CVector2d * point_d)
    ADD ESP,0x10                        ; 005d189f
    TEST EAX,EAX                        ; 005d18a2
    JNZ 0x005d19fe                      ; 005d18a4
        ;   XREF to: 005d19fe (CONDITIONAL_JUMP)  ; LAB_005d19fe
    FLD double ptr [ESP + 0x30]         ; 005d18aa
        ;   Label: LAB_005d18aa
    FCOMP double ptr [ESP + 0x60]       ; 005d18ae
    FNSTSW AX                           ; 005d18b2
    SAHF                                ; 005d18b4
    JZ 0x005d1f3c                       ; 005d18b5
        ;   XREF to: 005d1f3c (CONDITIONAL_JUMP)  ; LAB_005d1f3c
    FLD double ptr [ESP + 0x40]         ; 005d18bb
        ;   Label: LAB_005d18bb
    FCOMP double ptr [ESP + 0x80]       ; 005d18bf
    FNSTSW AX                           ; 005d18c6
    SAHF                                ; 005d18c8
    JNZ 0x005d18db                      ; 005d18c9
        ;   XREF to: 005d18db (CONDITIONAL_JUMP)  ; LAB_005d18db
    FLD double ptr [ESP + 0x48]         ; 005d18cb
    FCOMP double ptr [ESP + 0x88]       ; 005d18cf
    FNSTSW AX                           ; 005d18d6
    SAHF                                ; 005d18d8
    JZ 0x005d1902                       ; 005d18d9
        ;   XREF to: 005d1902 (CONDITIONAL_JUMP)  ; LAB_005d1902
    LEA EAX,[ESP + 0x60]                ; 005d18db
        ;   Label: LAB_005d18db
    PUSH EAX                            ; 005d18df
    LEA EAX,[ESP + 0x84]                ; 005d18e0
    PUSH EAX                            ; 005d18e7
    LEA EAX,[ESP + 0x48]                ; 005d18e8
    PUSH EAX                            ; 005d18ec
    LEA EAX,[ESP + 0x3c]                ; 005d18ed
    PUSH EAX                            ; 005d18f1
    CALL shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0 ; 005d18f2
        ;   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d * point_a, CVector2d * point_b, CVector2d * point_c, CVector2d * point_d)
    ADD ESP,0x10                        ; 005d18f7
    TEST EAX,EAX                        ; 005d18fa
    JNZ 0x005d19fe                      ; 005d18fc
        ;   XREF to: 005d19fe (CONDITIONAL_JUMP)  ; LAB_005d19fe
    FLD double ptr [ESP + 0x40]         ; 005d1902
        ;   Label: LAB_005d1902
    FCOMP double ptr [ESP + 0x80]       ; 005d1906
    FNSTSW AX                           ; 005d190d
    SAHF                                ; 005d190f
    JZ 0x005d1f52                       ; 005d1910
        ;   XREF to: 005d1f52 (CONDITIONAL_JUMP)  ; LAB_005d1f52
    FLD double ptr [ESP + 0x50]         ; 005d1916
        ;   Label: LAB_005d1916
    FCOMP double ptr [ESP + 0x70]       ; 005d191a
    FNSTSW AX                           ; 005d191e
    SAHF                                ; 005d1920
    JNZ 0x005d1930                      ; 005d1921
        ;   XREF to: 005d1930 (CONDITIONAL_JUMP)  ; LAB_005d1930
    FLD double ptr [ESP + 0x58]         ; 005d1923
    FCOMP double ptr [ESP + 0x78]       ; 005d1927
    FNSTSW AX                           ; 005d192b
    SAHF                                ; 005d192d
    JZ 0x005d1957                       ; 005d192e
        ;   XREF to: 005d1957 (CONDITIONAL_JUMP)  ; LAB_005d1957
    LEA EAX,[ESP + 0x80]                ; 005d1930
        ;   Label: LAB_005d1930
    PUSH EAX                            ; 005d1937
    LEA EAX,[ESP + 0x74]                ; 005d1938
    PUSH EAX                            ; 005d193c
    LEA EAX,[ESP + 0x58]                ; 005d193d
    PUSH EAX                            ; 005d1941
    LEA EAX,[ESP + 0x4c]                ; 005d1942
    PUSH EAX                            ; 005d1946
    CALL shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0 ; 005d1947
        ;   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d * point_a, CVector2d * point_b, CVector2d * point_c, CVector2d * point_d)
    ADD ESP,0x10                        ; 005d194c
    TEST EAX,EAX                        ; 005d194f
    JNZ 0x005d19fe                      ; 005d1951
        ;   XREF to: 005d19fe (CONDITIONAL_JUMP)  ; LAB_005d19fe
    FLD double ptr [ESP + 0x40]         ; 005d1957
        ;   Label: LAB_005d1957
    FCOMP double ptr [ESP + 0x60]       ; 005d195b
    FNSTSW AX                           ; 005d195f
    SAHF                                ; 005d1961
    JZ 0x005d1f6b                       ; 005d1962
        ;   XREF to: 005d1f6b (CONDITIONAL_JUMP)  ; LAB_005d1f6b
    FLD double ptr [ESP + 0x50]         ; 005d1968
        ;   Label: LAB_005d1968
    FCOMP double ptr [ESP + 0x80]       ; 005d196c
    FNSTSW AX                           ; 005d1973
    SAHF                                ; 005d1975
    JNZ 0x005d1988                      ; 005d1976
        ;   XREF to: 005d1988 (CONDITIONAL_JUMP)  ; LAB_005d1988
    FLD double ptr [ESP + 0x58]         ; 005d1978
    FCOMP double ptr [ESP + 0x88]       ; 005d197c
    FNSTSW AX                           ; 005d1983
    SAHF                                ; 005d1985
    JZ 0x005d19ab                       ; 005d1986
        ;   XREF to: 005d19ab (CONDITIONAL_JUMP)  ; LAB_005d19ab
    LEA EAX,[ESP + 0x60]                ; 005d1988
        ;   Label: LAB_005d1988
    PUSH EAX                            ; 005d198c
    LEA EAX,[ESP + 0x84]                ; 005d198d
    PUSH EAX                            ; 005d1994
    LEA EAX,[ESP + 0x58]                ; 005d1995
    PUSH EAX                            ; 005d1999
    LEA EAX,[ESP + 0x4c]                ; 005d199a
    PUSH EAX                            ; 005d199e
    CALL shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0 ; 005d199f
        ;   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d * point_a, CVector2d * point_b, CVector2d * point_c, CVector2d * point_d)
    ADD ESP,0x10                        ; 005d19a4
    TEST EAX,EAX                        ; 005d19a7
    JNZ 0x005d19fe                      ; 005d19a9
        ;   XREF to: 005d19fe (CONDITIONAL_JUMP)  ; LAB_005d19fe
    FLD double ptr [ESP + 0x40]         ; 005d19ab
        ;   Label: LAB_005d19ab
    FCOMP double ptr [ESP + 0x70]       ; 005d19af
    FNSTSW AX                           ; 005d19b3
    SAHF                                ; 005d19b5
    JZ 0x005d1f81                       ; 005d19b6
        ;   XREF to: 005d1f81 (CONDITIONAL_JUMP)  ; LAB_005d1f81
    FLD double ptr [ESP + 0x50]         ; 005d19bc
        ;   Label: LAB_005d19bc
    FCOMP double ptr [ESP + 0x60]       ; 005d19c0
    FNSTSW AX                           ; 005d19c4
    SAHF                                ; 005d19c6
    JNZ 0x005d19da                      ; 005d19c7
        ;   XREF to: 005d19da (CONDITIONAL_JUMP)  ; LAB_005d19da
    FLD double ptr [ESP + 0x58]         ; 005d19c9
    FCOMP double ptr [ESP + 0x68]       ; 005d19cd
    FNSTSW AX                           ; 005d19d1
    SAHF                                ; 005d19d3
    JZ 0x005d1f92                       ; 005d19d4
        ;   XREF to: 005d1f92 (CONDITIONAL_JUMP)  ; LAB_005d1f92
    LEA EAX,[ESP + 0x70]                ; 005d19da
        ;   Label: LAB_005d19da
    PUSH EAX                            ; 005d19de
    LEA EAX,[ESP + 0x64]                ; 005d19df
    PUSH EAX                            ; 005d19e3
    LEA EAX,[ESP + 0x58]                ; 005d19e4
    PUSH EAX                            ; 005d19e8
    LEA EAX,[ESP + 0x4c]                ; 005d19e9
    PUSH EAX                            ; 005d19ed
    CALL shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0 ; 005d19ee
        ;   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d * point_a, CVector2d * point_b, CVector2d * point_c, CVector2d * point_d)
    ADD ESP,0x10                        ; 005d19f3
    TEST EAX,EAX                        ; 005d19f6
    JZ 0x005d1f92                       ; 005d19f8
        ;   XREF to: 005d1f92 (CONDITIONAL_JUMP)  ; LAB_005d1f92
    MOV EAX,0x1                         ; 005d19fe
        ;   Label: LAB_005d19fe
    MOV ESP,EBP                         ; 005d1a03
    POP EBP                             ; 005d1a05
    POP EDI                             ; 005d1a06
    POP ESI                             ; 005d1a07
    POP EBX                             ; 005d1a08
    RET                                 ; 005d1a09
    MOV EAX,dword ptr [EDX + 0x40]      ; 005d1a0a
        ;   Label: LAB_005d1a0a
    MOV dword ptr [ESP],EAX             ; 005d1a0d
    MOV EAX,dword ptr [EDX + 0x44]      ; 005d1a10
    MOV dword ptr [ESP + 0x4],EAX       ; 005d1a13
    JMP 0x005d13bb                      ; 005d1a17
        ;   XREF to: 005d13bb (UNCONDITIONAL_JUMP)  ; LAB_005d13bb
    FLD double ptr [EDX + 0x48]         ; 005d1a1c
        ;   Label: LAB_005d1a1c
    FCHS                                ; 005d1a1f
    FSTP double ptr [ESP + 0x8]         ; 005d1a21
    JMP 0x005d13e6                      ; 005d1a25
        ;   XREF to: 005d13e6 (UNCONDITIONAL_JUMP)  ; LAB_005d13e6
    FLD double ptr [EDX + 0x50]         ; 005d1a2a
        ;   Label: LAB_005d1a2a
    FCHS                                ; 005d1a2d
    FSTP double ptr [ESP + 0x20]        ; 005d1a2f
    JMP 0x005d1412                      ; 005d1a33
        ;   XREF to: 005d1412 (UNCONDITIONAL_JUMP)  ; LAB_005d1412
    FLD double ptr [ESP + 0x28]         ; 005d1a38
        ;   Label: LAB_005d1a38
    FCOMP double ptr [ESP + 0x18]       ; 005d1a3c
    FNSTSW AX                           ; 005d1a40
    SAHF                                ; 005d1a42
    JC 0x005d1c91                       ; 005d1a43
        ;   XREF to: 005d1c91 (CONDITIONAL_JUMP)  ; LAB_005d1c91
    FLD double ptr [ESP + 0x28]         ; 005d1a49
    FCOMP double ptr [ESP + 0x10]       ; 005d1a4d
    FNSTSW AX                           ; 005d1a51
    SAHF                                ; 005d1a53
    JC 0x005d1c91                       ; 005d1a54
        ;   XREF to: 005d1c91 (CONDITIONAL_JUMP)  ; LAB_005d1c91
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d1a5a
    MOV EAX,dword ptr [EAX]             ; 005d1a61
    MOV dword ptr [ESP + 0x118],EAX     ; 005d1a63
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d1a6a
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d1a71
    MOV dword ptr [ESP + 0x11c],EAX     ; 005d1a74
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d1a7b
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d1a82
    MOV dword ptr [ESP + 0x190],EAX     ; 005d1a85
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d1a8c
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d1a93
    MOV dword ptr [ESP + 0x194],EAX     ; 005d1a96
    MOV EAX,dword ptr [ESP + 0x118]     ; 005d1a9d
    MOV dword ptr [ESP + 0x50],EAX      ; 005d1aa4
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005d1aa8
    MOV dword ptr [ESP + 0x54],EAX      ; 005d1aaf
    MOV EAX,dword ptr [ESP + 0x190]     ; 005d1ab3
    MOV dword ptr [ESP + 0x58],EAX      ; 005d1aba
    MOV EAX,dword ptr [ESP + 0x194]     ; 005d1abe
    MOV dword ptr [ESP + 0x5c],EAX      ; 005d1ac5
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d1ac9
    MOV EAX,dword ptr [EAX]             ; 005d1ad0
    MOV dword ptr [ESP + 0x188],EAX     ; 005d1ad2
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d1ad9
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d1ae0
    MOV dword ptr [ESP + 0x18c],EAX     ; 005d1ae3
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d1aea
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d1af1
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005d1af4
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d1afb
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d1b02
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005d1b05
    MOV EAX,dword ptr [ESP + 0x188]     ; 005d1b0c
    MOV dword ptr [ESP + 0x30],EAX      ; 005d1b13
    MOV EAX,dword ptr [ESP + 0x18c]     ; 005d1b17
    MOV dword ptr [ESP + 0x34],EAX      ; 005d1b1e
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 005d1b22
    MOV dword ptr [ESP + 0x38],EAX      ; 005d1b29
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 005d1b2d
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d1b34
    MOV EAX,dword ptr [ESI]             ; 005d1b38
    MOV dword ptr [ESP + 0x1a0],EAX     ; 005d1b3a
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d1b41
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005d1b44
    MOV EAX,dword ptr [ESI + 0x10]      ; 005d1b4b
    MOV dword ptr [ESP + 0x140],EAX     ; 005d1b4e
    MOV EAX,dword ptr [ESI + 0x14]      ; 005d1b55
    MOV dword ptr [ESP + 0x144],EAX     ; 005d1b58
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 005d1b5f
    MOV dword ptr [ESP + 0x40],EAX      ; 005d1b66
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 005d1b6a
    MOV dword ptr [ESP + 0x44],EAX      ; 005d1b71
    MOV EAX,dword ptr [ESP + 0x140]     ; 005d1b75
    MOV dword ptr [ESP + 0x48],EAX      ; 005d1b7c
    MOV EAX,dword ptr [ESP + 0x144]     ; 005d1b80
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d1b87
    MOV EAX,dword ptr [EBX]             ; 005d1b8b
    MOV dword ptr [ESP + 0x148],EAX     ; 005d1b8d
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d1b94
    MOV dword ptr [ESP + 0x14c],EAX     ; 005d1b97
    MOV EAX,dword ptr [EBX + 0x10]      ; 005d1b9e
    MOV dword ptr [ESP + 0xa0],EAX      ; 005d1ba1
    MOV EAX,dword ptr [EBX + 0x14]      ; 005d1ba8
    MOV dword ptr [ESP + 0xa4],EAX      ; 005d1bab
    MOV EAX,dword ptr [ESP + 0x148]     ; 005d1bb2
    MOV dword ptr [ESP + 0x80],EAX      ; 005d1bb9
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005d1bc0
    MOV dword ptr [ESP + 0x84],EAX      ; 005d1bc7
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005d1bce
    MOV dword ptr [ESP + 0x88],EAX      ; 005d1bd5
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005d1bdc
    MOV dword ptr [ESP + 0x8c],EAX      ; 005d1be3
    MOV EAX,dword ptr [EDX]             ; 005d1bea
    MOV dword ptr [ESP + 0x90],EAX      ; 005d1bec
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d1bf3
    MOV dword ptr [ESP + 0x94],EAX      ; 005d1bf6
    MOV EAX,dword ptr [EDX + 0x10]      ; 005d1bfd
    MOV dword ptr [ESP + 0xc0],EAX      ; 005d1c00
    MOV EAX,dword ptr [EDX + 0x14]      ; 005d1c07
    MOV dword ptr [ESP + 0xc4],EAX      ; 005d1c0a
    MOV EAX,dword ptr [ESP + 0x90]      ; 005d1c11
    MOV dword ptr [ESP + 0x60],EAX      ; 005d1c18
    MOV EAX,dword ptr [ESP + 0x94]      ; 005d1c1c
    MOV dword ptr [ESP + 0x64],EAX      ; 005d1c23
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005d1c27
    MOV dword ptr [ESP + 0x68],EAX      ; 005d1c2e
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005d1c32
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d1c39
    MOV EAX,dword ptr [ECX]             ; 005d1c3d
    MOV dword ptr [ESP + 0xc8],EAX      ; 005d1c3f
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d1c46
    MOV dword ptr [ESP + 0xcc],EAX      ; 005d1c49
    MOV EAX,dword ptr [ECX + 0x10]      ; 005d1c50
    MOV dword ptr [ESP + 0xa8],EAX      ; 005d1c53
    MOV EAX,dword ptr [ECX + 0x14]      ; 005d1c5a
    MOV dword ptr [ESP + 0xac],EAX      ; 005d1c5d
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005d1c64
    MOV dword ptr [ESP + 0x70],EAX      ; 005d1c6b
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005d1c6f
    MOV dword ptr [ESP + 0x74],EAX      ; 005d1c76
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005d1c7a
    MOV dword ptr [ESP + 0x78],EAX      ; 005d1c81
    MOV EAX,dword ptr [ESP + 0xac]      ; 005d1c85
    JMP 0x005d1706                      ; 005d1c8c
        ;   XREF to: 005d1706 (UNCONDITIONAL_JUMP)  ; LAB_005d1706
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d1c91
        ;   Label: LAB_005d1c91
    MOV EAX,dword ptr [EAX]             ; 005d1c98
    MOV dword ptr [ESP + 0x98],EAX      ; 005d1c9a
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d1ca1
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d1ca8
    MOV dword ptr [ESP + 0x9c],EAX      ; 005d1cab
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d1cb2
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d1cb9
    MOV dword ptr [ESP + 0xb0],EAX      ; 005d1cbc
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d1cc3
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d1cca
    MOV dword ptr [ESP + 0xb4],EAX      ; 005d1ccd
    MOV EAX,dword ptr [ESP + 0x98]      ; 005d1cd4
    MOV dword ptr [ESP + 0x50],EAX      ; 005d1cdb
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005d1cdf
    MOV dword ptr [ESP + 0x54],EAX      ; 005d1ce6
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005d1cea
    MOV dword ptr [ESP + 0x58],EAX      ; 005d1cf1
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005d1cf5
    MOV dword ptr [ESP + 0x5c],EAX      ; 005d1cfc
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d1d00
    MOV EAX,dword ptr [EAX]             ; 005d1d07
    MOV dword ptr [ESP + 0xb8],EAX      ; 005d1d09
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d1d10
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d1d17
    MOV dword ptr [ESP + 0xbc],EAX      ; 005d1d1a
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d1d21
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d1d28
    MOV dword ptr [ESP + 0x120],EAX     ; 005d1d2b
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d1d32
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d1d39
    MOV dword ptr [ESP + 0x124],EAX     ; 005d1d3c
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005d1d43
    MOV dword ptr [ESP + 0x30],EAX      ; 005d1d4a
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005d1d4e
    MOV dword ptr [ESP + 0x34],EAX      ; 005d1d55
    MOV EAX,dword ptr [ESP + 0x120]     ; 005d1d59
    MOV dword ptr [ESP + 0x38],EAX      ; 005d1d60
    MOV EAX,dword ptr [ESP + 0x124]     ; 005d1d64
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d1d6b
    MOV EAX,dword ptr [ESI]             ; 005d1d6f
    MOV dword ptr [ESP + 0x198],EAX     ; 005d1d71
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d1d78
    MOV dword ptr [ESP + 0x19c],EAX     ; 005d1d7b
    MOV EAX,dword ptr [ESI + 0x8]       ; 005d1d82
    MOV dword ptr [ESP + 0x180],EAX     ; 005d1d85
    MOV EAX,dword ptr [ESI + 0xc]       ; 005d1d8c
    MOV dword ptr [ESP + 0x184],EAX     ; 005d1d8f
    MOV EAX,dword ptr [ESP + 0x198]     ; 005d1d96
    MOV dword ptr [ESP + 0x40],EAX      ; 005d1d9d
    MOV EAX,dword ptr [ESP + 0x19c]     ; 005d1da1
    MOV dword ptr [ESP + 0x44],EAX      ; 005d1da8
    MOV EAX,dword ptr [ESP + 0x180]     ; 005d1dac
    MOV dword ptr [ESP + 0x48],EAX      ; 005d1db3
    MOV EAX,dword ptr [ESP + 0x184]     ; 005d1db7
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d1dbe
    MOV EAX,dword ptr [EBX]             ; 005d1dc2
    MOV dword ptr [ESP + 0x168],EAX     ; 005d1dc4
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d1dcb
    MOV dword ptr [ESP + 0x16c],EAX     ; 005d1dce
    MOV EAX,dword ptr [EBX + 0x8]       ; 005d1dd5
    MOV dword ptr [ESP + 0x170],EAX     ; 005d1dd8
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d1ddf
    MOV dword ptr [ESP + 0x174],EAX     ; 005d1de2
    MOV EAX,dword ptr [ESP + 0x168]     ; 005d1de9
    MOV dword ptr [ESP + 0x80],EAX      ; 005d1df0
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005d1df7
    MOV dword ptr [ESP + 0x84],EAX      ; 005d1dfe
    MOV EAX,dword ptr [ESP + 0x170]     ; 005d1e05
    MOV dword ptr [ESP + 0x88],EAX      ; 005d1e0c
    MOV EAX,dword ptr [ESP + 0x174]     ; 005d1e13
    MOV dword ptr [ESP + 0x8c],EAX      ; 005d1e1a
    MOV EAX,dword ptr [EDX]             ; 005d1e21
    MOV dword ptr [ESP + 0x178],EAX     ; 005d1e23
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d1e2a
    MOV dword ptr [ESP + 0x17c],EAX     ; 005d1e2d
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d1e34
    MOV dword ptr [ESP + 0x150],EAX     ; 005d1e37
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d1e3e
    MOV dword ptr [ESP + 0x154],EAX     ; 005d1e41
    MOV EAX,dword ptr [ESP + 0x178]     ; 005d1e48
    MOV dword ptr [ESP + 0x60],EAX      ; 005d1e4f
    MOV EAX,dword ptr [ESP + 0x17c]     ; 005d1e53
    MOV dword ptr [ESP + 0x64],EAX      ; 005d1e5a
    MOV EAX,dword ptr [ESP + 0x150]     ; 005d1e5e
    MOV dword ptr [ESP + 0x68],EAX      ; 005d1e65
    MOV EAX,dword ptr [ESP + 0x154]     ; 005d1e69
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d1e70
    MOV EAX,dword ptr [ECX]             ; 005d1e74
    MOV dword ptr [ESP + 0x158],EAX     ; 005d1e76
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d1e7d
    MOV dword ptr [ESP + 0x15c],EAX     ; 005d1e80
    MOV EAX,dword ptr [ECX + 0x8]       ; 005d1e87
    MOV dword ptr [ESP + 0x160],EAX     ; 005d1e8a
    MOV EAX,dword ptr [ECX + 0xc]       ; 005d1e91
    MOV dword ptr [ESP + 0x164],EAX     ; 005d1e94
    MOV EAX,dword ptr [ESP + 0x158]     ; 005d1e9b
    MOV dword ptr [ESP + 0x70],EAX      ; 005d1ea2
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005d1ea6
    MOV dword ptr [ESP + 0x74],EAX      ; 005d1ead
    MOV EAX,dword ptr [ESP + 0x160]     ; 005d1eb1
    MOV dword ptr [ESP + 0x78],EAX      ; 005d1eb8
    MOV EAX,dword ptr [ESP + 0x164]     ; 005d1ebc
    JMP 0x005d1706                      ; 005d1ec3
        ;   XREF to: 005d1706 (UNCONDITIONAL_JUMP)  ; LAB_005d1706
    FLD double ptr [ESP + 0x58]         ; 005d1ec8
        ;   Label: LAB_005d1ec8
    FCOMP double ptr [ESP + 0x68]       ; 005d1ecc
    FNSTSW AX                           ; 005d1ed0
    SAHF                                ; 005d1ed2
    JNZ 0x005d171b                      ; 005d1ed3
        ;   XREF to: 005d171b (CONDITIONAL_JUMP)  ; LAB_005d171b
    JMP 0x005d1762                      ; 005d1ed9
        ;   XREF to: 005d1762 (UNCONDITIONAL_JUMP)  ; LAB_005d1762
    FLD double ptr [ESP + 0x58]         ; 005d1ede
        ;   Label: LAB_005d1ede
    FCOMP double ptr [ESP + 0x78]       ; 005d1ee2
    FNSTSW AX                           ; 005d1ee6
    SAHF                                ; 005d1ee8
    JNZ 0x005d1773                      ; 005d1ee9
        ;   XREF to: 005d1773 (CONDITIONAL_JUMP)  ; LAB_005d1773
    JMP 0x005d17b1                      ; 005d1eef
        ;   XREF to: 005d17b1 (UNCONDITIONAL_JUMP)  ; LAB_005d17b1
    FLD double ptr [ESP + 0x58]         ; 005d1ef4
        ;   Label: LAB_005d1ef4
    FCOMP double ptr [ESP + 0x88]       ; 005d1ef8
    FNSTSW AX                           ; 005d1eff
    SAHF                                ; 005d1f01
    JNZ 0x005d17c5                      ; 005d1f02
        ;   XREF to: 005d17c5 (CONDITIONAL_JUMP)  ; LAB_005d17c5
    JMP 0x005d1806                      ; 005d1f08
        ;   XREF to: 005d1806 (UNCONDITIONAL_JUMP)  ; LAB_005d1806
    FLD double ptr [ESP + 0x38]         ; 005d1f0d
        ;   Label: LAB_005d1f0d
    FCOMP double ptr [ESP + 0x78]       ; 005d1f11
    FNSTSW AX                           ; 005d1f15
    SAHF                                ; 005d1f17
    JNZ 0x005d1817                      ; 005d1f18
        ;   XREF to: 005d1817 (CONDITIONAL_JUMP)  ; LAB_005d1817
    JMP 0x005d1855                      ; 005d1f1e
        ;   XREF to: 005d1855 (UNCONDITIONAL_JUMP)  ; LAB_005d1855
    FLD double ptr [ESP + 0x38]         ; 005d1f23
        ;   Label: LAB_005d1f23
    FCOMP double ptr [ESP + 0x88]       ; 005d1f27
    FNSTSW AX                           ; 005d1f2e
    SAHF                                ; 005d1f30
    JNZ 0x005d1869                      ; 005d1f31
        ;   XREF to: 005d1869 (CONDITIONAL_JUMP)  ; LAB_005d1869
    JMP 0x005d18aa                      ; 005d1f37
        ;   XREF to: 005d18aa (UNCONDITIONAL_JUMP)  ; LAB_005d18aa
    FLD double ptr [ESP + 0x38]         ; 005d1f3c
        ;   Label: LAB_005d1f3c
    FCOMP double ptr [ESP + 0x68]       ; 005d1f40
    FNSTSW AX                           ; 005d1f44
    SAHF                                ; 005d1f46
    JNZ 0x005d18bb                      ; 005d1f47
        ;   XREF to: 005d18bb (CONDITIONAL_JUMP)  ; LAB_005d18bb
    JMP 0x005d1902                      ; 005d1f4d
        ;   XREF to: 005d1902 (UNCONDITIONAL_JUMP)  ; LAB_005d1902
    FLD double ptr [ESP + 0x48]         ; 005d1f52
        ;   Label: LAB_005d1f52
    FCOMP double ptr [ESP + 0x88]       ; 005d1f56
    FNSTSW AX                           ; 005d1f5d
    SAHF                                ; 005d1f5f
    JNZ 0x005d1916                      ; 005d1f60
        ;   XREF to: 005d1916 (CONDITIONAL_JUMP)  ; LAB_005d1916
    JMP 0x005d1957                      ; 005d1f66
        ;   XREF to: 005d1957 (UNCONDITIONAL_JUMP)  ; LAB_005d1957
    FLD double ptr [ESP + 0x48]         ; 005d1f6b
        ;   Label: LAB_005d1f6b
    FCOMP double ptr [ESP + 0x68]       ; 005d1f6f
    FNSTSW AX                           ; 005d1f73
    SAHF                                ; 005d1f75
    JNZ 0x005d1968                      ; 005d1f76
        ;   XREF to: 005d1968 (CONDITIONAL_JUMP)  ; LAB_005d1968
    JMP 0x005d19ab                      ; 005d1f7c
        ;   XREF to: 005d19ab (UNCONDITIONAL_JUMP)  ; LAB_005d19ab
    FLD double ptr [ESP + 0x48]         ; 005d1f81
        ;   Label: LAB_005d1f81
    FCOMP double ptr [ESP + 0x78]       ; 005d1f85
    FNSTSW AX                           ; 005d1f89
    SAHF                                ; 005d1f8b
    JNZ 0x005d19bc                      ; 005d1f8c
        ;   XREF to: 005d19bc (CONDITIONAL_JUMP)  ; LAB_005d19bc
    XOR EAX,EAX                         ; 005d1f92
        ;   Label: LAB_005d1f92
    MOV ESP,EBP                         ; 005d1f94
    POP EBP                             ; 005d1f96
    POP EDI                             ; 005d1f97
    POP ESI                             ; 005d1f98
    POP EBX                             ; 005d1f99
    RET                                 ; 005d1f9a

