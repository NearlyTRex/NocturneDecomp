; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_FUN_0043c2e0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_0057b3c2
;   TerminatedCString s_modelName_0057b3c8
;   TerminatedCString s_guardDistance_0057b3d2
;   TerminatedCString s_motion_state_0057b3e0
;   int g_INT_005ad3ac = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c2e0
        ;   Label: core_cow.cpp_FUN_0043c2e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043c2e1
    PUSH EBX                            ; 0043c2e5
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 0043c2e6
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0043c2eb
    PUSH 0x57b3c2                       ; 0043c2ee | = "speed"
    LEA EAX,[EBX + 0xbc8c]              ; 0043c2f3
    PUSH EAX                            ; 0043c2f9
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0043c2fa
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0043c2ff
    PUSH 0x57b3c8                       ; 0043c302 | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 0043c307
    PUSH EAX                            ; 0043c30d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 0043c30e
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    MOV EDX,dword ptr [0x005ad3ac]      ; 0043c313 | g_INT_005ad3ac
    ADD ESP,0x8                         ; 0043c319
    CMP EDX,0x2                         ; 0043c31c
    JL 0x0043c337                       ; 0043c31f
        ;   XREF to: 0043c337 (CONDITIONAL_JUMP)  ; LAB_0043c337
    PUSH 0x57b3e0                       ; 0043c321 | = "motion state"
        ;   Label: LAB_0043c321
    ADD EBX,0x150                       ; 0043c326
    PUSH EBX                            ; 0043c32c
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 0043c32d
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0043c332
    POP EBX                             ; 0043c335
    RET                                 ; 0043c336
    PUSH 0x57b3d2                       ; 0043c337 | = "guardDistance"
        ;   Label: LAB_0043c337
    LEA EAX,[EBX + 0xbc9c]              ; 0043c33c
    PUSH EAX                            ; 0043c342
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0043c343
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0043c348
    JMP 0x0043c321                      ; 0043c34b
        ;   XREF to: 0043c321 (UNCONDITIONAL_JUMP)  ; LAB_0043c321

