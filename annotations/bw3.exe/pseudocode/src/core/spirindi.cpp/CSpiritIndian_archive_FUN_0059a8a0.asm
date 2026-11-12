; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spirindi_cpp_CSpiritIndian_archive_FUN_0059a8a0(CSpiritIndian *this_ptr)
;
; Parameters:
; CSpiritIndian *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d9acc
;   TerminatedCString s_motion_state_005d9ad6
;   TerminatedCString s_shootMe_005d9ae3
;   TerminatedCString s_poolMe_005d9aeb
;   TerminatedCString s_speed_005d9af2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_npc.cpp_CNPC_archive_FUN_00509800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a8a0
        ;   Label: core_spirindi.cpp_CSpiritIndian_archive_FUN_0059a8a0
    PUSH ESI                            ; 0059a8a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059a8a2
    PUSH EBX                            ; 0059a8a6
    CALL core_npc.cpp_CNPC_archive_FUN_00509800 ; 0059a8a7
        ;   XREF to: 00509800 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_archive_FUN_00509800(CNPC * this_ptr)
    ADD ESP,0x4                         ; 0059a8ac
    PUSH 0x5d9acc                       ; 0059a8af | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 0059a8b4
    PUSH ESI                            ; 0059a8ba
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 0059a8bb
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059a8c0
    PUSH 0x5d9ad6                       ; 0059a8c3 | = "motion state"
    PUSH ESI                            ; 0059a8c8
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 0059a8c9
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0059a8ce
    PUSH 0x5d9ae3                       ; 0059a8d1 | = "shootMe"
    LEA ESI,[EBX + 0x34160]             ; 0059a8d6
    PUSH ESI                            ; 0059a8dc
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0059a8dd
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059a8e2
    PUSH 0x5d9aeb                       ; 0059a8e5 | = "poolMe"
    LEA ESI,[EBX + 0x34164]             ; 0059a8ea
    PUSH ESI                            ; 0059a8f0
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0059a8f1
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059a8f6
    PUSH 0x5d9af2                       ; 0059a8f9 | = "speed"
    ADD EBX,0x34168                     ; 0059a8fe
    PUSH EBX                            ; 0059a904
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0059a905
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059a90a
    POP ESI                             ; 0059a90d
    POP EBX                             ; 0059a90e
    RET                                 ; 0059a90f

