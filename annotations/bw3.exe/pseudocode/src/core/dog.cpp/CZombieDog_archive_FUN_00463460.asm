; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog_cpp_CZombieDog_archive_FUN_00463460(CZombieDog *this_ptr)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005bbc63+1
;   TerminatedCString s_modelName_005bbc6a
;   TerminatedCString s_guardDistance_005bbc74
;   TerminatedCString s_motion_state_005bbc82
;   int g_CZombieDogClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463460
        ;   Label: core_dog.cpp_CZombieDog_archive_FUN_00463460
    MOV EBX,dword ptr [ESP + 0x8]       ; 00463461
    PUSH EBX                            ; 00463465
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 00463466
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0046346b
    PUSH 0x5bbc64                       ; 0046346e | s_speed_005bbc63+1
    LEA EAX,[EBX + 0xcdcc]              ; 00463473
    PUSH EAX                            ; 00463479
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0046347a
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0046347f
    PUSH 0x5bbc6a                       ; 00463482 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00463487
    PUSH EAX                            ; 0046348d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 0046348e
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x005f2a5c]      ; 00463493 | g_CZombieDogClassVersion
    ADD ESP,0x8                         ; 00463499
    CMP EDX,0x2                         ; 0046349c
    JL 0x004634b7                       ; 0046349f
        ;   XREF to: 004634b7 (CONDITIONAL_JUMP)  ; LAB_004634b7
    PUSH 0x5bbc82                       ; 004634a1 | = "motion state"
        ;   Label: LAB_004634a1
    ADD EBX,0x158                       ; 004634a6
    PUSH EBX                            ; 004634ac
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 004634ad
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004634b2
    POP EBX                             ; 004634b5
    RET                                 ; 004634b6
    PUSH 0x5bbc74                       ; 004634b7 | = "guardDistance"
        ;   Label: LAB_004634b7
    LEA EAX,[EBX + 0xcddc]              ; 004634bc
    PUSH EAX                            ; 004634c2
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004634c3
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004634c8
    JMP 0x004634a1                      ; 004634cb
        ;   XREF to: 004634a1 (UNCONDITIONAL_JUMP)  ; LAB_004634a1

