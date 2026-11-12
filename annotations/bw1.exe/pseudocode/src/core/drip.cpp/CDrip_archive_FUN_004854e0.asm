; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_CDrip_archive_FUN_004854e0(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005db58f
;   undefined4 DAT_005db599
;   TerminatedCString s_autoDrop_005db59e
;   TerminatedCString s_homePos_005db5a7
;   undefined4 DAT_005db5af
;   TerminatedCString s_minAutoDripTime_005db5b3
;   TerminatedCString s_maxAutoDripTime_005db5c3
;   TerminatedCString s_dripRadius_005db5d3
;   TerminatedCString s_damage_005db5de
;   TerminatedCString s_hitSound_005db5e5
;   TerminatedCString s_noRockFlag_005db5ee
;   int g_CDripClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004854e0
        ;   Label: core_drip.cpp_CDrip_archive_FUN_004854e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004854e1
    CMP dword ptr [0x006144a8],0x2      ; 004854e5 | g_CDripClassVersion
    JGE 0x004855e2                      ; 004854ec
        ;   XREF to: 004855e2 (CONDITIONAL_JUMP)  ; LAB_004855e2
    PUSH 0x5db58f                       ; 004854f2 | = "modelName"
        ;   Label: LAB_004854f2
    LEA EAX,[EBX + 0x158]               ; 004854f7
    PUSH EAX                            ; 004854fd
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 004854fe
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485503
    PUSH 0x5db599                       ; 00485506 | DAT_005db599
    LEA EAX,[EBX + 0x2d4]               ; 0048550b
    PUSH EAX                            ; 00485511
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00485512
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485517
    PUSH 0x5db59e                       ; 0048551a | = "autoDrop"
    LEA EAX,[EBX + 0x2d8]               ; 0048551f
    PUSH EAX                            ; 00485525
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00485526
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048552b
    PUSH 0x5db5a7                       ; 0048552e | = "homePos"
    LEA EAX,[EBX + 0x2f8]               ; 00485533
    PUSH EAX                            ; 00485539
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 0048553a
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b1c0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048553f
    PUSH 0x5db5af                       ; 00485542 | DAT_005db5af
    LEA EAX,[EBX + 0x304]               ; 00485547
    PUSH EAX                            ; 0048554d
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 0048554e
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b1c0(CVector3f * vector_ptr, char * property_name)
    MOV ECX,dword ptr [0x006144a8]      ; 00485553 | g_CDripClassVersion
    ADD ESP,0x8                         ; 00485559
    CMP ECX,0x3                         ; 0048555c
    JL 0x0048559d                       ; 0048555f
        ;   XREF to: 0048559d (CONDITIONAL_JUMP)  ; LAB_0048559d
    PUSH 0x5db5b3                       ; 00485561 | = "minAutoDripTime"
    LEA EAX,[EBX + 0x2e0]               ; 00485566
    PUSH EAX                            ; 0048556c
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0048556d
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485572
    PUSH 0x5db5c3                       ; 00485575 | = "maxAutoDripTime"
    LEA EAX,[EBX + 0x2e4]               ; 0048557a
    PUSH EAX                            ; 00485580
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00485581
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485586
    PUSH 0x5db5d3                       ; 00485589 | = "dripRadius"
    LEA EAX,[EBX + 0x2e8]               ; 0048558e
    PUSH EAX                            ; 00485594
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00485595
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048559a
    CMP dword ptr [0x006144a8],0x4      ; 0048559d | g_CDripClassVersion
        ;   Label: LAB_0048559d
    JL 0x004855ba                       ; 004855a4
        ;   XREF to: 004855ba (CONDITIONAL_JUMP)  ; LAB_004855ba
    PUSH 0x5db5de                       ; 004855a6 | = "damage"
    LEA EAX,[EBX + 0x310]               ; 004855ab
    PUSH EAX                            ; 004855b1
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004855b2
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004855b7
    CMP dword ptr [0x006144a8],0x5      ; 004855ba | g_CDripClassVersion
        ;   Label: LAB_004855ba
    JL 0x004855d7                       ; 004855c1
        ;   XREF to: 004855d7 (CONDITIONAL_JUMP)  ; LAB_004855d7
    PUSH 0x5db5e5                       ; 004855c3 | = "hitSound"
    LEA EAX,[EBX + 0x314]               ; 004855c8
    PUSH EAX                            ; 004855ce
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004855cf
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004855d4
    CMP dword ptr [0x006144a8],0x6      ; 004855d7 | g_CDripClassVersion
        ;   Label: LAB_004855d7
    JGE 0x004855f0                      ; 004855de
        ;   XREF to: 004855f0 (CONDITIONAL_JUMP)  ; LAB_004855f0
    POP EBX                             ; 004855e0
    RET                                 ; 004855e1
    PUSH EBX                            ; 004855e2
        ;   Label: LAB_004855e2
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004855e3
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004855e8
    JMP 0x004854f2                      ; 004855eb
        ;   XREF to: 004854f2 (UNCONDITIONAL_JUMP)  ; LAB_004854f2
    PUSH 0x5db5ee                       ; 004855f0 | = "noRockFlag"
        ;   Label: LAB_004855f0
    ADD EBX,0x334                       ; 004855f5
    PUSH EBX                            ; 004855fb
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004855fc
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00485601
    POP EBX                             ; 00485604
    RET                                 ; 00485605

