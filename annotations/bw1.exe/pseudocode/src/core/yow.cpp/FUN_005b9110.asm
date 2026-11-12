; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_yow_cpp_FUN_005b9110(CEnemy *param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005fa35b+1
;   TerminatedCString s_modelName_005fa362
;   TerminatedCString s_guardDistance_005fa36c
;   TerminatedCString s_motion_state_005fa37a
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9110
        ;   Label: core_yow.cpp_FUN_005b9110
    PUSH ESI                            ; 005b9111
    MOV ESI,dword ptr [ESP + 0xc]       ; 005b9112
    PUSH ESI                            ; 005b9116
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 005b9117
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005b911c
    PUSH 0x5fa35c                       ; 005b911f | s_speed_005fa35b+1
    LEA EBX,[ESI + 0xc1d0]              ; 005b9124
    PUSH EBX                            ; 005b912a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005b912b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005b9130
    PUSH 0x5fa362                       ; 005b9133 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 005b9138
    PUSH EBX                            ; 005b913e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 005b913f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b9144
    PUSH 0x5fa36c                       ; 005b9147 | = "guardDistance"
    ADD ESI,0xc1e0                      ; 005b914c
    PUSH ESI                            ; 005b9152
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005b9153
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005b9158
    PUSH 0x5fa37a                       ; 005b915b | = "motion state"
    PUSH EBX                            ; 005b9160
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 005b9161
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005b9166
    POP ESI                             ; 005b9169
    POP EBX                             ; 005b916a
    RET                                 ; 005b916b

