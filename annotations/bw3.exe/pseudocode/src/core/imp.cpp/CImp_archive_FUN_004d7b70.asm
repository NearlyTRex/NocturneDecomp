; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_archive_FUN_004d7b70(CImp *this_ptr)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005c563f+1
;   TerminatedCString s_modelName_005c5646
;   TerminatedCString s_motion_state_005c5650
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7b70
        ;   Label: core_imp.cpp_CImp_archive_FUN_004d7b70
    PUSH ESI                            ; 004d7b71
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d7b72
    PUSH ESI                            ; 004d7b76
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 004d7b77
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004d7b7c
    PUSH 0x5c5640                       ; 004d7b7f | s_speed_005c563f+1
    LEA EBX,[ESI + 0xcdcc]              ; 004d7b84
    PUSH EBX                            ; 004d7b8a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004d7b8b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d7b90
    PUSH 0x5c5646                       ; 004d7b93 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 004d7b98
    PUSH EBX                            ; 004d7b9e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 004d7b9f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d7ba4
    PUSH 0x5c5650                       ; 004d7ba7 | = "motion state"
    PUSH EBX                            ; 004d7bac
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 004d7bad
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004d7bb2
    POP ESI                             ; 004d7bb5
    POP EBX                             ; 004d7bb6
    RET                                 ; 004d7bb7

