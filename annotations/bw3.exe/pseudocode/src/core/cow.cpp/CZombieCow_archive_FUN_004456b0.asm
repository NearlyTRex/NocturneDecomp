; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_CZombieCow_archive_FUN_004456b0(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005b997e
;   TerminatedCString s_modelName_005b9984
;   TerminatedCString s_guardDistance_005b998e
;   TerminatedCString s_motion_state_005b999c
;   int g_CZombieCowClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004456b0
        ;   Label: core_cow.cpp_CZombieCow_archive_FUN_004456b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004456b1
    PUSH EBX                            ; 004456b5
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 004456b6
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004456bb
    PUSH 0x5b997e                       ; 004456be | = "speed"
    LEA EAX,[EBX + 0xcdcc]              ; 004456c3
    PUSH EAX                            ; 004456c9
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004456ca
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004456cf
    PUSH 0x5b9984                       ; 004456d2 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 004456d7
    PUSH EAX                            ; 004456dd
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 004456de
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x005f1758]      ; 004456e3 | g_CZombieCowClassVersion
    ADD ESP,0x8                         ; 004456e9
    CMP EDX,0x2                         ; 004456ec
    JL 0x00445707                       ; 004456ef
        ;   XREF to: 00445707 (CONDITIONAL_JUMP)  ; LAB_00445707
    PUSH 0x5b999c                       ; 004456f1 | = "motion state"
        ;   Label: LAB_004456f1
    ADD EBX,0x158                       ; 004456f6
    PUSH EBX                            ; 004456fc
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 004456fd
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00445702
    POP EBX                             ; 00445705
    RET                                 ; 00445706
    PUSH 0x5b998e                       ; 00445707 | = "guardDistance"
        ;   Label: LAB_00445707
    LEA EAX,[EBX + 0xcddc]              ; 0044570c
    PUSH EAX                            ; 00445712
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00445713
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00445718
    JMP 0x004456f1                      ; 0044571b
        ;   XREF to: 004456f1 (UNCONDITIONAL_JUMP)  ; LAB_004456f1

