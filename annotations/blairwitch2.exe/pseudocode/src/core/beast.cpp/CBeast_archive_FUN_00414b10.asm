; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_beast_cpp_CBeast_archive_FUN_00414b10(CBeast *this_ptr)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005cbc68
;   TerminatedCString s_modelName_005cbc6e
;   TerminatedCString s_motion_state_005cbc78
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414b10
        ;   Label: core_beast.cpp_CBeast_archive_FUN_00414b10
    PUSH ESI                            ; 00414b11
    MOV ESI,dword ptr [ESP + 0xc]       ; 00414b12
    PUSH ESI                            ; 00414b16
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 00414b17
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00414b1c
    PUSH 0x5cbc68                       ; 00414b1f | = "speed"
    LEA EBX,[ESI + 0x10a60]             ; 00414b24
    PUSH EBX                            ; 00414b2a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00414b2b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00414b30
    PUSH 0x5cbc6e                       ; 00414b33 | = "modelName"
    LEA EBX,[ESI + 0x2b4]               ; 00414b38
    PUSH EBX                            ; 00414b3e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 00414b3f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00414b44
    PUSH 0x5cbc78                       ; 00414b47 | = "motion state"
    PUSH EBX                            ; 00414b4c
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 00414b4d
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00414b52
    POP ESI                             ; 00414b55
    POP EBX                             ; 00414b56
    RET                                 ; 00414b57

