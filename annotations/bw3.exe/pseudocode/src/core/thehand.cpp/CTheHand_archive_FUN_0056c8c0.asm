; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_thehand_cpp_CTheHand_archive_FUN_0056c8c0(CTheHand *this_ptr)
;
; Parameters:
; CTheHand *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_s_0_modelName_005d6529+2
;   TerminatedCString s_motion_state_005d6535
;   TerminatedCString s_partStatus_005d6542
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_actor.cpp_archivePartStatus_FUN_0040bba0
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c8c0
        ;   Label: core_thehand.cpp_CTheHand_archive_FUN_0056c8c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056c8c1
    PUSH EBX                            ; 0056c8c5
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 0056c8c6
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0056c8cb
    PUSH 0x5d652b                       ; 0056c8ce | s_s_0_modelName_005d6529+2
    ADD EBX,0x158                       ; 0056c8d3
    PUSH EBX                            ; 0056c8d9
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 0056c8da
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056c8df
    PUSH 0x5d6535                       ; 0056c8e2 | = "motion state"
    PUSH EBX                            ; 0056c8e7
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 0056c8e8
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0056c8ed
    PUSH 0x5d6542                       ; 0056c8f0 | = "partStatus"
    PUSH EBX                            ; 0056c8f5
    CALL core_actor.cpp_archivePartStatus_FUN_0040bba0 ; 0056c8f6
        ;   XREF to: 0040bba0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bba0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056c8fb
    POP EBX                             ; 0056c8fe
    RET                                 ; 0056c8ff

