; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hino_cpp_CHino_archive_FUN_0059d310(CHino *this_ptr)
;
; Parameters:
; CHino *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d9e7b+1
;   TerminatedCString s_modelName_005d9e82
;   TerminatedCString s_motion_state_005d9e8c
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d310
        ;   Label: core_hino.cpp_CHino_archive_FUN_0059d310
    PUSH ESI                            ; 0059d311
    MOV ESI,dword ptr [ESP + 0xc]       ; 0059d312
    PUSH ESI                            ; 0059d316
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 0059d317
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059d31c
    PUSH 0x5d9e7c                       ; 0059d31f | s_speed_005d9e7b+1
    LEA EBX,[ESI + 0xcdcc]              ; 0059d324
    PUSH EBX                            ; 0059d32a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0059d32b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059d330
    PUSH 0x5d9e82                       ; 0059d333 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 0059d338
    PUSH EBX                            ; 0059d33e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 0059d33f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059d344
    PUSH 0x5d9e8c                       ; 0059d347 | = "motion state"
    PUSH EBX                            ; 0059d34c
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 0059d34d
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0059d352
    POP ESI                             ; 0059d355
    POP EBX                             ; 0059d356
    RET                                 ; 0059d357

