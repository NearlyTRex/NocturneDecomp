; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_beast_cpp_CBeast_archive_FUN_00415160(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_00578da9
;   TerminatedCString s_modelName_00578daf
;   TerminatedCString s_motion_state_00578db9
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415160
        ;   Label: core_beast.cpp_CBeast_archive_FUN_00415160
    PUSH ESI                            ; 00415161
    MOV ESI,dword ptr [ESP + 0xc]       ; 00415162
    PUSH ESI                            ; 00415166
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 00415167
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041516c
    PUSH 0x578da9                       ; 0041516f | = "speed"
    LEA EBX,[ESI + 0xbc8c]              ; 00415174
    PUSH EBX                            ; 0041517a
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0041517b
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00415180
    PUSH 0x578daf                       ; 00415183 | = "modelName"
    LEA EBX,[ESI + 0x150]               ; 00415188
    PUSH EBX                            ; 0041518e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 0041518f
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00415194
    PUSH 0x578db9                       ; 00415197 | = "motion state"
    PUSH EBX                            ; 0041519c
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 0041519d
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004151a2
    POP ESI                             ; 004151a5
    POP EBX                             ; 004151a6
    RET                                 ; 004151a7

