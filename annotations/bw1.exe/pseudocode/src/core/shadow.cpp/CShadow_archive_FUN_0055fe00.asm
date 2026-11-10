; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shadow_cpp_CShadow_archive_FUN_0055fe00(CShadow *this_ptr)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005f174a
;   TerminatedCString s_modelName_005f1750
;   TerminatedCString s_guardDistance_005f175a
;   TerminatedCString s_motion_state_005f1768
;   TerminatedCString s_lightUpEyes_005f1775
;   TerminatedCString s_scaredByLight_005f1781
;   int g_CShadowClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055fe00
        ;   Label: core_shadow.cpp_CShadow_archive_FUN_0055fe00
    PUSH ESI                            ; 0055fe01
    MOV EBX,dword ptr [ESP + 0xc]       ; 0055fe02
    PUSH EBX                            ; 0055fe06
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 0055fe07
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0055fe0c
    PUSH 0x5f174a                       ; 0055fe0f | = "speed"
    LEA ESI,[EBX + 0xc1d0]              ; 0055fe14
    PUSH ESI                            ; 0055fe1a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0055fe1b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0055fe20
    PUSH 0x5f1750                       ; 0055fe23 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 0055fe28
    PUSH ESI                            ; 0055fe2e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 0055fe2f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0055fe34
    PUSH 0x5f175a                       ; 0055fe37 | = "guardDistance"
    LEA EAX,[EBX + 0xc1e0]              ; 0055fe3c
    PUSH EAX                            ; 0055fe42
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0055fe43
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0055fe48
    PUSH 0x5f1768                       ; 0055fe4b | = "motion state"
    PUSH ESI                            ; 0055fe50
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 0055fe51
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    MOV EDX,dword ptr [0x006231a4]      ; 0055fe56 | g_CShadowClassVersion
    ADD ESP,0x8                         ; 0055fe5c
    CMP EDX,0x2                         ; 0055fe5f
    JGE 0x0055fe71                      ; 0055fe62
        ;   XREF to: 0055fe71 (CONDITIONAL_JUMP)  ; LAB_0055fe71
    POP ESI                             ; 0055fe64
    POP EBX                             ; 0055fe65
    LEA EAX,[EAX]                       ; 0055fe66
    LEA EDX,[EDX]                       ; 0055fe6c
    RET                                 ; 0055fe70
    PUSH 0x5f1775                       ; 0055fe71 | = "lightUpEyes"
        ;   Label: LAB_0055fe71
    LEA ESI,[EBX + 0xc290]              ; 0055fe76
    PUSH ESI                            ; 0055fe7c
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0055fe7d
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0055fe82
    PUSH 0x5f1781                       ; 0055fe85 | = "scaredByLight"
    ADD EBX,0xc30c                      ; 0055fe8a
    PUSH EBX                            ; 0055fe90
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0055fe91
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0055fe96
    POP ESI                             ; 0055fe99
    POP EBX                             ; 0055fe9a
    RET                                 ; 0055fe9b

