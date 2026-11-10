; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_CNPC_archive_FUN_00509800(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_asgaya.cpp_CAsgaya_archive_FUN_005a1aa0 at 005a1aa7
;   core_passngr.cpp_CPassenger_archive_FUN_0050aaa0 at 0050aaa7
;   core_pryemorp.cpp_CPryeMorph_archive_FUN_00527a90 at 00527a97
;   core_spirbear.cpp_CSpiritBear_archive_FUN_0059b4a0 at 0059b4a7
;   core_spirindi.cpp_CSpiritIndian_archive_FUN_0059a8a0 at 0059a8a7
;
; Referenced Globals:
;   TerminatedCString s_hitPoints_005cb5f0
;   TerminatedCString s_modelName_005cb5fa
;   TerminatedCString s_motion_state_005cb604
;   TerminatedCString s_shootMe_005cb611
;   TerminatedCString s_poolMe_005cb619
;   TerminatedCString s_speed_005cb620
;   TerminatedCString s_fadeTime_005cb626
;   TerminatedCString s_startOpc_005cb62f
;   int g_CNPCClassVersion = 0x8
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_charactr.cpp_CCharacter_archive_FUN_0042b450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509800
        ;   Label: core_npc.cpp_CNPC_archive_FUN_00509800
    PUSH ESI                            ; 00509801
    MOV EBX,dword ptr [ESP + 0xc]       ; 00509802
    CMP dword ptr [0x006035e4],0x2      ; 00509806 | g_CNPCClassVersion
    JL 0x005098c9                       ; 0050980d
        ;   XREF to: 005098c9 (CONDITIONAL_JUMP)  ; LAB_005098c9
    PUSH EBX                            ; 00509813
    CALL core_charactr.cpp_CCharacter_archive_FUN_0042b450 ; 00509814
        ;   XREF to: 0042b450 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_0042b450(CCharacter * this_ptr)
    MOV ECX,dword ptr [0x006035e4]      ; 00509819 | g_CNPCClassVersion
    ADD ESP,0x4                         ; 0050981f
    CMP ECX,0x3                         ; 00509822
    JL 0x00509849                       ; 00509825
        ;   XREF to: 00509849 (CONDITIONAL_JUMP)  ; LAB_00509849
    PUSH 0x5cb5fa                       ; 00509827 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 0050982c
    PUSH ESI                            ; 00509832
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 00509833
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00509838
    PUSH 0x5cb604                       ; 0050983b | = "motion state"
    PUSH ESI                            ; 00509840
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 00509841
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00509846
    CMP dword ptr [0x006035e4],0x4      ; 00509849 | g_CNPCClassVersion
        ;   Label: LAB_00509849
    JL 0x00509866                       ; 00509850
        ;   XREF to: 00509866 (CONDITIONAL_JUMP)  ; LAB_00509866
    PUSH 0x5cb611                       ; 00509852 | = "shootMe"
    LEA ESI,[EBX + 0x206a8]             ; 00509857
    PUSH ESI                            ; 0050985d
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0050985e
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00509863
    CMP dword ptr [0x006035e4],0x5      ; 00509866 | g_CNPCClassVersion
        ;   Label: LAB_00509866
    JL 0x00509883                       ; 0050986d
        ;   XREF to: 00509883 (CONDITIONAL_JUMP)  ; LAB_00509883
    PUSH 0x5cb619                       ; 0050986f | = "poolMe"
    LEA ESI,[EBX + 0x206ac]             ; 00509874
    PUSH ESI                            ; 0050987a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0050987b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00509880
    CMP dword ptr [0x006035e4],0x6      ; 00509883 | g_CNPCClassVersion
        ;   Label: LAB_00509883
    JL 0x005098a0                       ; 0050988a
        ;   XREF to: 005098a0 (CONDITIONAL_JUMP)  ; LAB_005098a0
    PUSH 0x5cb620                       ; 0050988c | = "speed"
    LEA ESI,[EBX + 0x206b0]             ; 00509891
    PUSH ESI                            ; 00509897
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00509898
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0050989d
    CMP dword ptr [0x006035e4],0x7      ; 005098a0 | g_CNPCClassVersion
        ;   Label: LAB_005098a0
    JL 0x005098bd                       ; 005098a7
        ;   XREF to: 005098bd (CONDITIONAL_JUMP)  ; LAB_005098bd
    PUSH 0x5cb626                       ; 005098a9 | = "fadeTime"
    LEA ESI,[EBX + 0x206c4]             ; 005098ae
    PUSH ESI                            ; 005098b4
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 005098b5
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 005098ba
    CMP dword ptr [0x006035e4],0x8      ; 005098bd | g_CNPCClassVersion
        ;   Label: LAB_005098bd
    JGE 0x005098e9                      ; 005098c4
        ;   XREF to: 005098e9 (CONDITIONAL_JUMP)  ; LAB_005098e9
    POP ESI                             ; 005098c6
    POP EBX                             ; 005098c7
    RET                                 ; 005098c8
    PUSH EBX                            ; 005098c9
        ;   Label: LAB_005098c9
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 005098ca
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005098cf
    PUSH 0x5cb5f0                       ; 005098d2 | = "hitPoints"
    ADD EBX,0x2538                      ; 005098d7
    PUSH EBX                            ; 005098dd
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 005098de
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 005098e3
    POP ESI                             ; 005098e6
    POP EBX                             ; 005098e7
    RET                                 ; 005098e8
    PUSH 0x5cb62f                       ; 005098e9 | = "startOpc"
        ;   Label: LAB_005098e9
    ADD EBX,0x206bc                     ; 005098ee
    PUSH EBX                            ; 005098f4
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005098f5
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005098fa
    POP ESI                             ; 005098fd
    POP EBX                             ; 005098fe
    RET                                 ; 005098ff

