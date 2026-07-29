; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_batcreat_cpp_FUN_00412d80(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_00578a37
;   TerminatedCString s_modelName_00578a3d
;   TerminatedCString s_motion_state_00578a47
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412d80
        ;   Label: core_batcreat.cpp_FUN_00412d80
    PUSH ESI                            ; 00412d81
    MOV ESI,dword ptr [ESP + 0xc]       ; 00412d82
    PUSH ESI                            ; 00412d86
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 00412d87
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00412d8c
    PUSH 0x578a37                       ; 00412d8f | = "speed"
    LEA EBX,[ESI + 0xbc8c]              ; 00412d94
    PUSH EBX                            ; 00412d9a
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00412d9b
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00412da0
    PUSH 0x578a3d                       ; 00412da3 | = "modelName"
    LEA EBX,[ESI + 0x150]               ; 00412da8
    PUSH EBX                            ; 00412dae
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 00412daf
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00412db4
    PUSH 0x578a47                       ; 00412db7 | = "motion state"
    PUSH EBX                            ; 00412dbc
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 00412dbd
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00412dc2
    POP ESI                             ; 00412dc5
    POP EBX                             ; 00412dc6
    RET                                 ; 00412dc7

