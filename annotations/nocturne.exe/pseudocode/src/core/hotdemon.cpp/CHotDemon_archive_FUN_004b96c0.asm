; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_CHotDemon_archive_FUN_004b96c0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_00585f7d
;   TerminatedCString s_modelName_00585f83
;   TerminatedCString s_motion_state_00585f8d
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b96c0
        ;   Label: core_hotdemon.cpp_CHotDemon_archive_FUN_004b96c0
    PUSH ESI                            ; 004b96c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004b96c2
    PUSH ESI                            ; 004b96c6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 004b96c7
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004b96cc
    PUSH 0x585f7d                       ; 004b96cf | = "speed"
    LEA EBX,[ESI + 0xbc8c]              ; 004b96d4
    PUSH EBX                            ; 004b96da
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004b96db
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b96e0
    PUSH 0x585f83                       ; 004b96e3 | = "modelName"
    LEA EBX,[ESI + 0x150]               ; 004b96e8
    PUSH EBX                            ; 004b96ee
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 004b96ef
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    ADD ESP,0x8                         ; 004b96f4
    PUSH 0x585f8d                       ; 004b96f7 | = "motion state"
    PUSH EBX                            ; 004b96fc
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 004b96fd
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004b9702
    POP ESI                             ; 004b9705
    POP EBX                             ; 004b9706
    LEA EAX,[EAX]                       ; 004b9707
    LEA EDX,[EDX]                       ; 004b970d
    RET                                 ; 004b9710

