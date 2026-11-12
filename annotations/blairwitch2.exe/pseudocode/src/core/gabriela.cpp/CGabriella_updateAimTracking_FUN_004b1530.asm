; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004b1530(CGabriella *this_ptr,float delta_time,int is_holstering)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   is_holstering
; Local Variables:
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined        Stack[-0x19c]:1  local_19c
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
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004adc88
;
; Referenced Globals:
;   undefined4 DAT_005d716b
;   undefined4 DAT_005d7173
;   undefined4 DAT_005d717b
;   undefined4 DAT_005d717f
;   undefined4 DAT_005d7183
;   undefined4 DAT_005d718b
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_005f7340
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01cb0690
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004b11a0
;   core_motion.cpp_FUN_005035c0
;   core_skeleton.cpp_FUN_005469a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1530
        ;   Label: core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004b1530
    PUSH ESI                            ; 004b1531
    PUSH EDI                            ; 004b1532
    PUSH EBP                            ; 004b1533
    MOV EBP,ESP                         ; 004b1534
    SUB ESP,0x190                       ; 004b1536
    AND ESP,0xfffffff8                  ; 004b153c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b153f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004b1542
    TEST ESI,ESI                        ; 004b1545
    JZ 0x004b1645                       ; 004b1547
        ;   XREF to: 004b1645 (CONDITIONAL_JUMP)  ; LAB_004b1645
    CMP dword ptr [EBX + 0x24378],0x0   ; 004b154d
        ;   Label: LAB_004b154d
    JNZ 0x004b166a                      ; 004b1554
        ;   XREF to: 004b166a (CONDITIONAL_JUMP)  ; LAB_004b166a
    CMP dword ptr [EBX + 0x25640],0x0   ; 004b155a
        ;   Label: LAB_004b155a
    JNZ 0x004b16fc                      ; 004b1561
        ;   XREF to: 004b16fc (CONDITIONAL_JUMP)  ; LAB_004b16fc
    MOV dword ptr [EBX + 0x25664],0x0   ; 004b1567
        ;   Label: LAB_004b1567
    CMP dword ptr [EBX + 0x25658],0x2   ; 004b1571
        ;   Label: LAB_004b1571
    JNZ 0x004b17c8                      ; 004b1578
        ;   XREF to: 004b17c8 (CONDITIONAL_JUMP)  ; LAB_004b17c8
    MOV ECX,dword ptr [EBX + 0x25664]   ; 004b157e
    TEST ECX,ECX                        ; 004b1584
    JNZ 0x004b15b2                      ; 004b1586
        ;   XREF to: 004b15b2 (CONDITIONAL_JUMP)  ; LAB_004b15b2
    MOV dword ptr [EBX + 0x25674],ECX   ; 004b1588
    MOV EAX,dword ptr [EBX + 0x25674]   ; 004b158e
    MOV dword ptr [EBX + 0x25670],EAX   ; 004b1594
    MOV EAX,dword ptr [EBX + 0x25670]   ; 004b159a
    MOV dword ptr [EBX + 0x2566c],EAX   ; 004b15a0
    MOV EAX,dword ptr [EBX + 0x2566c]   ; 004b15a6
    MOV dword ptr [EBX + 0x25668],EAX   ; 004b15ac
    FLD float ptr [0x005f7340]          ; 004b15b2 | DAT_005f7340
        ;   Label: LAB_004b15b2
    FMUL double ptr [0x005d7183]        ; 004b15b8 | DAT_005d7183
    FDIVR float ptr [EBP + 0x18]        ; 004b15be
    FADD float ptr [EBX + 0x2567c]      ; 004b15c1
    FSTP float ptr [EBX + 0x2567c]      ; 004b15c7
        ;   Label: LAB_004b15c7
    FLD float ptr [EBX + 0x2567c]       ; 004b15cd
        ;   Label: LAB_004b15cd
    FLD1                                ; 004b15d3
    FCOMPP                              ; 004b15d5
    FNSTSW AX                           ; 004b15d7
    SAHF                                ; 004b15d9
    JNC 0x004b15e6                      ; 004b15da
        ;   XREF to: 004b15e6 (CONDITIONAL_JUMP)  ; LAB_004b15e6
    MOV dword ptr [EBX + 0x2567c],0x3f800000 ; 004b15dc
    FLD float ptr [EBX + 0x2567c]       ; 004b15e6
        ;   Label: LAB_004b15e6
    FLDZ                                ; 004b15ec
    FCOMPP                              ; 004b15ee
    FNSTSW AX                           ; 004b15f0
    SAHF                                ; 004b15f2
    JBE 0x004b1613                      ; 004b15f3
        ;   XREF to: 004b1613 (CONDITIONAL_JUMP)  ; LAB_004b1613
    MOV dword ptr [EBX + 0x25670],0x0   ; 004b15f5
    MOV dword ptr [EBX + 0x25674],0x0   ; 004b15ff
    MOV dword ptr [EBX + 0x2567c],0x0   ; 004b1609
    FLD float ptr [EBX + 0x2567c]       ; 004b1613
        ;   Label: LAB_004b1613
    FLDZ                                ; 004b1619
    FCOMPP                              ; 004b161b
    FNSTSW AX                           ; 004b161d
    SAHF                                ; 004b161f
    JC 0x004b1a9b                       ; 004b1620
        ;   XREF to: 004b1a9b (CONDITIONAL_JUMP)  ; LAB_004b1a9b
    FLD float ptr [EBX + 0x2566c]       ; 004b1626
    MOV EAX,dword ptr [EBX + 0x25668]   ; 004b162c
    MOV dword ptr [EBX + 0x25670],EAX   ; 004b1632
    FSTP float ptr [EBX + 0x25674]      ; 004b1638
    MOV ESP,EBP                         ; 004b163e
    POP EBP                             ; 004b1640
    POP EDI                             ; 004b1641
    POP ESI                             ; 004b1642
    POP EBX                             ; 004b1643
    RET                                 ; 004b1644
    LEA EAX,[EBX + 0x2b4]               ; 004b1645
        ;   Label: LAB_004b1645
    PUSH EAX                            ; 004b164b
    CALL core_motion.cpp_FUN_005035c0   ; 004b164c
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b1651
    ADD ESP,0x4                         ; 004b1654
    CMP EAX,0x2                         ; 004b1657
    JNZ 0x004b154d                      ; 004b165a
        ;   XREF to: 004b154d (CONDITIONAL_JUMP)  ; LAB_004b154d
    MOV ESI,0x1                         ; 004b1660
    JMP 0x004b154d                      ; 004b1665
        ;   XREF to: 004b154d (UNCONDITIONAL_JUMP)  ; LAB_004b154d
    CMP dword ptr [EBX + 0x10a64],0x2   ; 004b166a
        ;   Label: LAB_004b166a
    JZ 0x004b155a                       ; 004b1671
        ;   XREF to: 004b155a (CONDITIONAL_JUMP)  ; LAB_004b155a
    FLD float ptr [EBX + 0x10a94]       ; 004b1677
    FMUL float ptr [0x005d716b]         ; 004b167d | DAT_005d716b
    FMUL double ptr [0x005d7173]        ; 004b1683 | DAT_005d7173
    FMUL float ptr [EBP + 0x18]         ; 004b1689
    MOV ESI,0x3fc90fdb                  ; 004b168c
    FLD float ptr [EBX + 0x25668]       ; 004b1691
    FXCH                                ; 004b1697
    FADD ST0,ST1                        ; 004b1699
    MOV dword ptr [ESP + 0x188],ESI     ; 004b169b
    FSTP ST1                            ; 004b16a2
    FST float ptr [EBX + 0x25668]       ; 004b16a4
    FCOMP float ptr [0x005d717b]        ; 004b16aa | DAT_005d717b
    FNSTSW AX                           ; 004b16b0
    SAHF                                ; 004b16b2
    JNC 0x004b16bf                      ; 004b16b3
        ;   XREF to: 004b16bf (CONDITIONAL_JUMP)  ; LAB_004b16bf
    MOV dword ptr [EBX + 0x25668],0xbfc90fdb ; 004b16b5
    FLD float ptr [EBX + 0x25668]       ; 004b16bf
        ;   Label: LAB_004b16bf
    FCOMP float ptr [ESP + 0x188]       ; 004b16c5
    FNSTSW AX                           ; 004b16cc
    SAHF                                ; 004b16ce
    JBE 0x004b16de                      ; 004b16cf
        ;   XREF to: 004b16de (CONDITIONAL_JUMP)  ; LAB_004b16de
    MOV EAX,dword ptr [ESP + 0x188]     ; 004b16d1
    MOV dword ptr [EBX + 0x25668],EAX   ; 004b16d8
    FLD float ptr [EBP + 0x18]          ; 004b16de
        ;   Label: LAB_004b16de
    FDIV float ptr [0x005f7340]         ; 004b16e1 | DAT_005f7340
    FADD float ptr [EBX + 0x2567c]      ; 004b16e7
    MOV dword ptr [EBX + 0x2566c],0x0   ; 004b16ed
    JMP 0x004b15c7                      ; 004b16f7
        ;   XREF to: 004b15c7 (UNCONDITIONAL_JUMP)  ; LAB_004b15c7
    TEST ESI,ESI                        ; 004b16fc
        ;   Label: LAB_004b16fc
    JNZ 0x004b1567                      ; 004b16fe
        ;   XREF to: 004b1567 (CONDITIONAL_JUMP)  ; LAB_004b1567
    CMP dword ptr [EBX + 0x25658],0x0   ; 004b1704
    JNZ 0x004b1571                      ; 004b170b
        ;   XREF to: 004b1571 (CONDITIONAL_JUMP)  ; LAB_004b1571
    MOV EDX,0x7149f2ca                  ; 004b1711
    MOV dword ptr [ESP + 0x178],ESI     ; 004b1716
    MOV dword ptr [ESP + 0x180],ESI     ; 004b171d
    XOR EDI,EDI                         ; 004b1724
    MOV dword ptr [ESP + 0x17c],EDX     ; 004b1726
    MOV EAX,[0x0061b5a8]                ; 004b172d | g_CDemonSetPtr
        ;   Label: LAB_004b172d
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 004b1732 | g_CDemonSetInstance.actor_count
    JGE 0x004b17b6                      ; 004b1738
        ;   XREF to: 004b17b6 (CONDITIONAL_JUMP)  ; LAB_004b17b6
    ADD EAX,dword ptr [ESP + 0x180]     ; 004b173e
    MOV EDX,dword ptr [EBX + 0x25664]   ; 004b1745
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 004b174b | g_CDemonSetInstance.actors[0]
    CMP ESI,EDX                         ; 004b1751
    SETZ AL                             ; 004b1753
    AND EAX,0xff                        ; 004b1756
    PUSH EAX                            ; 004b175b
    PUSH ESI                            ; 004b175c
    PUSH EBX                            ; 004b175d
    CALL core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004b11a0 ; 004b175e
        ;   XREF to: 004b11a0 (UNCONDITIONAL_CALL)  ; float core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004b11a0(CGabriella * this_ptr, CDemonActor * target_actor, int use_wider_fov)
    MOV dword ptr [ESP + 0x198],EAX     ; 004b1763
    FLD float ptr [ESP + 0x198]         ; 004b176a
    ADD ESP,0xc                         ; 004b1771
    FST float ptr [ESP]                 ; 004b1774
    FLDZ                                ; 004b1777
    FCOMPP                              ; 004b1779
    FNSTSW AX                           ; 004b177b
    SAHF                                ; 004b177d
    JBE 0x004b1794                      ; 004b177e
        ;   XREF to: 004b1794 (CONDITIONAL_JUMP)  ; LAB_004b1794
    MOV ECX,dword ptr [ESP + 0x180]     ; 004b1780
        ;   Label: LAB_004b1780
    ADD ECX,0x4                         ; 004b1787
    INC EDI                             ; 004b178a
    MOV dword ptr [ESP + 0x180],ECX     ; 004b178b
    JMP 0x004b172d                      ; 004b1792
        ;   XREF to: 004b172d (UNCONDITIONAL_JUMP)  ; LAB_004b172d
    FLD float ptr [ESP]                 ; 004b1794
        ;   Label: LAB_004b1794
    FCOMP float ptr [ESP + 0x17c]       ; 004b1797
    FNSTSW AX                           ; 004b179e
    SAHF                                ; 004b17a0
    JNC 0x004b1780                      ; 004b17a1
        ;   XREF to: 004b1780 (CONDITIONAL_JUMP)  ; LAB_004b1780
    MOV EAX,dword ptr [ESP]             ; 004b17a3
    MOV dword ptr [ESP + 0x178],ESI     ; 004b17a6
    MOV dword ptr [ESP + 0x17c],EAX     ; 004b17ad
    JMP 0x004b1780                      ; 004b17b4
        ;   XREF to: 004b1780 (UNCONDITIONAL_JUMP)  ; LAB_004b1780
    MOV EAX,dword ptr [ESP + 0x178]     ; 004b17b6
        ;   Label: LAB_004b17b6
    MOV dword ptr [EBX + 0x25664],EAX   ; 004b17bd
    JMP 0x004b1571                      ; 004b17c3
        ;   XREF to: 004b1571 (UNCONDITIONAL_JUMP)  ; LAB_004b1571
    CMP dword ptr [EBX + 0x25664],0x0   ; 004b17c8
        ;   Label: LAB_004b17c8
    JZ 0x004b1a74                       ; 004b17cf
        ;   XREF to: 004b1a74 (CONDITIONAL_JUMP)  ; LAB_004b1a74
    PUSH 0x5f22b0                       ; 004b17d5 | g_CVectorTypeInfo
    PUSH 0xa                            ; 004b17da
    LEA EAX,[ESP + 0xc]                 ; 004b17dc
    PUSH EAX                            ; 004b17e0
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004b17e1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b17e6
    LEA EDI,[ESP + 0x4]                 ; 004b17e9
    MOV EAX,dword ptr [EBX + 0x25664]   ; 004b17ed
    PUSH EDI                            ; 004b17f3
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004b17f4
    PUSH EAX                            ; 004b17fa
    CALL dword ptr [ESI + 0x5c]         ; 004b17fb
    ADD ESP,0x8                         ; 004b17fe
    TEST EAX,EAX                        ; 004b1801
    JLE 0x004b196f                      ; 004b1803
        ;   XREF to: 004b196f (CONDITIONAL_JUMP)  ; LAB_004b196f
    LEA ESI,[ESP + 0x130]               ; 004b1809
    LEA EAX,[ESP + 0x4]                 ; 004b1810
    CMP ESI,EAX                         ; 004b1814
    JZ 0x004b1839                       ; 004b1816
        ;   XREF to: 004b1839 (CONDITIONAL_JUMP)  ; LAB_004b1839
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1818
    MOV dword ptr [ESP + 0x130],EAX     ; 004b181c
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b1823
    MOV dword ptr [ESP + 0x134],EAX     ; 004b1827
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b182e
    MOV dword ptr [ESP + 0x138],EAX     ; 004b1832
        ;   Label: LAB_004b1832
    LEA EAX,[ESP + 0x130]               ; 004b1839
        ;   Label: LAB_004b1839
    PUSH EAX                            ; 004b1840
    MOV EAX,dword ptr [EBX + 0x25664]   ; 004b1841
    PUSH EAX                            ; 004b1847
    LEA ESI,[ESP + 0x108]               ; 004b1848
    LEA EDI,[ESP + 0xd8]                ; 004b184f
    CALL core_actor.cpp_FUN_00408d70    ; 004b1856
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004b185b
    LEA EAX,[ESP + 0xd0]                ; 004b185e
    LEA ESI,[ESP + 0x100]               ; 004b1865
    PUSH EAX                            ; 004b186c
    MOVSD ES:EDI,ESI                    ; 004b186d
    MOVSD ES:EDI,ESI                    ; 004b186e
    MOVSD ES:EDI,ESI                    ; 004b186f
    PUSH EBX                            ; 004b1870
    LEA ESI,[ESP + 0x114]               ; 004b1871
    LEA EDI,[ESP + 0x144]               ; 004b1878
    CALL core_actor.cpp_FUN_00408de0    ; 004b187f
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x114]               ; 004b1884
    ADD ESP,0x8                         ; 004b188b
    MOV EDX,dword ptr [0x01cb0690]      ; 004b188e | DAT_01cb0690
    LEA EAX,[EBX + 0x2b4]               ; 004b1894
    PUSH EDX                            ; 004b189a
    MOVSD ES:EDI,ESI                    ; 004b189b
    MOVSD ES:EDI,ESI                    ; 004b189c
    MOVSD ES:EDI,ESI                    ; 004b189d
    PUSH EAX                            ; 004b189e
    LEA ESI,[ESP + 0xe4]                ; 004b189f
    LEA EDI,[ESP + 0xc0]                ; 004b18a6
    CALL core_skeleton.cpp_FUN_005469a0 ; 004b18ad
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[ESP + 0xe4]                ; 004b18b2
    ADD ESP,0x8                         ; 004b18b9
    LEA EAX,[ESP + 0x118]               ; 004b18bc
    FLD float ptr [ESP + 0x13c]         ; 004b18c3
    FLD float ptr [ESP + 0x140]         ; 004b18ca
    MOVSD ES:EDI,ESI                    ; 004b18d1
    MOVSD ES:EDI,ESI                    ; 004b18d2
    MOVSD ES:EDI,ESI                    ; 004b18d3
    FLD float ptr [ESP + 0x144]         ; 004b18d4
    LEA EDI,[ESP + 0x118]               ; 004b18db
    LEA ESI,[ESP + 0xe8]                ; 004b18e2
    FXCH ST2                            ; 004b18e9
    FSUB float ptr [ESP + 0xb8]         ; 004b18eb
    FXCH                                ; 004b18f2
    FSUB float ptr [ESP + 0xbc]         ; 004b18f4
    FXCH ST2                            ; 004b18fb
    FSUB float ptr [ESP + 0xc0]         ; 004b18fd
    FXCH                                ; 004b1904
    FSTP float ptr [ESP + 0xe8]         ; 004b1906
    FXCH                                ; 004b190d
    FSTP float ptr [ESP + 0xec]         ; 004b190f
    FSTP float ptr [ESP + 0xf0]         ; 004b1916
    MOVSD ES:EDI,ESI                    ; 004b191d
    MOVSD ES:EDI,ESI                    ; 004b191e
    MOVSD ES:EDI,ESI                    ; 004b191f
    PUSH EAX                            ; 004b1920
    LEA ESI,[ESP + 0xb0]                ; 004b1921
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004b1928
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    ADD ESP,0x4                         ; 004b192d
    FLD float ptr [EBP + 0x18]          ; 004b1930
    FDIV float ptr [0x005f7340]         ; 004b1933 | DAT_005f7340
    LEA EDI,[ESP + 0xc4]                ; 004b1939
    LEA ESI,[ESP + 0xac]                ; 004b1940
    MOVSD ES:EDI,ESI                    ; 004b1947
    MOVSD ES:EDI,ESI                    ; 004b1948
    MOVSD ES:EDI,ESI                    ; 004b1949
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004b194a
    MOV dword ptr [EBX + 0x25668],EAX   ; 004b1951
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004b1957
    FADD float ptr [EBX + 0x2567c]      ; 004b195e
    MOV dword ptr [EBX + 0x2566c],EAX   ; 004b1964
    JMP 0x004b15c7                      ; 004b196a
        ;   XREF to: 004b15c7 (UNCONDITIONAL_JUMP)  ; LAB_004b15c7
    MOV EAX,dword ptr [EBX + 0x25664]   ; 004b196f
        ;   Label: LAB_004b196f
    PUSH EAX                            ; 004b1975
    MOV EDI,dword ptr [EAX + 0x2b0]     ; 004b1976
    LEA ESI,[ESP + 0x98]                ; 004b197c
    CALL dword ptr [EDI + 0x24]         ; 004b1983
    MOV ECX,0x6                         ; 004b1986
    LEA EDI,[ESP + 0x80]                ; 004b198b
    LEA ESI,[ESP + 0x98]                ; 004b1992
    ADD ESP,0x4                         ; 004b1999
    MOVSD.REP ES:EDI,ESI                ; 004b199c
    LEA EAX,[ESP + 0x7c]                ; 004b199e
    FLD float ptr [ESP + 0x7c]          ; 004b19a2
    FLD float ptr [ESP + 0x80]          ; 004b19a6
    FLD float ptr [ESP + 0x84]          ; 004b19ad
    LEA EDI,[ESP + 0xf4]                ; 004b19b4
    LEA ESI,[ESP + 0x148]               ; 004b19bb
    FXCH ST2                            ; 004b19c2
    FADD float ptr [EAX + 0xc]          ; 004b19c4
    FXCH                                ; 004b19c7
    FADD float ptr [EAX + 0x10]         ; 004b19c9
    FXCH ST2                            ; 004b19cc
    FADD float ptr [EAX + 0x14]         ; 004b19ce
    FXCH                                ; 004b19d1
    FSTP float ptr [ESP + 0x148]        ; 004b19d3
    FXCH                                ; 004b19da
    FSTP float ptr [ESP + 0x14c]        ; 004b19dc
    FSTP float ptr [ESP + 0x150]        ; 004b19e3
    MOVSD ES:EDI,ESI                    ; 004b19ea
    MOVSD ES:EDI,ESI                    ; 004b19eb
    MOVSD ES:EDI,ESI                    ; 004b19ec
    FLD float ptr [0x005d717f]          ; 004b19ed | DAT_005d717f
    FLD float ptr [ESP + 0xf4]          ; 004b19f3
    FMUL ST1                            ; 004b19fa
    FLD float ptr [ESP + 0xf8]          ; 004b19fc
    FMUL ST2                            ; 004b1a03
    FLD float ptr [ESP + 0xfc]          ; 004b1a05
    FMULP ST3                           ; 004b1a0c
    LEA EDI,[ESP + 0x124]               ; 004b1a0e
    LEA ESI,[ESP + 0x154]               ; 004b1a15
    FXCH                                ; 004b1a1c
    FSTP float ptr [ESP + 0x154]        ; 004b1a1e
    FSTP float ptr [ESP + 0x158]        ; 004b1a25
    FSTP float ptr [ESP + 0x15c]        ; 004b1a2c
    MOVSD ES:EDI,ESI                    ; 004b1a33
    MOVSD ES:EDI,ESI                    ; 004b1a34
    MOVSD ES:EDI,ESI                    ; 004b1a35
    LEA EAX,[ESP + 0x124]               ; 004b1a36
    LEA ESI,[ESP + 0x130]               ; 004b1a3d
    CMP ESI,EAX                         ; 004b1a44
    JZ 0x004b1839                       ; 004b1a46
        ;   XREF to: 004b1839 (CONDITIONAL_JUMP)  ; LAB_004b1839
    MOV EAX,dword ptr [ESP + 0x124]     ; 004b1a4c
    MOV dword ptr [ESP + 0x130],EAX     ; 004b1a53
    MOV EAX,dword ptr [ESP + 0x128]     ; 004b1a5a
    MOV dword ptr [ESP + 0x134],EAX     ; 004b1a61
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004b1a68
    JMP 0x004b1832                      ; 004b1a6f
        ;   XREF to: 004b1832 (UNCONDITIONAL_JUMP)  ; LAB_004b1832
    FLD float ptr [EBX + 0x25678]       ; 004b1a74
        ;   Label: LAB_004b1a74
    FLDZ                                ; 004b1a7a
    FCOMPP                              ; 004b1a7c
    FNSTSW AX                           ; 004b1a7e
    SAHF                                ; 004b1a80
    JC 0x004b15cd                       ; 004b1a81
        ;   XREF to: 004b15cd (CONDITIONAL_JUMP)  ; LAB_004b15cd
    FLD float ptr [EBP + 0x18]          ; 004b1a87
    FDIV float ptr [0x005f7340]         ; 004b1a8a | DAT_005f7340
    FSUBR float ptr [EBX + 0x2567c]     ; 004b1a90
    JMP 0x004b15c7                      ; 004b1a96
        ;   XREF to: 004b15c7 (UNCONDITIONAL_JUMP)  ; LAB_004b15c7
    FLD float ptr [EBX + 0x2566c]       ; 004b1a9b
        ;   Label: LAB_004b1a9b
    FSUB float ptr [EBX + 0x25674]      ; 004b1aa1
    SUB ESP,0x4                         ; 004b1aa7
    FSTP float ptr [ESP]                ; 004b1aaa
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004b1aad
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x190],EAX     ; 004b1ab2
    FLD float ptr [EBX + 0x25668]       ; 004b1ab9
    FLD float ptr [ESP + 0x190]         ; 004b1abf
    ADD ESP,0x4                         ; 004b1ac6
    FXCH                                ; 004b1ac9
    FSUB float ptr [EBX + 0x25670]      ; 004b1acb
    FXCH                                ; 004b1ad1
    FSTP float ptr [ESP + 0x170]        ; 004b1ad3
    SUB ESP,0x4                         ; 004b1ada
    FSTP float ptr [ESP]                ; 004b1add
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004b1ae0
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x190],EAX     ; 004b1ae5
    FLD float ptr [ESP + 0x190]         ; 004b1aec
    ADD ESP,0x4                         ; 004b1af3
    FLD float ptr [EBP + 0x18]          ; 004b1af6
    FMUL float ptr [0x005d716b]         ; 004b1af9 | DAT_005d716b
    FMUL double ptr [0x005d718b]        ; 004b1aff | DAT_005d718b
    FLD float ptr [ESP + 0x170]         ; 004b1b05
    FXCH ST2                            ; 004b1b0c
    FSTP float ptr [ESP + 0x16c]        ; 004b1b0e
    FST float ptr [ESP + 0x174]         ; 004b1b15
    FCHS                                ; 004b1b1c
    FSTP float ptr [ESP + 0x168]        ; 004b1b1e
    FCOMP float ptr [ESP + 0x168]       ; 004b1b25
    FNSTSW AX                           ; 004b1b2c
    SAHF                                ; 004b1b2e
    JNC 0x004b1b3f                      ; 004b1b2f
        ;   XREF to: 004b1b3f (CONDITIONAL_JUMP)  ; LAB_004b1b3f
    MOV EAX,dword ptr [ESP + 0x168]     ; 004b1b31
    MOV dword ptr [ESP + 0x170],EAX     ; 004b1b38
    FLD float ptr [ESP + 0x170]         ; 004b1b3f
        ;   Label: LAB_004b1b3f
    FCOMP float ptr [ESP + 0x174]       ; 004b1b46
    FNSTSW AX                           ; 004b1b4d
    SAHF                                ; 004b1b4f
    JBE 0x004b1b60                      ; 004b1b50
        ;   XREF to: 004b1b60 (CONDITIONAL_JUMP)  ; LAB_004b1b60
    MOV EAX,dword ptr [ESP + 0x174]     ; 004b1b52
    MOV dword ptr [ESP + 0x170],EAX     ; 004b1b59
    FLD float ptr [ESP + 0x16c]         ; 004b1b60
        ;   Label: LAB_004b1b60
    FLD float ptr [ESP + 0x174]         ; 004b1b67
    FCHS                                ; 004b1b6e
    FSTP float ptr [ESP + 0x184]        ; 004b1b70
    FCOMP float ptr [ESP + 0x184]       ; 004b1b77
    FNSTSW AX                           ; 004b1b7e
    SAHF                                ; 004b1b80
    JNC 0x004b1b91                      ; 004b1b81
        ;   XREF to: 004b1b91 (CONDITIONAL_JUMP)  ; LAB_004b1b91
    MOV EAX,dword ptr [ESP + 0x184]     ; 004b1b83
    MOV dword ptr [ESP + 0x16c],EAX     ; 004b1b8a
    FLD float ptr [ESP + 0x16c]         ; 004b1b91
        ;   Label: LAB_004b1b91
    FCOMP float ptr [ESP + 0x174]       ; 004b1b98
    FNSTSW AX                           ; 004b1b9f
    SAHF                                ; 004b1ba1
    JBE 0x004b1bb2                      ; 004b1ba2
        ;   XREF to: 004b1bb2 (CONDITIONAL_JUMP)  ; LAB_004b1bb2
    MOV EAX,dword ptr [ESP + 0x174]     ; 004b1ba4
    MOV dword ptr [ESP + 0x16c],EAX     ; 004b1bab
    FLD float ptr [EBX + 0x25674]       ; 004b1bb2
        ;   Label: LAB_004b1bb2
    FLD float ptr [EBX + 0x25670]       ; 004b1bb8
    FADD float ptr [ESP + 0x16c]        ; 004b1bbe
    FXCH                                ; 004b1bc5
    FADD float ptr [ESP + 0x170]        ; 004b1bc7
    FXCH                                ; 004b1bce
    FSTP float ptr [EBX + 0x25670]      ; 004b1bd0
    FSTP float ptr [EBX + 0x25674]      ; 004b1bd6
    MOV ESP,EBP                         ; 004b1bdc
    POP EBP                             ; 004b1bde
    POP EDI                             ; 004b1bdf
    POP ESI                             ; 004b1be0
    POP EBX                             ; 004b1be1
    RET                                 ; 004b1be2

