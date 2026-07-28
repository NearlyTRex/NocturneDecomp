; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drone_cpp_FUN_004630e0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_0057df2c
;   TerminatedCString s_modelName_0057df32
;   TerminatedCString s_guardDistance_0057df3c
;   TerminatedCString s_motion_state_0057df4a
;   int g_INT_005b0660 = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004630e0
        ;   Label: core_drone.cpp_FUN_004630e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004630e1
    PUSH EBX                            ; 004630e5
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 004630e6
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004630eb
    PUSH 0x57df2c                       ; 004630ee | = "speed"
    LEA EAX,[EBX + 0xbc8c]              ; 004630f3
    PUSH EAX                            ; 004630f9
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004630fa
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004630ff
    PUSH 0x57df32                       ; 00463102 | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00463107
    PUSH EAX                            ; 0046310d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 0046310e
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    MOV EDX,dword ptr [0x005b0660]      ; 00463113 | g_INT_005b0660
    ADD ESP,0x8                         ; 00463119
    CMP EDX,0x2                         ; 0046311c
    JL 0x00463137                       ; 0046311f
        ;   XREF to: 00463137 (CONDITIONAL_JUMP)  ; LAB_00463137
    PUSH 0x57df4a                       ; 00463121 | = "motion state"
        ;   Label: LAB_00463121
    ADD EBX,0x150                       ; 00463126
    PUSH EBX                            ; 0046312c
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 0046312d
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00463132
    POP EBX                             ; 00463135
    RET                                 ; 00463136
    PUSH 0x57df3c                       ; 00463137 | = "guardDistance"
        ;   Label: LAB_00463137
    LEA EAX,[EBX + 0xbc9c]              ; 0046313c
    PUSH EAX                            ; 00463142
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00463143
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00463148
    JMP 0x00463121                      ; 0046314b
        ;   XREF to: 00463121 (UNCONDITIONAL_JUMP)  ; LAB_00463121

