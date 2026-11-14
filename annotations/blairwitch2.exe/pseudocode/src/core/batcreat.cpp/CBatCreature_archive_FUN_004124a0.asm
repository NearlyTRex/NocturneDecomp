; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_CBatCreature_archive_FUN_004124a0(CBatCreature *this_ptr)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005cb905+1
;   TerminatedCString s_modelName_005cb90c
;   TerminatedCString s_motion_state_005cb916
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004124a0
        ;   Label: core_batcreat.cpp_CBatCreature_archive_FUN_004124a0
    PUSH ESI                            ; 004124a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004124a2
    PUSH ESI                            ; 004124a6
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 004124a7
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004124ac
    PUSH 0x5cb906                       ; 004124af | s_speed_005cb905+1
    LEA EBX,[ESI + 0x10a60]             ; 004124b4
    PUSH EBX                            ; 004124ba
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004124bb
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004124c0
    PUSH 0x5cb90c                       ; 004124c3 | = "modelName"
    LEA EBX,[ESI + 0x2b4]               ; 004124c8
    PUSH EBX                            ; 004124ce
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 004124cf
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004124d4
    PUSH 0x5cb916                       ; 004124d7 | = "motion state"
    PUSH EBX                            ; 004124dc
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 004124dd
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004124e2
    POP ESI                             ; 004124e5
    POP EBX                             ; 004124e6
    RET                                 ; 004124e7

