; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shotgun_cpp_CShadowsc_archive_FUN_00546d50(CShadowsc *this_ptr)
;
; Parameters:
; CShadowsc *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_Aspeed_005d14ec+2
;   TerminatedCString s_modelName_005d14f4
;   TerminatedCString s_guardDistance_005d14fe
;   TerminatedCString s_motion_state_005d150c
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546d50
        ;   Label: core_shotgun.cpp_CShadowsc_archive_FUN_00546d50
    PUSH ESI                            ; 00546d51
    MOV ESI,dword ptr [ESP + 0xc]       ; 00546d52
    PUSH ESI                            ; 00546d56
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 00546d57
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00546d5c
    PUSH 0x5d14ee                       ; 00546d5f | s_Aspeed_005d14ec+2
    LEA EBX,[ESI + 0xcdcc]              ; 00546d64
    PUSH EBX                            ; 00546d6a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00546d6b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00546d70
    PUSH 0x5d14f4                       ; 00546d73 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 00546d78
    PUSH EBX                            ; 00546d7e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 00546d7f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00546d84
    PUSH 0x5d14fe                       ; 00546d87 | = "guardDistance"
    ADD ESI,0xcddc                      ; 00546d8c
    PUSH ESI                            ; 00546d92
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00546d93
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00546d98
    PUSH 0x5d150c                       ; 00546d9b | = "motion state"
    PUSH EBX                            ; 00546da0
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 00546da1
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00546da6
    POP ESI                             ; 00546da9
    POP EBX                             ; 00546daa
    RET                                 ; 00546dab

