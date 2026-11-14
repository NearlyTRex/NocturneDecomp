; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moocow_cpp_CMooCow_archive_FUN_004f9010(CMooCow *this_ptr)
;
; Parameters:
; CMooCow *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005c91fb+1
;   TerminatedCString s_motion_state_005c9206
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_charactr.cpp_CCharacter_archive_FUN_0042b450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9010
        ;   Label: core_moocow.cpp_CMooCow_archive_FUN_004f9010
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f9011
    PUSH EBX                            ; 004f9015
    CALL core_charactr.cpp_CCharacter_archive_FUN_0042b450 ; 004f9016
        ;   XREF to: 0042b450 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_0042b450(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f901b
    PUSH 0x5c91fc                       ; 004f901e | s_modelName_005c91fb+1
    ADD EBX,0x158                       ; 004f9023
    PUSH EBX                            ; 004f9029
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 004f902a
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f902f
    PUSH 0x5c9206                       ; 004f9032 | = "motion state"
    PUSH EBX                            ; 004f9037
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 004f9038
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004f903d
    POP EBX                             ; 004f9040
    RET                                 ; 004f9041

