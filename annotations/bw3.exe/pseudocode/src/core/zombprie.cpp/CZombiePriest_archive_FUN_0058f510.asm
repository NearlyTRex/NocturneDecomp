; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombprie_cpp_CZombiePriest_archive_FUN_0058f510(CZombiePriest *this_ptr)
;
; Parameters:
; CZombiePriest *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d8c4f+1
;   TerminatedCString s_modelName_005d8c56
;   TerminatedCString s_guardDistance_005d8c60
;   TerminatedCString s_motion_state_005d8c6e
;   TerminatedCString s_clothList_005d8c7b
;   TerminatedCString s_postMode_005d8c85
;   TerminatedCString s_ourPost_005d8c8e
;   TerminatedCString s_holdPosFlag_005d8c96
;   TerminatedCString s_holdPosCond_005d8ca2
;   int g_CZombiePriestClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveClothList_FUN_0040bf20
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058f510
        ;   Label: core_zombprie.cpp_CZombiePriest_archive_FUN_0058f510
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058f511
    PUSH EBX                            ; 0058f515
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 0058f516
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0058f51b
    PUSH 0x5d8c50                       ; 0058f51e | s_speed_005d8c4f+1
    LEA EAX,[EBX + 0xcdcc]              ; 0058f523
    PUSH EAX                            ; 0058f529
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0058f52a
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0058f52f
    PUSH 0x5d8c56                       ; 0058f532 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0058f537
    PUSH EAX                            ; 0058f53d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 0058f53e
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x00607344]      ; 0058f543 | g_CZombiePriestClassVersion
    ADD ESP,0x8                         ; 0058f549
    CMP EDX,0x4                         ; 0058f54c
    JL 0x0058f5c0                       ; 0058f54f
        ;   XREF to: 0058f5c0 (CONDITIONAL_JUMP)  ; LAB_0058f5c0
    PUSH 0x5d8c6e                       ; 0058f551 | = "motion state"
        ;   Label: LAB_0058f551
    LEA EAX,[EBX + 0x158]               ; 0058f556
    PUSH EAX                            ; 0058f55c
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 0058f55d
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    MOV ECX,dword ptr [0x00607344]      ; 0058f562 | g_CZombiePriestClassVersion
    ADD ESP,0x8                         ; 0058f568
    CMP ECX,0x2                         ; 0058f56b
    JNZ 0x0058f584                      ; 0058f56e
        ;   XREF to: 0058f584 (CONDITIONAL_JUMP)  ; LAB_0058f584
    PUSH 0x5d8c7b                       ; 0058f570 | = "clothList"
    LEA EAX,[EBX + 0x2f08]              ; 0058f575
    PUSH EAX                            ; 0058f57b
    CALL core_actor.cpp_archiveClothList_FUN_0040bf20 ; 0058f57c
        ;   XREF to: 0040bf20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveClothList_FUN_0040bf20()
    ADD ESP,0x8                         ; 0058f581
    CMP dword ptr [0x00607344],0x5      ; 0058f584 | g_CZombiePriestClassVersion
        ;   Label: LAB_0058f584
    JL 0x0058f5b5                       ; 0058f58b
        ;   XREF to: 0058f5b5 (CONDITIONAL_JUMP)  ; LAB_0058f5b5
    PUSH 0x5d8c85                       ; 0058f58d | = "postMode"
    LEA EAX,[EBX + 0xd064]              ; 0058f592
    PUSH EAX                            ; 0058f598
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0058f599
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058f59e
    PUSH 0x5d8c8e                       ; 0058f5a1 | = "ourPost"
    LEA EAX,[EBX + 0xd068]              ; 0058f5a6
    PUSH EAX                            ; 0058f5ac
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0058f5ad
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0058f5b2
    CMP dword ptr [0x00607344],0x7      ; 0058f5b5 | g_CZombiePriestClassVersion
        ;   Label: LAB_0058f5b5
    JGE 0x0058f5d9                      ; 0058f5bc
        ;   XREF to: 0058f5d9 (CONDITIONAL_JUMP)  ; LAB_0058f5d9
    POP EBX                             ; 0058f5be
    RET                                 ; 0058f5bf
    PUSH 0x5d8c60                       ; 0058f5c0 | = "guardDistance"
        ;   Label: LAB_0058f5c0
    LEA EAX,[EBX + 0xcddc]              ; 0058f5c5
    PUSH EAX                            ; 0058f5cb
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0058f5cc
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0058f5d1
    JMP 0x0058f551                      ; 0058f5d4
        ;   XREF to: 0058f551 (UNCONDITIONAL_JUMP)  ; LAB_0058f551
    PUSH 0x5d8c96                       ; 0058f5d9 | = "holdPosFlag"
        ;   Label: LAB_0058f5d9
    LEA EAX,[EBX + 0xd06c]              ; 0058f5de
    PUSH EAX                            ; 0058f5e4
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0058f5e5
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058f5ea
    PUSH 0x5d8ca2                       ; 0058f5ed | = "holdPosCond"
    ADD EBX,0xd070                      ; 0058f5f2
    PUSH EBX                            ; 0058f5f8
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0058f5f9
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0058f5fe
    POP EBX                             ; 0058f601
    RET                                 ; 0058f602

