; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_thehand_cpp_CTheHand_archive_FUN_005998d0(CTheHand *this_ptr)
;
; Parameters:
; CTheHand *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_s_0_modelName_005f7fba+2
;   TerminatedCString s_motion_state_005f7fc6
;   TerminatedCString s_partStatus_005f7fd3
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_actor.cpp_archivePartStatus_FUN_0040b960
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005998d0
        ;   Label: core_thehand.cpp_CTheHand_archive_FUN_005998d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005998d1
    PUSH EBX                            ; 005998d5
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 005998d6
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005998db
    PUSH 0x5f7fbc                       ; 005998de | s_s_0_modelName_005f7fba+2
    ADD EBX,0x158                       ; 005998e3
    PUSH EBX                            ; 005998e9
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 005998ea
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005998ef
    PUSH 0x5f7fc6                       ; 005998f2 | = "motion state"
    PUSH EBX                            ; 005998f7
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 005998f8
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005998fd
    PUSH 0x5f7fd3                       ; 00599900 | = "partStatus"
    PUSH EBX                            ; 00599905
    CALL core_actor.cpp_archivePartStatus_FUN_0040b960 ; 00599906
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040b960(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059990b
    POP EBX                             ; 0059990e
    RET                                 ; 0059990f

