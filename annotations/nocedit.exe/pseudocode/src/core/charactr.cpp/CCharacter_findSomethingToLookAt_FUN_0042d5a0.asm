; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (CCharacter *this_ptr,float delta_time,int param_3)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   param_3
;
; XREF[1]:
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f51bb
;
; Referenced Globals:
;   TerminatedCString s_CHero_006173ca
;   TerminatedCString s_core_charactr_cpp_006173d0
;   TerminatedCString s_CCharacter_findSomething_006173e5
;   double DOUBLE_00617422 = 1.10000000000000
;   float FLOAT_0061742a = 5.5
;   double DOUBLE_00617432 = 1.39626340155556
;   double DOUBLE_0061743a = 0.785398163375000
;   float FLOAT_00617442 = 0.5
;   double DOUBLE_0061744a = 0.400000000000000
;   double DOUBLE_00617452 = 10
;   double DOUBLE_0061745a = 15
;   double DOUBLE_00617462 = 20
;   float FLOAT_0061746a = -1
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CCharacterClassInfo.name_hash
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d5a0
        ;   Label: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
    PUSH ESI                            ; 0042d5a1
    PUSH EDI                            ; 0042d5a2
    PUSH EBP                            ; 0042d5a3
    MOV EBP,ESP                         ; 0042d5a4
    SUB ESP,0xf0                        ; 0042d5a6
    AND ESP,0xfffffff8                  ; 0042d5ac
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042d5af
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0042d5b2
    PUSH ESI                            ; 0042d5b5
    MOV EAX,dword ptr [ESI + 0x154]     ; 0042d5b6
    CALL dword ptr [EAX + 0x120]        ; 0042d5bc
    ADD ESP,0x4                         ; 0042d5c2
    TEST EAX,EAX                        ; 0042d5c5
    JZ 0x0042d5ce                       ; 0042d5c7
        ;   XREF to: 0042d5ce (CONDITIONAL_JUMP)  ; LAB_0042d5ce
    MOV EBX,0x1                         ; 0042d5c9
    XOR EDX,EDX                         ; 0042d5ce
        ;   Label: LAB_0042d5ce
    MOV dword ptr [ESP + 0xe0],EDX      ; 0042d5d0
    TEST EBX,EBX                        ; 0042d5d7
    JZ 0x0042d62c                       ; 0042d5d9
        ;   XREF to: 0042d62c (CONDITIONAL_JUMP)  ; LAB_0042d62c
    MOV dword ptr [ESI + 0x25e8],EDX    ; 0042d5db
        ;   Label: LAB_0042d5db
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0042d5e1
        ;   Label: LAB_0042d5e1
    MOV dword ptr [ESI + 0x25d0],EAX    ; 0042d5e8
    TEST EAX,EAX                        ; 0042d5ee
    JNZ 0x0042da1e                      ; 0042d5f0
        ;   XREF to: 0042da1e (CONDITIONAL_JUMP)  ; LAB_0042da1e
    CMP dword ptr [ESI + 0x25d0],0x0    ; 0042d5f6
        ;   Label: LAB_0042d5f6
    JNZ 0x0042dc24                      ; 0042d5fd
        ;   XREF to: 0042dc24 (CONDITIONAL_JUMP)  ; LAB_0042dc24
    FLD float ptr [EBP + 0x18]          ; 0042d603
        ;   Label: LAB_0042d603
    FDIV float ptr [0x00617442]         ; 0042d606 | FLOAT_00617442
    FSUBR float ptr [ESI + 0x25e0]      ; 0042d60c
    FST float ptr [ESI + 0x25e0]        ; 0042d612
    FLDZ                                ; 0042d618
    FCOMPP                              ; 0042d61a
    FNSTSW AX                           ; 0042d61c
    SAHF                                ; 0042d61e
    JA 0x0042dbff                       ; 0042d61f
        ;   XREF to: 0042dbff (CONDITIONAL_JUMP)  ; LAB_0042dbff
    MOV ESP,EBP                         ; 0042d625
    POP EBP                             ; 0042d627
    POP EDI                             ; 0042d628
    POP ESI                             ; 0042d629
    POP EBX                             ; 0042d62a
    RET                                 ; 0042d62b
    MOV ECX,dword ptr [ESI + 0x25d4]    ; 0042d62c
        ;   Label: LAB_0042d62c
    TEST ECX,ECX                        ; 0042d632
    JZ 0x0042d63f                       ; 0042d634
        ;   XREF to: 0042d63f (CONDITIONAL_JUMP)  ; LAB_0042d63f
    MOV dword ptr [ESP + 0xe0],ECX      ; 0042d636
    JMP 0x0042d5db                      ; 0042d63d
        ;   XREF to: 0042d5db (UNCONDITIONAL_JUMP)  ; LAB_0042d5db
    FLD float ptr [ESI + 0x25e8]        ; 0042d63f
        ;   Label: LAB_0042d63f
    FLDZ                                ; 0042d645
    FCOMPP                              ; 0042d647
    FNSTSW AX                           ; 0042d649
    SAHF                                ; 0042d64b
    JNC 0x0042d66f                      ; 0042d64c
        ;   XREF to: 0042d66f (CONDITIONAL_JUMP)  ; LAB_0042d66f
    FLD float ptr [ESI + 0x25e8]        ; 0042d64e
    MOV EAX,dword ptr [ESI + 0x25d0]    ; 0042d654
    FSUB float ptr [EBP + 0x18]         ; 0042d65a
    MOV dword ptr [ESP + 0xe0],EAX      ; 0042d65d
    FSTP float ptr [ESI + 0x25e8]       ; 0042d664
    JMP 0x0042d5e1                      ; 0042d66a
        ;   XREF to: 0042d5e1 (UNCONDITIONAL_JUMP)  ; LAB_0042d5e1
    LEA EAX,[ESP + 0x5c]                ; 0042d66f
        ;   Label: LAB_0042d66f
    PUSH EAX                            ; 0042d673
    LEA EAX,[ESP + 0xa8]                ; 0042d674
    MOV EDI,0x40b00000                  ; 0042d67b
    PUSH EAX                            ; 0042d680
    MOV dword ptr [ESP + 0x64],EDX      ; 0042d681
    MOV dword ptr [ESP + 0x6c],EDX      ; 0042d685
    PUSH ESI                            ; 0042d689
    MOV dword ptr [ESP + 0x6c],EDI      ; 0042d68a
    XOR EDI,EDI                         ; 0042d68e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042d690
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042d695
    MOV dword ptr [ESP + 0xe8],EDI      ; 0042d698
    MOV EAX,[0x006810c8]                ; 0042d69f | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0042d69f
    CMP EDI,dword ptr [EAX + 0x14f098]  ; 0042d6a4 | g_CDemonSetInstance.damage_listener_count
    JGE 0x0042d9ea                      ; 0042d6aa
        ;   XREF to: 0042d9ea (CONDITIONAL_JUMP)  ; LAB_0042d9ea
    ADD EAX,dword ptr [ESP + 0xe8]      ; 0042d6b0
    MOV EBX,dword ptr [EAX + 0x14f09c]  ; 0042d6b7 | g_CDemonSetInstance.damage_listeners | DAT_03263318
    CMP EBX,ESI                         ; 0042d6bd
    JNZ 0x0042d6d5                      ; 0042d6bf
        ;   XREF to: 0042d6d5 (CONDITIONAL_JUMP)  ; LAB_0042d6d5
    MOV EBX,dword ptr [ESP + 0xe8]      ; 0042d6c1
        ;   Label: LAB_0042d6c1
    ADD EBX,0x4                         ; 0042d6c8
    INC EDI                             ; 0042d6cb
    MOV dword ptr [ESP + 0xe8],EBX      ; 0042d6cc
    JMP 0x0042d69f                      ; 0042d6d3
        ;   XREF to: 0042d69f (UNCONDITIONAL_JUMP)  ; LAB_0042d69f
    PUSH EBX                            ; 0042d6d5
        ;   Label: LAB_0042d6d5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042d6d6
    CALL dword ptr [EAX + 0x68]         ; 0042d6dc
    ADD ESP,0x4                         ; 0042d6df
    TEST EAX,EAX                        ; 0042d6e2
    JNZ 0x0042d6c1                      ; 0042d6e4
        ;   XREF to: 0042d6c1 (CONDITIONAL_JUMP)  ; LAB_0042d6c1
    PUSH EBX                            ; 0042d6e6
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042d6e7
    CALL dword ptr [EAX + 0x120]        ; 0042d6ed
    ADD ESP,0x4                         ; 0042d6f3
    MOV dword ptr [ESP + 0xe4],EAX      ; 0042d6f6
    TEST EAX,EAX                        ; 0042d6fd
    JNZ 0x0042d989                      ; 0042d6ff
        ;   XREF to: 0042d989 (CONDITIONAL_JUMP)  ; LAB_0042d989
    LEA EAX,[ESP + 0x14]                ; 0042d705
        ;   Label: LAB_0042d705
    LEA EDX,[EBX + 0x20]                ; 0042d709
    CMP EAX,EDX                         ; 0042d70c
    JZ 0x0042d724                       ; 0042d70e
        ;   XREF to: 0042d724 (CONDITIONAL_JUMP)  ; LAB_0042d724
    MOV EAX,dword ptr [EDX]             ; 0042d710
    MOV dword ptr [ESP + 0x14],EAX      ; 0042d712
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042d716
    MOV dword ptr [ESP + 0x18],EAX      ; 0042d719
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042d71d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042d720
    FLD float ptr [ESP + 0x18]          ; 0042d724
        ;   Label: LAB_0042d724
    FADD float ptr [0x0061742a]         ; 0042d728 | FLOAT_0061742a
    FSTP float ptr [ESP + 0x18]         ; 0042d72e
    FLD float ptr [ESP + 0x14]          ; 0042d732
        ;   Label: LAB_0042d732
    FLD float ptr [ESP + 0x18]          ; 0042d736
    FLD float ptr [ESP + 0x1c]          ; 0042d73a
    LEA EAX,[ESP + 0x50]                ; 0042d73e
    FXCH ST2                            ; 0042d742
    FSUB float ptr [ESP + 0xa4]         ; 0042d744
    FXCH                                ; 0042d74b
    FSUB float ptr [ESP + 0xa8]         ; 0042d74d
    PUSH EAX                            ; 0042d754
    FXCH ST2                            ; 0042d755
    FSUB float ptr [ESP + 0xb0]         ; 0042d757
    LEA EAX,[ESP + 0xb4]                ; 0042d75e
    FXCH                                ; 0042d765
    FSTP float ptr [ESP + 0x54]         ; 0042d767
    PUSH EAX                            ; 0042d76b
    FXCH                                ; 0042d76c
    FSTP float ptr [ESP + 0x5c]         ; 0042d76e
    PUSH ESI                            ; 0042d772
    FSTP float ptr [ESP + 0x64]         ; 0042d773
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 0042d777
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 0042d77c
    FLD float ptr [ESP + 0xb8]          ; 0042d77f
    FLDZ                                ; 0042d786
    FCOMPP                              ; 0042d788
    FNSTSW AX                           ; 0042d78a
    SAHF                                ; 0042d78c
    JA 0x0042d6c1                       ; 0042d78d
        ;   XREF to: 0042d6c1 (CONDITIONAL_JUMP)  ; LAB_0042d6c1
    FLD float ptr [ESP + 0xb4]          ; 0042d793
    FMUL ST0                            ; 0042d79a
    FLD float ptr [ESP + 0xb0]          ; 0042d79c
    FMUL ST0                            ; 0042d7a3
    FADDP                               ; 0042d7a5
    FLD float ptr [ESP + 0xb8]          ; 0042d7a7
    FMUL ST0                            ; 0042d7ae
    FADDP                               ; 0042d7b0
    FSTP float ptr [ESP + 0xdc]         ; 0042d7b2
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0042d7b9
    MOV dword ptr [ESP + 0x4],EAX       ; 0042d7c0
    CMP EAX,0x44610000                  ; 0042d7c4
    JG 0x0042d6c1                       ; 0042d7c9
        ;   XREF to: 0042d6c1 (CONDITIONAL_JUMP)  ; LAB_0042d6c1
    LEA EAX,[ESP + 0xb0]                ; 0042d7cf
    PUSH EAX                            ; 0042d7d6
    LEA EAX,[ESP + 0xc0]                ; 0042d7d7
    PUSH EAX                            ; 0042d7de
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0042d7df
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0042d7e4
    FLD float ptr [ESP + 0xc0]          ; 0042d7e7
    FABS                                ; 0042d7ee
    FCOMP double ptr [0x00617432]       ; 0042d7f0 | DOUBLE_00617432
    FNSTSW AX                           ; 0042d7f6
    SAHF                                ; 0042d7f8
    JA 0x0042d6c1                       ; 0042d7f9
        ;   XREF to: 0042d6c1 (CONDITIONAL_JUMP)  ; LAB_0042d6c1
    FLD float ptr [ESP + 0xbc]          ; 0042d7ff
    FABS                                ; 0042d806
    FCOMP double ptr [0x0061743a]       ; 0042d808 | DOUBLE_0061743a
    FNSTSW AX                           ; 0042d80e
    SAHF                                ; 0042d810
    JA 0x0042d6c1                       ; 0042d811
        ;   XREF to: 0042d6c1 (CONDITIONAL_JUMP)  ; LAB_0042d6c1
    MOV EAX,[0x02cf2bf0]                ; 0042d817 | g_CEnemyClassInfo.name_hash
    PUSH EAX                            ; 0042d81c
    MOV ECX,0x41200000                  ; 0042d81d
    PUSH EBX                            ; 0042d822
    MOV dword ptr [ESP + 0x8],ECX       ; 0042d823
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0042d827
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0042d82c
    TEST EAX,EAX                        ; 0042d82f
    JZ 0x0042d856                       ; 0042d831
        ;   XREF to: 0042d856 (CONDITIONAL_JUMP)  ; LAB_0042d856
    CMP dword ptr [ESP + 0xe4],0x0      ; 0042d833
    JNZ 0x0042d856                      ; 0042d83b
        ;   XREF to: 0042d856 (CONDITIONAL_JUMP)  ; LAB_0042d856
    MOV ECX,0x41f00000                  ; 0042d83d
    MOV EDX,dword ptr [EAX + 0xbe3c]    ; 0042d842
    MOV dword ptr [ESP],ECX             ; 0042d848
    CMP ESI,EDX                         ; 0042d84b
    JNZ 0x0042d856                      ; 0042d84d
        ;   XREF to: 0042d856 (CONDITIONAL_JUMP)  ; LAB_0042d856
    MOV dword ptr [ESP],0x42200000      ; 0042d84f
    FLD float ptr [ESP]                 ; 0042d856
        ;   Label: LAB_0042d856
    FCOMP double ptr [0x00617452]       ; 0042d859 | DOUBLE_00617452
    FNSTSW AX                           ; 0042d85f
    SAHF                                ; 0042d861
    JNC 0x0042d87d                      ; 0042d862
        ;   XREF to: 0042d87d (CONDITIONAL_JUMP)  ; LAB_0042d87d
    PUSH 0x6173ca                       ; 0042d864 | = "CHero"
    PUSH EBX                            ; 0042d869
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0042d86a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0042d86f
    TEST EAX,EAX                        ; 0042d872
    JZ 0x0042d87d                       ; 0042d874
        ;   XREF to: 0042d87d (CONDITIONAL_JUMP)  ; LAB_0042d87d
    MOV dword ptr [ESP],0x41700000      ; 0042d876
    FLD float ptr [ESP]                 ; 0042d87d
        ;   Label: LAB_0042d87d
    FCOMP double ptr [0x0061745a]       ; 0042d880 | DOUBLE_0061745a
    FNSTSW AX                           ; 0042d886
    SAHF                                ; 0042d888
    JNC 0x0042d89c                      ; 0042d889
        ;   XREF to: 0042d89c (CONDITIONAL_JUMP)  ; LAB_0042d89c
    CMP dword ptr [ESP + 0xe4],0x0      ; 0042d88b
    JLE 0x0042d89c                      ; 0042d893
        ;   XREF to: 0042d89c (CONDITIONAL_JUMP)  ; LAB_0042d89c
    MOV dword ptr [ESP],0x41700000      ; 0042d895
    FLD float ptr [ESP + 0x4]           ; 0042d89c
        ;   Label: LAB_0042d89c
    FSQRT                               ; 0042d8a0
    FLD double ptr [0x00617462]         ; 0042d8a2 | DOUBLE_00617462
    FXCH                                ; 0042d8a8
    FADD ST0,ST1                        ; 0042d8aa
    FDIVP                               ; 0042d8ac
    FLD float ptr [ESP]                 ; 0042d8ae
    FXCH                                ; 0042d8b1
    FMUL ST1                            ; 0042d8b3
    MOV EAX,dword ptr [ESI + 0x25d0]    ; 0042d8b5
    FSTP ST1                            ; 0042d8bb
    FSTP float ptr [ESP]                ; 0042d8bd
    CMP EBX,EAX                         ; 0042d8c0
    JNZ 0x0042d8d4                      ; 0042d8c2
        ;   XREF to: 0042d8d4 (CONDITIONAL_JUMP)  ; LAB_0042d8d4
    FLD float ptr [ESP]                 ; 0042d8c4
    FLD ST0                             ; 0042d8c7
    FMUL double ptr [0x00617422]        ; 0042d8c9 | DOUBLE_00617422
    FSTP ST1                            ; 0042d8cf
    FSTP float ptr [ESP]                ; 0042d8d1
    FLD float ptr [ESP]                 ; 0042d8d4
        ;   Label: LAB_0042d8d4
    FCOMP float ptr [0x0061746a]        ; 0042d8d7 | FLOAT_0061746a
    FNSTSW AX                           ; 0042d8dd
    SAHF                                ; 0042d8df
    JC 0x0042d6c1                       ; 0042d8e0
        ;   XREF to: 0042d6c1 (CONDITIONAL_JUMP)  ; LAB_0042d6c1
    MOV EDX,dword ptr [0x006810c8]      ; 0042d8e6 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 0042d8ec | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 0042d8ed
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0042d8f2
    PUSH ESI                            ; 0042d8f5
    MOV ECX,dword ptr [0x006810c8]      ; 0042d8f6 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 0042d8fc | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0042d8fd
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0042d902
    PUSH EBX                            ; 0042d905
    MOV EAX,[0x006810c8]                ; 0042d906 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 0042d90b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0042d90c
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0042d911
    PUSH 0x2                            ; 0042d914
    MOV EDX,dword ptr [0x006810c8]      ; 0042d916 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 0042d91c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 0042d91d
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0042d922
    LEA EAX,[ESP + 0x14]                ; 0042d925
    PUSH EAX                            ; 0042d929
    LEA EAX,[ESP + 0xa8]                ; 0042d92a
    PUSH EAX                            ; 0042d931
    MOV ECX,dword ptr [0x006810c8]      ; 0042d932 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 0042d938 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460 ; 0042d939
        ;   XREF to: 00572460 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0042d93e
    TEST EAX,EAX                        ; 0042d941
    JNZ 0x0042d6c1                      ; 0042d943
        ;   XREF to: 0042d6c1 (CONDITIONAL_JUMP)  ; LAB_0042d6c1
    LEA EAX,[ESP + 0xbc]                ; 0042d949
    LEA EDX,[ESP + 0x2c]                ; 0042d950
    MOV dword ptr [ESP + 0xe0],EBX      ; 0042d954
    CMP EDX,EAX                         ; 0042d95b
    JZ 0x0042d6c1                       ; 0042d95d
        ;   XREF to: 0042d6c1 (CONDITIONAL_JUMP)  ; LAB_0042d6c1
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0042d963
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042d96a
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0042d96e
    MOV dword ptr [ESP + 0x30],EAX      ; 0042d975
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0042d979
    MOV dword ptr [ESP + 0x34],EAX      ; 0042d980
    JMP 0x0042d6c1                      ; 0042d984
        ;   XREF to: 0042d6c1 (UNCONDITIONAL_JUMP)  ; LAB_0042d6c1
    LEA EDX,[EBX + 0x158]               ; 0042d989
        ;   Label: LAB_0042d989
    LEA EAX,[EBX + 0x23b8]              ; 0042d98f
    CMP byte ptr [EAX],0x0              ; 0042d995
    JZ 0x0042d705                       ; 0042d998
        ;   XREF to: 0042d705 (CONDITIONAL_JUMP)  ; LAB_0042d705
    PUSH 0x0                            ; 0042d99e
    LEA EAX,[ESP + 0x84]                ; 0042d9a0
    PUSH EAX                            ; 0042d9a7
    PUSH EDX                            ; 0042d9a8
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0042d9a9
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0042d9ae
    PUSH EAX                            ; 0042d9b1
    LEA EAX,[ESP + 0x9c]                ; 0042d9b2
    PUSH EAX                            ; 0042d9b9
    PUSH EBX                            ; 0042d9ba
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042d9bb
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 0042d9c0
    LEA EAX,[ESP + 0x20]                ; 0042d9c2
    ADD ESP,0xc                         ; 0042d9c6
    CMP EAX,EDX                         ; 0042d9c9
    JZ 0x0042d732                       ; 0042d9cb
        ;   XREF to: 0042d732 (CONDITIONAL_JUMP)  ; LAB_0042d732
    MOV EAX,dword ptr [EDX]             ; 0042d9d1
    MOV dword ptr [ESP + 0x14],EAX      ; 0042d9d3
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042d9d7
    MOV dword ptr [ESP + 0x18],EAX      ; 0042d9da
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042d9de
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042d9e1
    JMP 0x0042d732                      ; 0042d9e5
        ;   XREF to: 0042d732 (UNCONDITIONAL_JUMP)  ; LAB_0042d732
    PUSH EAX                            ; 0042d9ea | g_CDemonSetInstance
        ;   Label: LAB_0042d9ea
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 0042d9eb
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0042d9f0
    PUSH 0x40000000                     ; 0042d9f3
    PUSH 0x3f800000                     ; 0042d9f8
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0042d9fd
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    XOR EAX,EAX                         ; 0042da1e
        ;   Label: LAB_0042da1e
    MOV dword ptr [ESP + 0x38],EAX      ; 0042da20
    MOV dword ptr [ESP + 0x40],EAX      ; 0042da24
    LEA EAX,[ESP + 0x38]                ; 0042da28
    PUSH EAX                            ; 0042da2c
    LEA EAX,[ESP + 0x78]                ; 0042da2d
    PUSH EAX                            ; 0042da31
    MOV EDX,0x40b00000                  ; 0042da32
    PUSH ESI                            ; 0042da37
    MOV dword ptr [ESP + 0x48],EDX      ; 0042da38
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042da3c
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042da41
    MOV EBX,dword ptr [0x00823c4c]      ; 0042da44 | g_CCharacterClassInfo.name_hash
    PUSH EBX                            ; 0042da4a
    MOV EDI,dword ptr [ESI + 0x25d0]    ; 0042da4b
    PUSH EDI                            ; 0042da51
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0042da52
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0042da57
    MOV EBX,EAX                         ; 0042da5a
    TEST EAX,EAX                        ; 0042da5c
    JNZ 0x0042da82                      ; 0042da5e
        ;   XREF to: 0042da82 (CONDITIONAL_JUMP)  ; LAB_0042da82
    MOV EAX,0x6173d0                    ; 0042da60 | = "..\\core\\charactr.cpp"
    MOV EDX,0xda0                       ; 0042da65
    PUSH 0x6173e5                       ; 0042da6a | = "CCharacter::findSomethingToLookAt - S..."
    MOV [0x02f0ca48],EAX                ; 0042da6f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0042da74 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0042da7a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0042da7f
    PUSH EBX                            ; 0042da82
        ;   Label: LAB_0042da82
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042da83
    CALL dword ptr [EAX + 0x120]        ; 0042da89
    ADD ESP,0x4                         ; 0042da8f
    TEST EAX,EAX                        ; 0042da92
    JNZ 0x0042db95                      ; 0042da94
        ;   XREF to: 0042db95 (CONDITIONAL_JUMP)  ; LAB_0042db95
    LEA EAX,[ESP + 0x8c]                ; 0042da9a
        ;   Label: LAB_0042da9a
    ADD EBX,0x20                        ; 0042daa1
    CMP EAX,EBX                         ; 0042daa4
    JZ 0x0042dac5                       ; 0042daa6
        ;   XREF to: 0042dac5 (CONDITIONAL_JUMP)  ; LAB_0042dac5
    MOV EAX,dword ptr [EBX]             ; 0042daa8
    MOV dword ptr [ESP + 0x8c],EAX      ; 0042daaa
    MOV EAX,dword ptr [EBX + 0x4]       ; 0042dab1
    MOV dword ptr [ESP + 0x90],EAX      ; 0042dab4
    MOV EAX,dword ptr [EBX + 0x8]       ; 0042dabb
    MOV dword ptr [ESP + 0x94],EAX      ; 0042dabe
    FLD float ptr [ESP + 0x90]          ; 0042dac5
        ;   Label: LAB_0042dac5
    FADD float ptr [0x0061742a]         ; 0042dacc | FLOAT_0061742a
    FSTP float ptr [ESP + 0x90]         ; 0042dad2
    FLD float ptr [ESP + 0x8c]          ; 0042dad9
        ;   Label: LAB_0042dad9
    FLD float ptr [ESP + 0x90]          ; 0042dae0
    FLD float ptr [ESP + 0x94]          ; 0042dae7
    LEA EAX,[ESP + 0x8]                 ; 0042daee
    FXCH ST2                            ; 0042daf2
    FSUB float ptr [ESP + 0x74]         ; 0042daf4
    FXCH                                ; 0042daf8
    FSUB float ptr [ESP + 0x78]         ; 0042dafa
    PUSH EAX                            ; 0042dafe
    FXCH ST2                            ; 0042daff
    FSUB float ptr [ESP + 0x80]         ; 0042db01
    LEA EAX,[ESP + 0x24]                ; 0042db08
    FXCH                                ; 0042db0c
    FSTP float ptr [ESP + 0xc]          ; 0042db0e
    PUSH EAX                            ; 0042db12
    FXCH                                ; 0042db13
    FSTP float ptr [ESP + 0x14]         ; 0042db15
    PUSH ESI                            ; 0042db19
    FSTP float ptr [ESP + 0x1c]         ; 0042db1a
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 0042db1e
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 0042db23
    LEA EAX,[ESP + 0x20]                ; 0042db26
    PUSH EAX                            ; 0042db2a
    LEA EAX,[ESP + 0x48]                ; 0042db2b
    PUSH EAX                            ; 0042db2f
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0042db30
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 0042db35
    LEA EAX,[ESP + 0x34]                ; 0042db37
    ADD ESP,0x8                         ; 0042db3b
    CMP EAX,EDX                         ; 0042db3e
    JZ 0x0042db56                       ; 0042db40
        ;   XREF to: 0042db56 (CONDITIONAL_JUMP)  ; LAB_0042db56
    MOV EAX,dword ptr [EDX]             ; 0042db42
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042db44
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042db48
    MOV dword ptr [ESP + 0x30],EAX      ; 0042db4b
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042db4f
    MOV dword ptr [ESP + 0x34],EAX      ; 0042db52
    FLD float ptr [ESP + 0x30]          ; 0042db56
        ;   Label: LAB_0042db56
    FABS                                ; 0042db5a
    FCOMP double ptr [0x00617432]       ; 0042db5c | DOUBLE_00617432
    FNSTSW AX                           ; 0042db62
    SAHF                                ; 0042db64
    JBE 0x0042db71                      ; 0042db65
        ;   XREF to: 0042db71 (CONDITIONAL_JUMP)  ; LAB_0042db71
    MOV dword ptr [ESI + 0x25d0],0x0    ; 0042db67
    FLD float ptr [ESP + 0x2c]          ; 0042db71
        ;   Label: LAB_0042db71
    FABS                                ; 0042db75
    FCOMP double ptr [0x0061743a]       ; 0042db77 | DOUBLE_0061743a
    FNSTSW AX                           ; 0042db7d
    SAHF                                ; 0042db7f
    JBE 0x0042d5f6                      ; 0042db80
        ;   XREF to: 0042d5f6 (CONDITIONAL_JUMP)  ; LAB_0042d5f6
    MOV dword ptr [ESI + 0x25d0],0x0    ; 0042db86
    JMP 0x0042d603                      ; 0042db90
        ;   XREF to: 0042d603 (UNCONDITIONAL_JUMP)  ; LAB_0042d603
    LEA EDX,[EBX + 0x158]               ; 0042db95
        ;   Label: LAB_0042db95
    LEA EAX,[EBX + 0x23b8]              ; 0042db9b
    CMP byte ptr [EAX],0x0              ; 0042dba1
    JZ 0x0042da9a                       ; 0042dba4
        ;   XREF to: 0042da9a (CONDITIONAL_JUMP)  ; LAB_0042da9a
    PUSH 0x0                            ; 0042dbaa
    LEA EAX,[ESP + 0xcc]                ; 0042dbac
    PUSH EAX                            ; 0042dbb3
    PUSH EDX                            ; 0042dbb4
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0042dbb5
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0042dbba
    PUSH EAX                            ; 0042dbbd
    LEA EAX,[ESP + 0x6c]                ; 0042dbbe
    PUSH EAX                            ; 0042dbc2
    PUSH EBX                            ; 0042dbc3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042dbc4
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 0042dbc9
    LEA EAX,[ESP + 0x98]                ; 0042dbcb
    ADD ESP,0xc                         ; 0042dbd2
    CMP EAX,EDX                         ; 0042dbd5
    JZ 0x0042dad9                       ; 0042dbd7
        ;   XREF to: 0042dad9 (CONDITIONAL_JUMP)  ; LAB_0042dad9
    MOV EAX,dword ptr [EDX]             ; 0042dbdd
    MOV dword ptr [ESP + 0x8c],EAX      ; 0042dbdf
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042dbe6
    MOV dword ptr [ESP + 0x90],EAX      ; 0042dbe9
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042dbf0
    MOV dword ptr [ESP + 0x94],EAX      ; 0042dbf3
    JMP 0x0042dad9                      ; 0042dbfa
        ;   XREF to: 0042dad9 (UNCONDITIONAL_JUMP)  ; LAB_0042dad9
    MOV dword ptr [ESI + 0x25dc],0x0    ; 0042dbff
        ;   Label: LAB_0042dbff
    MOV dword ptr [ESI + 0x25e0],0x0    ; 0042dc09
    MOV dword ptr [ESI + 0x25d8],0x0    ; 0042dc13
    MOV ESP,EBP                         ; 0042dc1d
    POP EBP                             ; 0042dc1f
    POP EDI                             ; 0042dc20
    POP ESI                             ; 0042dc21
    POP EBX                             ; 0042dc22
    RET                                 ; 0042dc23
    FLD float ptr [EBP + 0x18]          ; 0042dc24
        ;   Label: LAB_0042dc24
    FDIV float ptr [0x00617442]         ; 0042dc27 | FLOAT_00617442
    FADD float ptr [ESI + 0x25e0]       ; 0042dc2d
    FST float ptr [ESI + 0x25e0]        ; 0042dc33
    FLD1                                ; 0042dc39
    FCOMPP                              ; 0042dc3b
    FNSTSW AX                           ; 0042dc3d
    SAHF                                ; 0042dc3f
    JNC 0x0042dc4c                      ; 0042dc40
        ;   XREF to: 0042dc4c (CONDITIONAL_JUMP)  ; LAB_0042dc4c
    MOV dword ptr [ESI + 0x25e0],0x3f800000 ; 0042dc42
    FLD float ptr [ESP + 0x30]          ; 0042dc4c
        ;   Label: LAB_0042dc4c
    FSUB float ptr [ESI + 0x25d8]       ; 0042dc50
    SUB ESP,0x4                         ; 0042dc56
    FSTP float ptr [ESP]                ; 0042dc59
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0042dc5c
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xf0],EAX      ; 0042dc61
    FLD float ptr [ESP + 0xf0]          ; 0042dc68
    FMUL double ptr [0x0061744a]        ; 0042dc6f | DOUBLE_0061744a
    ADD ESP,0x4                         ; 0042dc75
    FADD float ptr [ESI + 0x25d8]       ; 0042dc78
    FSTP float ptr [ESI + 0x25d8]       ; 0042dc7e
    FLD float ptr [ESP + 0x2c]          ; 0042dc84
    FSUB float ptr [ESI + 0x25dc]       ; 0042dc88
    SUB ESP,0x4                         ; 0042dc8e
    FSTP float ptr [ESP]                ; 0042dc91
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0042dc94
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xf0],EAX      ; 0042dc99
    FLD float ptr [ESP + 0xf0]          ; 0042dca0
    FMUL double ptr [0x0061744a]        ; 0042dca7 | DOUBLE_0061744a
    ADD ESP,0x4                         ; 0042dcad
    FADD float ptr [ESI + 0x25dc]       ; 0042dcb0
    FSTP float ptr [ESI + 0x25dc]       ; 0042dcb6
    MOV ESP,EBP                         ; 0042dcbc
    POP EBP                             ; 0042dcbe
    POP EDI                             ; 0042dcbf
    POP ESI                             ; 0042dcc0
    POP EBX                             ; 0042dcc1
    RET                                 ; 0042dcc2

