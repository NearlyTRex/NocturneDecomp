; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_CStranger_FUN_005c1680()
;
; Local Variables:
; undefined1       Stack[-0x16c]:1  local_16c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5d36
;
; Referenced Globals:
;   void* switchdataD_005c165c = 005c19c1
;   void* switchdataD_005c166c = 005c1c12
;   TerminatedCString s_Picking_up_heavy_s_shelf_006539a0
;   TerminatedCString s_Picking_up_heavy_s_crate_006539bb
;   TerminatedCString s_s_out_of_reach_canceling_006539d6
;   TerminatedCString s_Picking_up_s_waist_level_006539fa
;   TerminatedCString s_Picking_up_s_off_ground_00653a15
;   TerminatedCString s_Rummaging_s_00653a2f
;   TerminatedCString s_core_stranger_cpp_00653a3d
;   TerminatedCString s_Hell_froze_invalid_pickU_00653a52
;   double DOUBLE_00653a7c = 0.990000000000000
;   float FLOAT_00653a84 = 0.5
;   double DOUBLE_00653a8c = 2.5
;   double DOUBLE_00653a94 = 2
;   double DOUBLE_00653a9c = 20
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_charactr.cpp_CCharacter_FUN_0042e840
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1680
        ;   Label: core_stranger.cpp_CStranger_FUN_005c1680
    PUSH ESI                            ; 005c1681
    PUSH EDI                            ; 005c1682
    PUSH EBP                            ; 005c1683
    MOV EBP,ESP                         ; 005c1684
    SUB ESP,0x160                       ; 005c1686
    AND ESP,0xfffffff8                  ; 005c168c
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c168f
    FLD float ptr [ESI + 0x1fc40]       ; 005c1692
    FLDZ                                ; 005c1698
    FCOMPP                              ; 005c169a
    FNSTSW AX                           ; 005c169c
    SAHF                                ; 005c169e
    JC 0x005c16ab                       ; 005c169f | LAB_005c16ab
        ;   XREF to: 005c16ab (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI + 0x1fba0]   ; 005c16a1
    TEST EDX,EDX                        ; 005c16a7
    JZ 0x005c16b4                       ; 005c16a9 | LAB_005c16b4
        ;   XREF to: 005c16b4 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005c16ab
        ;   Label: LAB_005c16ab
    MOV ESP,EBP                         ; 005c16ad
    POP EBP                             ; 005c16af
    POP EDI                             ; 005c16b0
    POP ESI                             ; 005c16b1
    POP EBX                             ; 005c16b2
    RET                                 ; 005c16b3
    PUSH EDX                            ; 005c16b4
        ;   Label: LAB_005c16b4
    PUSH ESI                            ; 005c16b5
    CALL core_charactr.cpp_CCharacter_FUN_0042e840 ; 005c16b6 | undefined core_charactr.cpp_CCharacter_FUN_0042e840()
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x164],EAX     ; 005c16bb
    FLD float ptr [ESP + 0x164]         ; 005c16c2
    ADD ESP,0x8                         ; 005c16c9
    FCOMP double ptr [0x00653a7c]       ; 005c16cc | double DOUBLE_00653a7c
    FNSTSW AX                           ; 005c16d2
    SAHF                                ; 005c16d4
    JC 0x005c16ab                       ; 005c16d5 | LAB_005c16ab
        ;   XREF to: 005c16ab (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005c16d7
    LEA EAX,[ESI + 0x158]               ; 005c16d9
    PUSH EAX                            ; 005c16df
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005c16e0 | float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x164],EAX     ; 005c16e5
    FLD float ptr [ESP + 0x164]         ; 005c16ec
    FLD1                                ; 005c16f3
    ADD ESP,0x8                         ; 005c16f5
    FCOMPP                              ; 005c16f8
    FNSTSW AX                           ; 005c16fa
    SAHF                                ; 005c16fc
    JA 0x005c16ab                       ; 005c16fd | LAB_005c16ab
        ;   XREF to: 005c16ab (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESI + 0x24b4]    ; 005c16ff
    TEST ECX,ECX                        ; 005c1705
    JNZ 0x005c16ab                      ; 005c1707 | LAB_005c16ab
        ;   XREF to: 005c16ab (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x24f8],0x0    ; 005c1709
    JNZ 0x005c16ab                      ; 005c1710 | LAB_005c16ab
        ;   XREF to: 005c16ab (CONDITIONAL_JUMP)
    MOV EDI,0x40800000                  ; 005c1712
    MOV dword ptr [ESP + 0x154],ECX     ; 005c1717
    LEA EAX,[ESI + 0x20]                ; 005c171e
    MOV dword ptr [ESP + 0x158],ECX     ; 005c1721
    MOV dword ptr [ESP + 0x148],EDI     ; 005c1728
    MOV dword ptr [ESP + 0x14c],EAX     ; 005c172f
    MOV EAX,[0x006810c8]                ; 005c1736 | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_005c1736
    MOV EDX,dword ptr [ESP + 0x154]     ; 005c173b
    CMP EDX,dword ptr [EAX + 0x14d154]  ; 005c1742 | g_CDemonSetInstance.actor_list_ptr
    JGE 0x005c1af5                      ; 005c1748 | LAB_005c1af5
        ;   XREF to: 005c1af5 (CONDITIONAL_JUMP)
    ADD EAX,dword ptr [ESP + 0x158]     ; 005c174e
    MOV EBX,dword ptr [EAX + 0x14d158]  ; 005c1755 | g_CDemonSetInstance.actor_list_data[0]
    PUSH EBX                            ; 005c175b
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c175c
    CALL dword ptr [EAX + 0x8c]         ; 005c1762
    ADD ESP,0x4                         ; 005c1768
    TEST EAX,EAX                        ; 005c176b
    JZ 0x005c1acf                       ; 005c176d | LAB_005c1acf
        ;   XREF to: 005c1acf (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x154]     ; 005c1773
        ;   Label: default
    MOV ECX,dword ptr [ESP + 0x158]     ; 005c177a
    INC EBX                             ; 005c1781
    ADD ECX,0x4                         ; 005c1782
    MOV dword ptr [ESP + 0x154],EBX     ; 005c1785
    MOV dword ptr [ESP + 0x158],ECX     ; 005c178c
    JMP 0x005c1736                      ; 005c1793 | LAB_005c1736
        ;   XREF to: 005c1736 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESI + 0x24f8]    ; 005c1795
        ;   Label: caseD_2
    TEST EDI,EDI                        ; 005c179b
    JNZ 0x005c1773                      ; 005c179d | default
        ;   XREF to: 005c1773 (CONDITIONAL_JUMP)
    MOV EDX,0x40400000                  ; 005c179f
    MOV ECX,0x40000000                  ; 005c17a4
    LEA EAX,[ESP + 0x64]                ; 005c17a9
    MOV dword ptr [ESP + 0x64],EDI      ; 005c17ad
    MOV dword ptr [ESP + 0x68],EDX      ; 005c17b1
    LEA EDX,[ESP + 0x34]                ; 005c17b5
    MOV dword ptr [ESP + 0x6c],ECX      ; 005c17b9
    CMP EDX,EAX                         ; 005c17bd
    JZ 0x005c17d2                       ; 005c17bf | LAB_005c17d2
        ;   XREF to: 005c17d2 (CONDITIONAL_JUMP)
    MOV EAX,0x40400000                  ; 005c17c1
    MOV dword ptr [ESP + 0x3c],ECX      ; 005c17c6
    MOV dword ptr [ESP + 0x34],EDI      ; 005c17ca
    MOV dword ptr [ESP + 0x38],EAX      ; 005c17ce
    LEA EAX,[ESP + 0x34]                ; 005c17d2
        ;   Label: LAB_005c17d2
    PUSH EAX                            ; 005c17d6
    LEA EAX,[ESP + 0xe0]                ; 005c17d7
    PUSH EAX                            ; 005c17de
    PUSH ESI                            ; 005c17df
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c17e0 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c17e5
    LEA EDX,[ESP + 0x1c]                ; 005c17e8
    PUSH EDX                            ; 005c17ec
    MOV EDI,EAX                         ; 005c17ed
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c17ef
    PUSH EBX                            ; 005c17f5
    CALL dword ptr [EAX + 0x14]         ; 005c17f6
    LEA EDX,[EAX + 0xc]                 ; 005c17f9
    FLD float ptr [EAX]                 ; 005c17fc
    FADD float ptr [EDX]                ; 005c17fe
    ADD ESP,0x8                         ; 005c1800
    FST float ptr [ESP + 0xa0]          ; 005c1803
    FLD float ptr [EAX + 0x4]           ; 005c180a
    FADD float ptr [EDX + 0x4]          ; 005c180d
    FXCH                                ; 005c1810
    FLD float ptr [0x00653a84]          ; 005c1812 | float FLOAT_00653a84
    FXCH                                ; 005c1818
    FMUL ST1                            ; 005c181a
    FXCH ST2                            ; 005c181c
    FST float ptr [ESP + 0xa4]          ; 005c181e
    FMUL ST1                            ; 005c1825
    FLD float ptr [EAX + 0x8]           ; 005c1827
    FADD float ptr [EDX + 0x8]          ; 005c182a
    LEA EAX,[ESP + 0x118]               ; 005c182d
    FST float ptr [ESP + 0xa8]          ; 005c1834
    FMULP ST2                           ; 005c183b
    PUSH EAX                            ; 005c183d
    LEA EAX,[ESP + 0x44]                ; 005c183e
    FXCH ST2                            ; 005c1842
    FSTP float ptr [ESP + 0x11c]        ; 005c1844
    PUSH EAX                            ; 005c184b
    FXCH                                ; 005c184c
    FSTP float ptr [ESP + 0x124]        ; 005c184e
    PUSH EBX                            ; 005c1855
    FSTP float ptr [ESP + 0x12c]        ; 005c1856
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c185d | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    FLD float ptr [EAX]                 ; 005c1862
    FSUB float ptr [EDI]                ; 005c1864
    ADD ESP,0xc                         ; 005c1866
    FSTP float ptr [ESP + 0x70]         ; 005c1869
    FLD float ptr [EAX + 0x4]           ; 005c186d
    FSUB float ptr [EDI + 0x4]          ; 005c1870
    FST float ptr [ESP + 0x74]          ; 005c1873
    FLD float ptr [EAX + 0x8]           ; 005c1877
    FXCH                                ; 005c187a
    FABS                                ; 005c187c
    FXCH                                ; 005c187e
    FSUB float ptr [EDI + 0x8]          ; 005c1880
    FSTP float ptr [ESP + 0x78]         ; 005c1883
    FCOMP double ptr [0x00653aa4]       ; 005c1887 | double DOUBLE_00653aa4
    FNSTSW AX                           ; 005c188d
    SAHF                                ; 005c188f
    JA 0x005c1773                       ; 005c1890 | default
        ;   XREF to: 005c1773 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x78]          ; 005c1896
    FMUL ST0                            ; 005c189a
    FLD float ptr [ESP + 0x70]          ; 005c189c
    FMUL ST0                            ; 005c18a0
    FADDP                               ; 005c18a2
    FST float ptr [ESP + 0x150]         ; 005c18a4
    FCOMP float ptr [ESP + 0x148]       ; 005c18ab
    FNSTSW AX                           ; 005c18b2
    SAHF                                ; 005c18b4
    JA 0x005c1773                       ; 005c18b5 | default
        ;   XREF to: 005c1773 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x18]      ; 005c18bb
    PUSH EDX                            ; 005c18be
    PUSH EBX                            ; 005c18bf
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005c18c0 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c18c5
    TEST EAX,EAX                        ; 005c18c8
    JZ 0x005c1773                       ; 005c18ca | default
        ;   XREF to: 005c1773 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x150]     ; 005c18d0
    MOV dword ptr [ESP + 0x148],EAX     ; 005c18d7
    MOV EAX,dword ptr [ESP + 0x144]     ; 005c18de
    MOV dword ptr [ESI + 0x1fba0],EBX   ; 005c18e5
    MOV dword ptr [ESP + 0x140],EAX     ; 005c18eb
    JMP 0x005c1773                      ; 005c18f2 | default
        ;   XREF to: 005c1773 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x24f8],0x0    ; 005c18f7
        ;   Label: caseD_4
    JNZ 0x005c1773                      ; 005c18fe | default
        ;   XREF to: 005c1773 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005c1904
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c1905
    PUSH EBX                            ; 005c190b
    CALL dword ptr [EAX + 0x7c]         ; 005c190c
    ADD ESP,0x8                         ; 005c190f
    CMP EAX,0x4                         ; 005c1912
    SETZ AL                             ; 005c1915
    AND EAX,0xff                        ; 005c1918
    JZ 0x005c197a                       ; 005c191d | LAB_005c197a
        ;   XREF to: 005c197a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005c191f
    PUSH EAX                            ; 005c1926
    LEA EAX,[ESP + 0xd4]                ; 005c1927
    PUSH EAX                            ; 005c192e
    PUSH EBX                            ; 005c192f
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c1930 | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c1935
    FLD float ptr [ESP + 0xd0]          ; 005c1938
    FABS                                ; 005c193f
    FLD1                                ; 005c1941
    FCOMPP                              ; 005c1943
    FNSTSW AX                           ; 005c1945
    SAHF                                ; 005c1947
    JC 0x005c1773                       ; 005c1948 | default
        ;   XREF to: 005c1773 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xd0]                ; 005c194e
    PUSH EAX                            ; 005c1955
    LEA EAX,[ESP + 0xec]                ; 005c1956
    PUSH EAX                            ; 005c195d
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005c195e | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    FLD float ptr [EAX + 0x4]           ; 005c1963
    FABS                                ; 005c1966
    ADD ESP,0x8                         ; 005c1968
    FCOMP double ptr [0x00653a9c]       ; 005c196b | double DOUBLE_00653a9c
    FNSTSW AX                           ; 005c1971
    SAHF                                ; 005c1973
    JA 0x005c1773                       ; 005c1974 | default
        ;   XREF to: 005c1773 (CONDITIONAL_JUMP)
    MOV ECX,0x40400000                  ; 005c197a
        ;   Label: LAB_005c197a
    MOV EDI,0x40000000                  ; 005c197f
    XOR EDX,EDX                         ; 005c1984
    LEA EAX,[ESP + 0x124]               ; 005c1986
    MOV dword ptr [ESP + 0x124],EDX     ; 005c198d
    MOV dword ptr [ESP + 0x128],ECX     ; 005c1994
    LEA EDX,[ESP + 0x34]                ; 005c199b
    MOV dword ptr [ESP + 0x12c],EDI     ; 005c199f
    CMP EDX,EAX                         ; 005c19a6
    JZ 0x005c17d2                       ; 005c19a8 | LAB_005c17d2
        ;   XREF to: 005c17d2 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x38],ECX      ; 005c19ae
    XOR EAX,EAX                         ; 005c19b2
    MOV dword ptr [ESP + 0x3c],EDI      ; 005c19b4
    MOV dword ptr [ESP + 0x34],EAX      ; 005c19b8
    JMP 0x005c17d2                      ; 005c19bc | LAB_005c17d2
        ;   XREF to: 005c17d2 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x24b4],0x0    ; 005c19c1
        ;   Label: caseD_1
    JNZ 0x005c1773                      ; 005c19c8 | default
        ;   XREF to: 005c1773 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x14c]     ; 005c19ce
    PUSH EDI                            ; 005c19d5
    LEA EAX,[ESP + 0xf8]                ; 005c19d6
    PUSH EAX                            ; 005c19dd
    PUSH EBX                            ; 005c19de
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c19df | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c19e4
    FLD float ptr [ESP + 0xf8]          ; 005c19e7
    FMUL ST0                            ; 005c19ee
    FLD float ptr [ESP + 0xf4]          ; 005c19f0
    FMUL ST0                            ; 005c19f7
    FADDP                               ; 005c19f9
    FLD float ptr [ESP + 0xfc]          ; 005c19fb
    FMUL ST0                            ; 005c1a02
    FADDP                               ; 005c1a04
    FSQRT                               ; 005c1a06
    FST float ptr [ESP]                 ; 005c1a08
    FLDZ                                ; 005c1a0b
    FCOMPP                              ; 005c1a0d
    FNSTSW AX                           ; 005c1a0f
    SAHF                                ; 005c1a11
    JNC 0x005c1ab6                      ; 005c1a12 | LAB_005c1ab6
        ;   XREF to: 005c1ab6 (CONDITIONAL_JUMP)
    FLD1                                ; 005c1a18
    FLD float ptr [ESP + 0xf4]          ; 005c1a1a
    FXCH                                ; 005c1a21
    FDIV float ptr [ESP]                ; 005c1a23
    FXCH                                ; 005c1a26
    FMUL ST1                            ; 005c1a28
    FLD float ptr [ESP + 0xf8]          ; 005c1a2a
    FMUL ST2                            ; 005c1a31
    FLD float ptr [ESP + 0xfc]          ; 005c1a33
    FMULP ST3                           ; 005c1a3a
    FXCH                                ; 005c1a3c
    FSTP float ptr [ESP + 0xf4]         ; 005c1a3e
    FSTP float ptr [ESP + 0xf8]         ; 005c1a45
    FSTP float ptr [ESP + 0xfc]         ; 005c1a4c
    FLD float ptr [ESP + 0xfc]          ; 005c1a53
        ;   Label: LAB_005c1a53
    FLDZ                                ; 005c1a5a
    FCOMPP                              ; 005c1a5c
    FNSTSW AX                           ; 005c1a5e
    SAHF                                ; 005c1a60
    JC 0x005c1773                       ; 005c1a61 | default
        ;   XREF to: 005c1773 (CONDITIONAL_JUMP)
    MOV EAX,0x40400000                  ; 005c1a67
    MOV EDX,0x40000000                  ; 005c1a6c
    XOR EDI,EDI                         ; 005c1a71
    MOV dword ptr [ESP + 0xb0],EAX      ; 005c1a73
    MOV dword ptr [ESP + 0xb4],EDX      ; 005c1a7a
    LEA EDX,[ESP + 0xac]                ; 005c1a81
    LEA EAX,[ESP + 0x34]                ; 005c1a88
    MOV dword ptr [ESP + 0xac],EDI      ; 005c1a8c
    CMP EAX,EDX                         ; 005c1a93
    JZ 0x005c17d2                       ; 005c1a95 | LAB_005c17d2
        ;   XREF to: 005c17d2 (CONDITIONAL_JUMP)
    MOV EAX,0x40000000                  ; 005c1a9b
    MOV dword ptr [ESP + 0x34],EDI      ; 005c1aa0
    MOV EDI,0x40400000                  ; 005c1aa4
    MOV dword ptr [ESP + 0x3c],EAX      ; 005c1aa9
    MOV dword ptr [ESP + 0x38],EDI      ; 005c1aad
    JMP 0x005c17d2                      ; 005c1ab1 | LAB_005c17d2
        ;   XREF to: 005c17d2 (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005c1ab6
        ;   Label: LAB_005c1ab6
    MOV dword ptr [ESP + 0xf8],EAX      ; 005c1ab8
    MOV dword ptr [ESP + 0xf4],EAX      ; 005c1abf
    MOV dword ptr [ESP + 0xfc],EAX      ; 005c1ac6
    JMP 0x005c1a53                      ; 005c1acd | LAB_005c1a53
        ;   XREF to: 005c1a53 (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 005c1acf
        ;   Label: LAB_005c1acf
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c1ad0
    PUSH EBX                            ; 005c1ad6
    CALL dword ptr [EAX + 0x7c]         ; 005c1ad7
    ADD ESP,0x8                         ; 005c1ada
    MOV dword ptr [ESP + 0x144],EAX     ; 005c1add
    DEC EAX                             ; 005c1ae4
    CMP EAX,0x3                         ; 005c1ae5
    JA 0x005c1773                       ; 005c1ae8 | default
        ;   XREF to: 005c1773 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x5c165c]  ; 005c1aee | void * switchdataD_005c165c
        ;   Label: switchD
    MOV EBX,dword ptr [ESI + 0x1fba0]   ; 005c1af5
        ;   Label: LAB_005c1af5
    TEST EBX,EBX                        ; 005c1afb
    JZ 0x005c16ab                       ; 005c1afd | LAB_005c16ab
        ;   XREF to: 005c16ab (CONDITIONAL_JUMP)
    LEA EDX,[ESP + 0x4]                 ; 005c1b03
    PUSH EDX                            ; 005c1b07
    MOV EAX,EBX                         ; 005c1b08
    MOV EBX,dword ptr [EBX + 0x154]     ; 005c1b0a
    PUSH EAX                            ; 005c1b10
    CALL dword ptr [EBX + 0x14]         ; 005c1b11
    ADD ESP,0x8                         ; 005c1b14
    LEA EDX,[ESI + 0x1fca4]             ; 005c1b17
    MOV EBX,EAX                         ; 005c1b1d
    MOV EDI,EDX                         ; 005c1b1f
    CMP EDX,EAX                         ; 005c1b21
    JZ 0x005c1b35                       ; 005c1b23 | LAB_005c1b35
        ;   XREF to: 005c1b35 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX]             ; 005c1b25
    MOV dword ptr [EDX],ECX             ; 005c1b27
    MOV ECX,dword ptr [EAX + 0x4]       ; 005c1b29
    MOV dword ptr [EDX + 0x4],ECX       ; 005c1b2c
    MOV ECX,dword ptr [EAX + 0x8]       ; 005c1b2f
    MOV dword ptr [EDX + 0x8],ECX       ; 005c1b32
    LEA EAX,[EBX + 0xc]                 ; 005c1b35
        ;   Label: LAB_005c1b35
    LEA EDX,[EDI + 0xc]                 ; 005c1b38
    CMP EDX,EAX                         ; 005c1b3b
    JZ 0x005c1b4f                       ; 005c1b3d | LAB_005c1b4f
        ;   XREF to: 005c1b4f (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX]             ; 005c1b3f
    MOV dword ptr [EDX],ECX             ; 005c1b41
    MOV ECX,dword ptr [EAX + 0x4]       ; 005c1b43
    MOV dword ptr [EDX + 0x4],ECX       ; 005c1b46
    MOV ECX,dword ptr [EAX + 0x8]       ; 005c1b49
    MOV dword ptr [EDX + 0x8],ECX       ; 005c1b4c
    LEA EDX,[ESI + 0x1fca4]             ; 005c1b4f
        ;   Label: LAB_005c1b4f
    LEA EAX,[ESI + 0x1fcb0]             ; 005c1b55
    FLD float ptr [EDX]                 ; 005c1b5b
    FADD float ptr [EAX]                ; 005c1b5d
    FST float ptr [ESP + 0x100]         ; 005c1b5f
    FLD float ptr [EDX + 0x4]           ; 005c1b66
    FADD float ptr [EAX + 0x4]          ; 005c1b69
    FXCH                                ; 005c1b6c
    FLD float ptr [0x00653a84]          ; 005c1b6e | float FLOAT_00653a84
    FXCH                                ; 005c1b74
    FMUL ST1                            ; 005c1b76
    FXCH ST2                            ; 005c1b78
    FST float ptr [ESP + 0x104]         ; 005c1b7a
    FLD float ptr [EDX + 0x8]           ; 005c1b81
    FADD float ptr [EAX + 0x8]          ; 005c1b84
    FXCH                                ; 005c1b87
    FMUL ST2                            ; 005c1b89
    FXCH                                ; 005c1b8b
    FST float ptr [ESP + 0x108]         ; 005c1b8d
    FMULP ST2                           ; 005c1b94
    LEA EAX,[ESP + 0x130]               ; 005c1b96
    FXCH ST2                            ; 005c1b9d
    FSTP float ptr [ESP + 0x130]        ; 005c1b9f
    PUSH EAX                            ; 005c1ba6
    LEA EAX,[ESP + 0x8c]                ; 005c1ba7
    FXCH                                ; 005c1bae
    FSTP float ptr [ESP + 0x138]        ; 005c1bb0
    PUSH EAX                            ; 005c1bb7
    FSTP float ptr [ESP + 0x140]        ; 005c1bb8
    MOV EDI,dword ptr [ESI + 0x1fba0]   ; 005c1bbf
    PUSH EDI                            ; 005c1bc5
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c1bc6 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c1bcb
    PUSH EAX                            ; 005c1bce
    LEA EAX,[ESP + 0x98]                ; 005c1bcf
    PUSH EAX                            ; 005c1bd6
    PUSH ESI                            ; 005c1bd7
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c1bd8 | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    LEA EDX,[ESI + 0x1fc98]             ; 005c1bdd
    ADD ESP,0xc                         ; 005c1be3
    CMP EDX,EAX                         ; 005c1be6
    JZ 0x005c1bfa                       ; 005c1be8 | LAB_005c1bfa
        ;   XREF to: 005c1bfa (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX]             ; 005c1bea
    MOV dword ptr [EDX],ECX             ; 005c1bec
    MOV ECX,dword ptr [EAX + 0x4]       ; 005c1bee
    MOV dword ptr [EDX + 0x4],ECX       ; 005c1bf1
    MOV ECX,dword ptr [EAX + 0x8]       ; 005c1bf4
    MOV dword ptr [EDX + 0x8],ECX       ; 005c1bf7
    MOV EAX,dword ptr [ESP + 0x140]     ; 005c1bfa
        ;   Label: LAB_005c1bfa
    DEC EAX                             ; 005c1c01
    CMP EAX,0x3                         ; 005c1c02
    JA 0x005c1ecb                       ; 005c1c05 | default
        ;   XREF to: 005c1ecb (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x5c166c]  ; 005c1c0b | void * switchdataD_005c166c
        ;   Label: switchD
    PUSH 0x1                            ; 005c1c12
        ;   Label: caseD_1
    PUSH 0x1b                           ; 005c1c14
    LEA EAX,[ESI + 0x158]               ; 005c1c16
    PUSH EAX                            ; 005c1c1c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c1c1d | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c1c22
    MOV EDX,dword ptr [ESI + 0x1fba0]   ; 005c1c25
    PUSH EDX                            ; 005c1c2b
    PUSH 0x653a2f                       ; 005c1c2c | = "Rummaging %s\n" | s_Rummaging_s_00653a2f = Rummaging %s

    MOV ECX,dword ptr [0x0066e8e0]      ; 005c1c31 | CConsole * g_CConsolePtr
        ;   Label: LAB_005c1c31
    PUSH ECX                            ; 005c1c37 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005c1c38 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   Label: LAB_005c1c38
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c1c3d
    MOV dword ptr [ESI + 0x1fc40],0x40800000 ; 005c1c40
        ;   Label: LAB_005c1c40
    MOV EAX,0x1                         ; 005c1c4a
    MOV dword ptr [ESI + 0x1fc38],0x4   ; 005c1c4f
    MOV ESP,EBP                         ; 005c1c59
    POP EBP                             ; 005c1c5b
    POP EDI                             ; 005c1c5c
    POP ESI                             ; 005c1c5d
    POP EBX                             ; 005c1c5e
    RET                                 ; 005c1c5f
    MOV EAX,dword ptr [ESI + 0x1fba0]   ; 005c1c60
        ;   Label: caseD_4
    TEST EAX,EAX                        ; 005c1c66
    JNZ 0x005c1d99                      ; 005c1c68 | LAB_005c1d99
        ;   XREF to: 005c1d99 (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x1fc9c]       ; 005c1c6e
        ;   Label: LAB_005c1c6e
    LEA EBX,[ESI + 0x158]               ; 005c1c74
    FCOMP double ptr [0x00653a94]       ; 005c1c7a | double DOUBLE_00653a94
    FNSTSW AX                           ; 005c1c80
    SAHF                                ; 005c1c82
    JBE 0x005c1ea6                      ; 005c1c83 | LAB_005c1ea6
        ;   XREF to: 005c1ea6 (CONDITIONAL_JUMP)
    MOV EAX,[0x03f6bb04]                ; 005c1c89 | undefined4 DAT_03f6bb04
    PUSH EAX                            ; 005c1c8e
    LEA EAX,[ESP + 0xbc]                ; 005c1c8f
    PUSH EAX                            ; 005c1c96
    PUSH EBX                            ; 005c1c97
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005c1c98 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c1c9d
    MOV EDX,dword ptr [0x03f6badc]      ; 005c1ca0 | undefined4 DAT_03f6badc
    PUSH EDX                            ; 005c1ca6
    LEA EAX,[ESP + 0xc8]                ; 005c1ca7
    PUSH EAX                            ; 005c1cae
    PUSH EBX                            ; 005c1caf
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005c1cb0 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c1cb5
    FLD float ptr [ESP + 0xb8]          ; 005c1cb8
    FLD float ptr [ESP + 0xbc]          ; 005c1cbf
    FSUB float ptr [ESP + 0xc8]         ; 005c1cc6
    FXCH                                ; 005c1ccd
    FSUB float ptr [ESP + 0xc4]         ; 005c1ccf
    FXCH                                ; 005c1cd6
    FST float ptr [ESP + 0x110]         ; 005c1cd8
    FMUL float ptr [ESP + 0x110]        ; 005c1cdf
    FXCH                                ; 005c1ce6
    FST float ptr [ESP + 0x10c]         ; 005c1ce8
    FMUL float ptr [ESP + 0x10c]        ; 005c1cef
    FLD float ptr [ESP + 0xc0]          ; 005c1cf6
    FSUB float ptr [ESP + 0xcc]         ; 005c1cfd
    FXCH                                ; 005c1d04
    FADDP ST2,ST0                       ; 005c1d06
    FST float ptr [ESP + 0x114]         ; 005c1d08
    FMUL float ptr [ESP + 0x114]        ; 005c1d0f
    FADDP                               ; 005c1d16
    FSQRT                               ; 005c1d18
    LEA EAX,[ESI + 0x1fc98]             ; 005c1d1a
    FLD float ptr [ESP + 0xc4]          ; 005c1d20
    FSUB float ptr [EAX]                ; 005c1d27
    FLD float ptr [ESP + 0xc8]          ; 005c1d29
    FXCH                                ; 005c1d30
    FSTP float ptr [ESP + 0x4c]         ; 005c1d32
    FSUB float ptr [EAX + 0x4]          ; 005c1d36
    FST float ptr [ESP + 0x50]          ; 005c1d39
    FMUL float ptr [ESP + 0x50]         ; 005c1d3d
    FLD float ptr [ESP + 0x4c]          ; 005c1d41
    FMUL ST0                            ; 005c1d45
    FLD float ptr [ESP + 0xcc]          ; 005c1d47
    FSUB float ptr [EAX + 0x8]          ; 005c1d4e
    FXCH                                ; 005c1d51
    FADDP ST2,ST0                       ; 005c1d53
    FST float ptr [ESP + 0x54]          ; 005c1d55
    FMUL float ptr [ESP + 0x54]         ; 005c1d59
    FADDP                               ; 005c1d5d
    FSQRT                               ; 005c1d5f
    FSUBP                               ; 005c1d61
    FABS                                ; 005c1d63
    FCOMP double ptr [0x00653a94]       ; 005c1d65 | double DOUBLE_00653a94
    FNSTSW AX                           ; 005c1d6b
    SAHF                                ; 005c1d6d
    JA 0x005c1e79                       ; 005c1d6e | LAB_005c1e79
        ;   XREF to: 005c1e79 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005c1d74
    PUSH 0x15                           ; 005c1d76
    PUSH EBX                            ; 005c1d78
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c1d79 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c1d7e
    MOV ECX,dword ptr [ESI + 0x1fba0]   ; 005c1d81
    PUSH ECX                            ; 005c1d87
    PUSH 0x6539fa                       ; 005c1d88 | = "Picking up %s waist level\n" | s_Picking_up_s_waist_level_006539fa = Picking up %s waist level

    MOV EBX,dword ptr [0x0066e8e0]      ; 005c1d8d | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EBX                            ; 005c1d93 | CConsole g_ConsolePtr
    JMP 0x005c1c38                      ; 005c1d94 | LAB_005c1c38
        ;   XREF to: 005c1c38 (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 005c1d99
        ;   Label: LAB_005c1d99
    MOV EDX,dword ptr [EAX + 0x154]     ; 005c1d9a
    PUSH EAX                            ; 005c1da0
    CALL dword ptr [EDX + 0x7c]         ; 005c1da1
    ADD ESP,0x8                         ; 005c1da4
    CMP EAX,0x4                         ; 005c1da7
    SETZ AL                             ; 005c1daa
    AND EAX,0xff                        ; 005c1dad
    JZ 0x005c1c6e                       ; 005c1db2 | LAB_005c1c6e
        ;   XREF to: 005c1c6e (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0x20]                ; 005c1db8
    PUSH EAX                            ; 005c1dbb
    LEA EAX,[ESP + 0x80]                ; 005c1dbc
    PUSH EAX                            ; 005c1dc3
    MOV EBX,dword ptr [ESI + 0x1fba0]   ; 005c1dc4
    PUSH EBX                            ; 005c1dca
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c1dcb | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    FLD float ptr [EAX + 0x8]           ; 005c1dd0
    FLDZ                                ; 005c1dd3
    ADD ESP,0xc                         ; 005c1dd5
    FCOMPP                              ; 005c1dd8
    FNSTSW AX                           ; 005c1dda
    SAHF                                ; 005c1ddc
    JNC 0x005c1e51                      ; 005c1ddd | LAB_005c1e51
        ;   XREF to: 005c1e51 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005c1ddf
    FLD float ptr [ESI + 0x1fc9c]       ; 005c1de4
        ;   Label: LAB_005c1de4
    LEA EDX,[ESI + 0x158]               ; 005c1dea
    MOV dword ptr [ESI + 0x1fc88],EAX   ; 005c1df0
    FCOMP double ptr [0x00653a8c]       ; 005c1df6 | double DOUBLE_00653a8c
    FNSTSW AX                           ; 005c1dfc
    SAHF                                ; 005c1dfe
    JBE 0x005c1e55                      ; 005c1dff | LAB_005c1e55
        ;   XREF to: 005c1e55 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005c1e01
    PUSH 0x18                           ; 005c1e03
    PUSH EDX                            ; 005c1e05
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c1e06 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [ESI + 0x1fba0]   ; 005c1e0b
    ADD ESP,0xc                         ; 005c1e11
    ADD EAX,0x20                        ; 005c1e14
    PUSH EAX                            ; 005c1e17
    LEA EAX,[ESP + 0x5c]                ; 005c1e18
    PUSH EAX                            ; 005c1e1c
    PUSH ESI                            ; 005c1e1d
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c1e1e | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    LEA EDX,[ESI + 0x1fc98]             ; 005c1e23
    ADD ESP,0xc                         ; 005c1e29
    CMP EDX,EAX                         ; 005c1e2c
    JZ 0x005c1e40                       ; 005c1e2e | LAB_005c1e40
        ;   XREF to: 005c1e40 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX]             ; 005c1e30
    MOV dword ptr [EDX],ECX             ; 005c1e32
    MOV ECX,dword ptr [EAX + 0x4]       ; 005c1e34
    MOV dword ptr [EDX + 0x4],ECX       ; 005c1e37
    MOV ECX,dword ptr [EAX + 0x8]       ; 005c1e3a
    MOV dword ptr [EDX + 0x8],ECX       ; 005c1e3d
    MOV EDX,dword ptr [ESI + 0x1fba0]   ; 005c1e40
        ;   Label: LAB_005c1e40
    PUSH EDX                            ; 005c1e46
    PUSH 0x6539a0                       ; 005c1e47 | = "Picking up heavy %s shelf\n" | s_Picking_up_heavy_s_shelf_006539a0 = Picking up heavy %s shelf

    JMP 0x005c1c31                      ; 005c1e4c | LAB_005c1c31
        ;   XREF to: 005c1c31 (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005c1e51
        ;   Label: LAB_005c1e51
    JMP 0x005c1de4                      ; 005c1e53 | LAB_005c1de4
        ;   XREF to: 005c1de4 (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 005c1e55
        ;   Label: LAB_005c1e55
    PUSH 0x17                           ; 005c1e57
    PUSH EDX                            ; 005c1e59
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c1e5a | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c1e5f
    MOV EDI,dword ptr [ESI + 0x1fba0]   ; 005c1e62
    PUSH EDI                            ; 005c1e68
    PUSH 0x6539bb                       ; 005c1e69 | = "Picking up heavy %s crate\n" | s_Picking_up_heavy_s_crate_006539bb = Picking up heavy %s crate

    MOV EAX,[0x0066e8e0]                ; 005c1e6e | CConsole * g_CConsolePtr
    PUSH EAX                            ; 005c1e73 | CConsole g_ConsolePtr
    JMP 0x005c1c38                      ; 005c1e74 | LAB_005c1c38
        ;   XREF to: 005c1c38 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESI + 0x1fba0]   ; 005c1e79
        ;   Label: LAB_005c1e79
    PUSH EDI                            ; 005c1e7f
    PUSH 0x6539d6                       ; 005c1e80 | = "%s out of reach - canceling pickup\n" | s_s_out_of_reach_canceling_006539d6 = %s out of reach - canceling pickup

    MOV EAX,[0x0066e8e0]                ; 005c1e85 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EAX                            ; 005c1e8a | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005c1e8b | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c1e90
    MOV dword ptr [ESI + 0x1fba0],0x0   ; 005c1e93
    XOR EAX,EAX                         ; 005c1e9d
    MOV ESP,EBP                         ; 005c1e9f
    POP EBP                             ; 005c1ea1
    POP EDI                             ; 005c1ea2
    POP ESI                             ; 005c1ea3
    POP EBX                             ; 005c1ea4
    RET                                 ; 005c1ea5
    PUSH 0x1                            ; 005c1ea6
        ;   Label: LAB_005c1ea6
    PUSH 0x13                           ; 005c1ea8
    PUSH EBX                            ; 005c1eaa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c1eab | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c1eb0
    MOV EBX,dword ptr [ESI + 0x1fba0]   ; 005c1eb3
    PUSH EBX                            ; 005c1eb9
    PUSH 0x653a15                       ; 005c1eba | = "Picking up %s off ground\n" | s_Picking_up_s_off_ground_00653a15 = Picking up %s off ground

    MOV EDI,dword ptr [0x0066e8e0]      ; 005c1ebf | CConsole * g_CConsolePtr
    PUSH EDI                            ; 005c1ec5 | CConsole g_ConsolePtr
    JMP 0x005c1c38                      ; 005c1ec6 | LAB_005c1c38
        ;   XREF to: 005c1c38 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x140]     ; 005c1ecb
        ;   Label: default
    PUSH ECX                            ; 005c1ed2
    MOV EAX,0x653a3d                    ; 005c1ed3 | = "..\\core\\stranger.cpp" | s_core_stranger_cpp_00653a3d = ..\core\stranger.cpp
    MOV EDX,0xd3a                       ; 005c1ed8
    PUSH 0x653a52                       ; 005c1edd | = "Hell froze - invalid pickUpType: %d" | s_Hell_froze_invalid_pickU_00653a52 = Hell froze - invalid pickUpType: %d
    MOV [0x02f0ca48],EAX                ; 005c1ee2 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005c1ee7 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005c1eed | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c1ef2
    JMP 0x005c1c40                      ; 005c1ef5 | LAB_005c1c40
        ;   XREF to: 005c1c40 (UNCONDITIONAL_JUMP)

