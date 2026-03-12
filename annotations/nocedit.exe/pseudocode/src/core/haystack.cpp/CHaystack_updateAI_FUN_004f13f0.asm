; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_updateAI_FUN_004f13f0(CHaystack *this_ptr,float delta_time)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; CVector3f        Stack[-0x84]:12  local_84
; CVector3f        Stack[-0x78]:12  local_78
; CVector3f        Stack[-0x6c]:12  local_6c
; CVector3f        Stack[-0x60]:12  local_60
; float            Stack[-0x50]:4  local_50
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_haystack.cpp_CHaystack_process_FUN_004f0e40 at 004f10f3
;
; Referenced Globals:
;   float FLOAT_0062e963 = 20
;   double DOUBLE_0062e96b = 20
;   double DOUBLE_0062e973 = 6
;   double DOUBLE_0062e97b = 0.318309886192889
;   double DOUBLE_0062e983 = 4
;   double DOUBLE_0062e98b = 10
;   double DOUBLE_0062e993 = -0.25
;   double DOUBLE_0062e99b = 0.25
;   double DOUBLE_0062e9a3 = 3.14159265350000
;   double DOUBLE_0062e9ab = -3.14159265350000
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_path.cpp_getPathMap_FUN_00548500
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f13f0
        ;   Label: core_haystack.cpp_CHaystack_updateAI_FUN_004f13f0
    PUSH ESI                            ; 004f13f1
    PUSH EDI                            ; 004f13f2
    PUSH EBP                            ; 004f13f3
    MOV EBP,ESP                         ; 004f13f4
    SUB ESP,0x98                        ; 004f13f6
    AND ESP,0xfffffff8                  ; 004f13fc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f13ff
    MOV EDX,0x3e800000                  ; 004f1402
    MOV ECX,0x3f490fdb                  ; 004f1407
    PUSH 0x2c                           ; 004f140c
    XOR ESI,ESI                         ; 004f140e
    MOV EDI,dword ptr [0x02db87d0]      ; 004f1410 | g_LocalHeroIndex
    PUSH ESI                            ; 004f1416
    LEA EAX,[EBX + 0xbe2c]              ; 004f1417
    MOV dword ptr [ESP + 0x94],EDX      ; 004f141d
    PUSH EAX                            ; 004f1424
    MOV dword ptr [ESP + 0x94],ECX      ; 004f1425
    MOV EDI,dword ptr [EDI*0x4 + 0x2db87c0] ; 004f142c | g_HeroActors
    CALL crt_memory.c_memset_FUN_005fde40 ; 004f1433
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,dword ptr [EBX + 0x1fbd0]   ; 004f1438
    ADD ESP,0xc                         ; 004f143e
    TEST EAX,EAX                        ; 004f1441
    JZ 0x004f1797                       ; 004f1443
        ;   XREF to: 004f1797 (CONDITIONAL_JUMP)  ; LAB_004f1797
    MOV EAX,[0x02db87d0]                ; 004f1449 | g_LocalHeroIndex
    LEA EDX,[EBX + 0x20]                ; 004f144e
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f1451 | g_HeroActors
    FLD float ptr [EDX]                 ; 004f1458
    FSUB float ptr [EAX + 0x20]         ; 004f145a
    FSTP float ptr [ESP + 0x60]         ; 004f145d
    FLD float ptr [EDX + 0x4]           ; 004f1461
    FSUB float ptr [EAX + 0x24]         ; 004f1464
    FST float ptr [ESP + 0x64]          ; 004f1467
    FMUL float ptr [ESP + 0x64]         ; 004f146b
    FLD float ptr [ESP + 0x60]          ; 004f146f
    FMUL ST0                            ; 004f1473
    FLD float ptr [EDX + 0x8]           ; 004f1475
    FSUB float ptr [EAX + 0x28]         ; 004f1478
    FXCH                                ; 004f147b
    FADDP ST2,ST0                       ; 004f147d
    FST float ptr [ESP + 0x68]          ; 004f147f
    FMUL float ptr [ESP + 0x68]         ; 004f1483
    FADDP                               ; 004f1487
    FSQRT                               ; 004f1489
    MOV EDX,dword ptr [EBX + 0x1fbd0]   ; 004f148b
    FSTP float ptr [ESP + 0x78]         ; 004f1491
    CMP EDX,0x3                         ; 004f1495
    JNZ 0x004f179e                      ; 004f1498
        ;   XREF to: 004f179e (CONDITIONAL_JUMP)  ; LAB_004f179e
    MOV ECX,dword ptr [EBX + 0x1fbd0]   ; 004f149e
        ;   Label: LAB_004f149e
    CMP ECX,0x2                         ; 004f14a4
    JNZ 0x004f17b6                      ; 004f14a7
        ;   XREF to: 004f17b6 (CONDITIONAL_JUMP)  ; LAB_004f17b6
    LEA EAX,[ESP + 0x20]                ; 004f14ad
        ;   Label: LAB_004f14ad
    PUSH EAX                            ; 004f14b1
    MOV EDX,0x461c3f9a                  ; 004f14b2
    PUSH EBX                            ; 004f14b7
    MOV dword ptr [ESP + 0x28],EDX      ; 004f14b8
    CALL core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960 ; 004f14bc
        ;   XREF to: 004f3960 (UNCONDITIONAL_CALL)  ; CEnemy * core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960(CHero * this_ptr, float * out_distance)
    MOV EDX,EAX                         ; 004f14c1
    ADD ESP,0x8                         ; 004f14c3
    TEST EAX,EAX                        ; 004f14c6
    JZ 0x004f17c4                       ; 004f14c8
        ;   XREF to: 004f17c4 (CONDITIONAL_JUMP)  ; LAB_004f17c4
    FLD float ptr [ESP + 0x20]          ; 004f14ce
    FCOMP double ptr [0x0062e96b]       ; 004f14d2 | DOUBLE_0062e96b
    FNSTSW AX                           ; 004f14d8
    SAHF                                ; 004f14da
    JNC 0x004f17c4                      ; 004f14db
        ;   XREF to: 004f17c4 (CONDITIONAL_JUMP)  ; LAB_004f17c4
    MOV ESI,0x1                         ; 004f14e1
    MOV EDI,EDX                         ; 004f14e6
    LEA EDX,[EDI + 0x20]                ; 004f14e8
        ;   Label: LAB_004f14e8
    LEA EAX,[EBX + 0x20]                ; 004f14eb
    FLD float ptr [EDX]                 ; 004f14ee
    FSUB float ptr [EAX]                ; 004f14f0
    FSTP float ptr [ESP + 0x30]         ; 004f14f2
    FLD float ptr [EDX + 0x4]           ; 004f14f6
    FSUB float ptr [EAX + 0x4]          ; 004f14f9
    FSTP float ptr [ESP + 0x34]         ; 004f14fc
    FLD float ptr [EDX + 0x8]           ; 004f1500
    LEA EDX,[ESP + 0x60]                ; 004f1503
    FSUB float ptr [EAX + 0x8]          ; 004f1507
    LEA EAX,[ESP + 0x30]                ; 004f150a
    FSTP float ptr [ESP + 0x38]         ; 004f150e
    CMP EDX,EAX                         ; 004f1512
    JZ 0x004f152e                       ; 004f1514
        ;   XREF to: 004f152e (CONDITIONAL_JUMP)  ; LAB_004f152e
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f1516
    MOV dword ptr [ESP + 0x60],EAX      ; 004f151a
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f151e
    MOV dword ptr [ESP + 0x64],EAX      ; 004f1522
    MOV EAX,dword ptr [ESP + 0x38]      ; 004f1526
    MOV dword ptr [ESP + 0x68],EAX      ; 004f152a
    FLD float ptr [ESP + 0x64]          ; 004f152e
        ;   Label: LAB_004f152e
    FMUL ST0                            ; 004f1532
    FLD float ptr [ESP + 0x60]          ; 004f1534
    FMUL ST0                            ; 004f1538
    FADDP                               ; 004f153a
    FLD float ptr [ESP + 0x68]          ; 004f153c
    FMUL ST0                            ; 004f1540
    FADDP                               ; 004f1542
    FSQRT                               ; 004f1544
    FSTP float ptr [ESP + 0x90]         ; 004f1546
    MOV EAX,dword ptr [ESP + 0x90]      ; 004f154d
    FLD float ptr [ESP + 0x90]          ; 004f1554
    MOV dword ptr [ESP + 0x18],EAX      ; 004f155b
    FCOMP double ptr [0x0062e973]       ; 004f155f | DOUBLE_0062e973
    FNSTSW AX                           ; 004f1565
    SAHF                                ; 004f1567
    JNC 0x004f1839                      ; 004f1568
        ;   XREF to: 004f1839 (CONDITIONAL_JUMP)  ; LAB_004f1839
    LEA EAX,[EBX + 0x158]               ; 004f156e
    CMP ESI,0x1                         ; 004f1574
    JNZ 0x004f1808                      ; 004f1577
        ;   XREF to: 004f1808 (CONDITIONAL_JUMP)  ; LAB_004f1808
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004f157d
    JNZ 0x004f17e0                      ; 004f1584
        ;   XREF to: 004f17e0 (CONDITIONAL_JUMP)  ; LAB_004f17e0
    MOV dword ptr [EBX + 0xbe44],ESI    ; 004f158a
    CMP ESI,0x1                         ; 004f1590
        ;   Label: LAB_004f1590
    JNZ 0x004f165e                      ; 004f1593
        ;   XREF to: 004f165e (CONDITIONAL_JUMP)  ; LAB_004f165e
    LEA EAX,[ESP + 0x60]                ; 004f1599
    PUSH EAX                            ; 004f159d
    LEA EAX,[ESP + 0x4c]                ; 004f159e
    PUSH EAX                            ; 004f15a2
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f15a3
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 004f15a8
    ADD ESP,0x8                         ; 004f15ab
    FSUB float ptr [EBX + 0x34]         ; 004f15ae
    SUB ESP,0x4                         ; 004f15b1
    FSTP float ptr [ESP]                ; 004f15b4
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f15b7
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x98],EAX      ; 004f15bc
    FLD float ptr [ESP + 0x98]          ; 004f15c3
    FMUL double ptr [0x0062e97b]        ; 004f15ca | DOUBLE_0062e97b
    ADD ESP,0x4                         ; 004f15d0
    FMUL double ptr [0x0062e983]        ; 004f15d3 | DOUBLE_0062e983
    FLD float ptr [ESP + 0x8c]          ; 004f15d9
    FCHS                                ; 004f15e0
    FSTP float ptr [ESP + 0x80]         ; 004f15e2
    FST float ptr [EBX + 0xbe50]        ; 004f15e9
    FCOMP float ptr [ESP + 0x80]        ; 004f15ef
    FNSTSW AX                           ; 004f15f6
    SAHF                                ; 004f15f8
    JNC 0x004f1608                      ; 004f15f9
        ;   XREF to: 004f1608 (CONDITIONAL_JUMP)  ; LAB_004f1608
    MOV EAX,dword ptr [ESP + 0x80]      ; 004f15fb
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004f1602
    FLD float ptr [EBX + 0xbe50]        ; 004f1608
        ;   Label: LAB_004f1608
    FCOMP float ptr [ESP + 0x8c]        ; 004f160e
    FNSTSW AX                           ; 004f1615
    SAHF                                ; 004f1617
    JBE 0x004f1627                      ; 004f1618
        ;   XREF to: 004f1627 (CONDITIONAL_JUMP)  ; LAB_004f1627
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004f161a
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004f1621
    FLD float ptr [EBX + 0xbe50]        ; 004f1627
        ;   Label: LAB_004f1627
    FST double ptr [ESP + 0x10]         ; 004f162d
    FCOMP double ptr [0x0062e993]       ; 004f1631 | DOUBLE_0062e993
    FNSTSW AX                           ; 004f1637
    SAHF                                ; 004f1639
    JBE 0x004f165e                      ; 004f163a
        ;   XREF to: 004f165e (CONDITIONAL_JUMP)  ; LAB_004f165e
    FLD double ptr [ESP + 0x10]         ; 004f163c
    FCOMP double ptr [0x0062e99b]       ; 004f1640 | DOUBLE_0062e99b
    FNSTSW AX                           ; 004f1646
    SAHF                                ; 004f1648
    JNC 0x004f165e                      ; 004f1649
        ;   XREF to: 004f165e (CONDITIONAL_JUMP)  ; LAB_004f165e
    CMP dword ptr [EBX + 0xbe38],0x0    ; 004f164b
    JZ 0x004f165e                       ; 004f1652
        ;   XREF to: 004f165e (CONDITIONAL_JUMP)  ; LAB_004f165e
    MOV dword ptr [EBX + 0xbe50],0x0    ; 004f1654
    LEA EAX,[EBX + 0x20]                ; 004f165e
        ;   Label: LAB_004f165e
    FLD float ptr [EDI + 0x20]          ; 004f1661
    FSUB float ptr [EAX]                ; 004f1664
    FSTP float ptr [ESP + 0x3c]         ; 004f1666
    FLD float ptr [EDI + 0x24]          ; 004f166a
    FSUB float ptr [EAX + 0x4]          ; 004f166d
    LEA EDX,[ESP + 0x3c]                ; 004f1670
    FSTP float ptr [ESP + 0x40]         ; 004f1674
    FLD float ptr [EDI + 0x28]          ; 004f1678
    FSUB float ptr [EAX + 0x8]          ; 004f167b
    LEA EAX,[ESP + 0x60]                ; 004f167e
    FSTP float ptr [ESP + 0x44]         ; 004f1682
    CMP EAX,EDX                         ; 004f1686
    JZ 0x004f16a2                       ; 004f1688
        ;   XREF to: 004f16a2 (CONDITIONAL_JUMP)  ; LAB_004f16a2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f168a
    MOV dword ptr [ESP + 0x60],EAX      ; 004f168e
    MOV EAX,dword ptr [ESP + 0x40]      ; 004f1692
    MOV dword ptr [ESP + 0x64],EAX      ; 004f1696
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f169a
    MOV dword ptr [ESP + 0x68],EAX      ; 004f169e
    LEA EAX,[ESP + 0x60]                ; 004f16a2
        ;   Label: LAB_004f16a2
    PUSH EAX                            ; 004f16a6
    LEA EAX,[ESP + 0x70]                ; 004f16a7
    PUSH EAX                            ; 004f16ab
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f16ac
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 004f16b1
    LEA EAX,[ESP + 0x68]                ; 004f16b3
    ADD ESP,0x8                         ; 004f16b7
    CMP EAX,EDX                         ; 004f16ba
    JZ 0x004f16d2                       ; 004f16bc
        ;   XREF to: 004f16d2 (CONDITIONAL_JUMP)  ; LAB_004f16d2
    MOV EAX,dword ptr [EDX]             ; 004f16be
    MOV dword ptr [ESP + 0x60],EAX      ; 004f16c0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f16c4
    MOV dword ptr [ESP + 0x64],EAX      ; 004f16c7
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f16cb
    MOV dword ptr [ESP + 0x68],EAX      ; 004f16ce
    FLD float ptr [ESP + 0x64]          ; 004f16d2
        ;   Label: LAB_004f16d2
    FSUB float ptr [EBX + 0x34]         ; 004f16d6
    SUB ESP,0x4                         ; 004f16d9
    FSTP float ptr [ESP]                ; 004f16dc
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f16df
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x98],EAX      ; 004f16e4
    FLD float ptr [ESP + 0x98]          ; 004f16eb
    ADD ESP,0x4                         ; 004f16f2
    FST float ptr [ESP + 0x58]          ; 004f16f5
    FCOMP float ptr [ESP + 0x88]        ; 004f16f9
    FNSTSW AX                           ; 004f1700
    SAHF                                ; 004f1702
    JBE 0x004f1710                      ; 004f1703
        ;   XREF to: 004f1710 (CONDITIONAL_JUMP)  ; LAB_004f1710
    MOV EAX,dword ptr [ESP + 0x88]      ; 004f1705
    MOV dword ptr [ESP + 0x58],EAX      ; 004f170c
    FLD float ptr [ESP + 0x58]          ; 004f1710
        ;   Label: LAB_004f1710
    FLD float ptr [ESP + 0x88]          ; 004f1714
    FCHS                                ; 004f171b
    FSTP float ptr [ESP + 0x7c]         ; 004f171d
    FCOMP float ptr [ESP + 0x7c]        ; 004f1721
    FNSTSW AX                           ; 004f1725
    SAHF                                ; 004f1727
    JNC 0x004f1732                      ; 004f1728
        ;   XREF to: 004f1732 (CONDITIONAL_JUMP)  ; LAB_004f1732
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004f172a
    MOV dword ptr [ESP + 0x58],EAX      ; 004f172e
    FLD float ptr [ESP + 0x58]          ; 004f1732
        ;   Label: LAB_004f1732
    FLD float ptr [EBP + 0x18]          ; 004f1736
    FXCH                                ; 004f1739
    FSUB float ptr [EBX + 0x1fbe0]      ; 004f173b
    FXCH                                ; 004f1741
    FMUL double ptr [0x0062e9a3]        ; 004f1743 | DOUBLE_0062e9a3
    FXCH                                ; 004f1749
    FST float ptr [ESP + 0x1c]          ; 004f174b
    FXCH                                ; 004f174f
    FSTP double ptr [ESP + 0x8]         ; 004f1751
    FCOMP double ptr [ESP + 0x8]        ; 004f1755
    FNSTSW AX                           ; 004f1759
    SAHF                                ; 004f175b
    JBE 0x004f1766                      ; 004f175c
        ;   XREF to: 004f1766 (CONDITIONAL_JUMP)  ; LAB_004f1766
    FLD double ptr [ESP + 0x8]          ; 004f175e
    FSTP float ptr [ESP + 0x1c]         ; 004f1762
    FLD float ptr [EBP + 0x18]          ; 004f1766
        ;   Label: LAB_004f1766
    FMUL double ptr [0x0062e9ab]        ; 004f1769 | DOUBLE_0062e9ab
    FLD float ptr [ESP + 0x1c]          ; 004f176f
    FXCH                                ; 004f1773
    FSTP double ptr [ESP]               ; 004f1775
    FCOMP double ptr [ESP]              ; 004f1778
    FNSTSW AX                           ; 004f177b
    SAHF                                ; 004f177d
    JNC 0x004f1787                      ; 004f177e
        ;   XREF to: 004f1787 (CONDITIONAL_JUMP)  ; LAB_004f1787
    FLD double ptr [ESP]                ; 004f1780
    FSTP float ptr [ESP + 0x1c]         ; 004f1783
    FLD float ptr [EBX + 0x1fbe0]       ; 004f1787
        ;   Label: LAB_004f1787
    FADD float ptr [ESP + 0x1c]         ; 004f178d
    FSTP float ptr [EBX + 0x1fbe0]      ; 004f1791
    MOV ESP,EBP                         ; 004f1797
        ;   Label: LAB_004f1797
    POP EBP                             ; 004f1799
    POP EDI                             ; 004f179a
    POP ESI                             ; 004f179b
    POP EBX                             ; 004f179c
    RET                                 ; 004f179d
    FLD float ptr [ESP + 0x78]          ; 004f179e
        ;   Label: LAB_004f179e
    FCOMP float ptr [0x0062e963]        ; 004f17a2 | FLOAT_0062e963
    FNSTSW AX                           ; 004f17a8
    SAHF                                ; 004f17aa
    JC 0x004f149e                       ; 004f17ab
        ;   XREF to: 004f149e (CONDITIONAL_JUMP)  ; LAB_004f149e
    JMP 0x004f14e8                      ; 004f17b1
        ;   XREF to: 004f14e8 (UNCONDITIONAL_JUMP)  ; LAB_004f14e8
    CMP ECX,0x3                         ; 004f17b6
        ;   Label: LAB_004f17b6
    JZ 0x004f14ad                       ; 004f17b9
        ;   XREF to: 004f14ad (CONDITIONAL_JUMP)  ; LAB_004f14ad
    JMP 0x004f14e8                      ; 004f17bf
        ;   XREF to: 004f14e8 (UNCONDITIONAL_JUMP)  ; LAB_004f14e8
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004f17c4
        ;   Label: LAB_004f17c4
    JZ 0x004f14e8                       ; 004f17cb
        ;   XREF to: 004f14e8 (CONDITIONAL_JUMP)  ; LAB_004f14e8
    MOV dword ptr [EBX + 0xbe44],0x1    ; 004f17d1
    JMP 0x004f14e8                      ; 004f17db
        ;   XREF to: 004f14e8 (UNCONDITIONAL_JUMP)  ; LAB_004f14e8
    PUSH EAX                            ; 004f17e0
        ;   Label: LAB_004f17e0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f17e1
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f17e6
    ADD ESP,0x4                         ; 004f17e9
    CMP EAX,0x2                         ; 004f17ec
    JZ 0x004f1590                       ; 004f17ef
        ;   XREF to: 004f1590 (CONDITIONAL_JUMP)  ; LAB_004f1590
    CMP EAX,ESI                         ; 004f17f5
    JZ 0x004f1590                       ; 004f17f7
        ;   XREF to: 004f1590 (CONDITIONAL_JUMP)  ; LAB_004f1590
    MOV dword ptr [EBX + 0xbe38],ESI    ; 004f17fd
    JMP 0x004f1590                      ; 004f1803
        ;   XREF to: 004f1590 (UNCONDITIONAL_JUMP)  ; LAB_004f1590
    PUSH EAX                            ; 004f1808
        ;   Label: LAB_004f1808
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f1809
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f180e
    ADD ESP,0x4                         ; 004f1811
    CMP EAX,0xa                         ; 004f1814
    JNZ 0x004f1590                      ; 004f1817
        ;   XREF to: 004f1590 (CONDITIONAL_JUMP)  ; LAB_004f1590
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004f181d
    JZ 0x004f1590                       ; 004f1824
        ;   XREF to: 004f1590 (CONDITIONAL_JUMP)  ; LAB_004f1590
    MOV dword ptr [EBX + 0xbe44],0x1    ; 004f182a
    JMP 0x004f1590                      ; 004f1834
        ;   XREF to: 004f1590 (UNCONDITIONAL_JUMP)  ; LAB_004f1590
    XOR EAX,EAX                         ; 004f1839
        ;   Label: LAB_004f1839
    TEST ESI,ESI                        ; 004f183b
    JNZ 0x004f185b                      ; 004f183d
        ;   XREF to: 004f185b (CONDITIONAL_JUMP)  ; LAB_004f185b
    MOV EAX,[0x02db87d0]                ; 004f183f | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f1844 | g_HeroActors
    PUSH EAX                            ; 004f184b
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f184c
    CALL dword ptr [EDX + 0xbc]         ; 004f1852
    ADD ESP,0x4                         ; 004f1858
    TEST EAX,EAX                        ; 004f185b
        ;   Label: LAB_004f185b
    JNZ 0x004f186b                      ; 004f185d
        ;   XREF to: 004f186b (CONDITIONAL_JUMP)  ; LAB_004f186b
    LEA EAX,[EDI + 0x20]                ; 004f185f
    PUSH EAX                            ; 004f1862
    CALL core_path.cpp_getPathMap_FUN_00548500 ; 004f1863
        ;   XREF to: 00548500 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00548500(CLocation * location)
    ADD ESP,0x4                         ; 004f1868
    MOV EDX,dword ptr [EBX + 0x6c]      ; 004f186b
        ;   Label: LAB_004f186b
    PUSH EDX                            ; 004f186e
    LEA EDX,[ESP + 0x28]                ; 004f186f
    PUSH EDX                            ; 004f1873
    LEA EDX,[EBX + 0x20]                ; 004f1874
    PUSH EDX                            ; 004f1877
    PUSH EAX                            ; 004f1878
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 004f1879
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004f187e
    TEST EAX,EAX                        ; 004f1881
    JZ 0x004f165e                       ; 004f1883
        ;   XREF to: 004f165e (CONDITIONAL_JUMP)  ; LAB_004f165e
    FLD float ptr [ESP + 0x28]          ; 004f1889
    FSUB float ptr [EBX + 0x34]         ; 004f188d
    SUB ESP,0x4                         ; 004f1890
    FSTP float ptr [ESP]                ; 004f1893
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f1896
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x98],EAX      ; 004f189b
    FLD float ptr [ESP + 0x98]          ; 004f18a2
    FMUL double ptr [0x0062e97b]        ; 004f18a9 | DOUBLE_0062e97b
    ADD ESP,0x4                         ; 004f18af
    FMUL double ptr [0x0062e983]        ; 004f18b2 | DOUBLE_0062e983
    FLD float ptr [ESP + 0x8c]          ; 004f18b8
    FCHS                                ; 004f18bf
    FSTP float ptr [ESP + 0x84]         ; 004f18c1
    FST float ptr [EBX + 0xbe50]        ; 004f18c8
    FCOMP float ptr [ESP + 0x84]        ; 004f18ce
    FNSTSW AX                           ; 004f18d5
    SAHF                                ; 004f18d7
    JC 0x004f191c                       ; 004f18d8
        ;   XREF to: 004f191c (CONDITIONAL_JUMP)  ; LAB_004f191c
    FLD float ptr [EBX + 0xbe50]        ; 004f18da
        ;   Label: LAB_004f18da
    FCOMP float ptr [ESP + 0x8c]        ; 004f18e0
    FNSTSW AX                           ; 004f18e7
    SAHF                                ; 004f18e9
    JBE 0x004f18f9                      ; 004f18ea
        ;   XREF to: 004f18f9 (CONDITIONAL_JUMP)  ; LAB_004f18f9
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004f18ec
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004f18f3
    FLD float ptr [ESP + 0x18]          ; 004f18f9
        ;   Label: LAB_004f18f9
    FCOMP double ptr [0x0062e98b]       ; 004f18fd | DOUBLE_0062e98b
    FNSTSW AX                           ; 004f1903
    SAHF                                ; 004f1905
    JNC 0x004f192b                      ; 004f1906
        ;   XREF to: 004f192b (CONDITIONAL_JUMP)  ; LAB_004f192b
    CMP ESI,0x1                         ; 004f1908
    JZ 0x004f192b                       ; 004f190b
        ;   XREF to: 004f192b (CONDITIONAL_JUMP)  ; LAB_004f192b
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 004f190d
    JMP 0x004f165e                      ; 004f1917
        ;   XREF to: 004f165e (UNCONDITIONAL_JUMP)  ; LAB_004f165e
    MOV EAX,dword ptr [ESP + 0x84]      ; 004f191c
        ;   Label: LAB_004f191c
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004f1923
    JMP 0x004f18da                      ; 004f1929
        ;   XREF to: 004f18da (UNCONDITIONAL_JUMP)  ; LAB_004f18da
    MOV dword ptr [EBX + 0xbe34],0x1    ; 004f192b
        ;   Label: LAB_004f192b
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 004f1935
    JMP 0x004f165e                      ; 004f193f
        ;   XREF to: 004f165e (UNCONDITIONAL_JUMP)  ; LAB_004f165e

