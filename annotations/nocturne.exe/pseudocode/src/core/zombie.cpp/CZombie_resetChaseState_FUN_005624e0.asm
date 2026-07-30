; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_zombie.cpp_CZombie_process_FUN_0055ef50 at 0055f094
;   core_zombie.cpp_FUN_00561010 at 00561413
;
; Referenced Globals:
;   TerminatedCString s_CHASE_2_005989a8
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005624e0
        ;   Label: core_zombie.cpp_CZombie_resetChaseState_FUN_005624e0
    PUSH 0x0                            ; 005624e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005624e3
    PUSH 0x5989a8                       ; 005624e7 | = "CHASE_2"
    ADD EBX,0x150                       ; 005624ec
    PUSH EBX                            ; 005624f2
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 005624f3
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005624f8
    PUSH EAX                            ; 005624fb
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0 ; 005624fc
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00562501
    CMP EAX,0x16                        ; 00562504
    JNZ 0x00562539                      ; 00562507
        ;   XREF to: 00562539 (CONDITIONAL_JUMP)  ; LAB_00562539
    MOV EAX,dword ptr [ESP + 0x8]       ; 00562509
    MOV EDX,dword ptr [EAX + 0xbdac]    ; 0056250d
    TEST EDX,EDX                        ; 00562513
    JZ 0x00562526                       ; 00562515
        ;   XREF to: 00562526 (CONDITIONAL_JUMP)  ; LAB_00562526
    PUSH 0x1                            ; 00562517
    PUSH 0x16                           ; 00562519
    PUSH EBX                            ; 0056251b
        ;   Label: LAB_0056251b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0056251c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00562521
    POP EBX                             ; 00562524
    RET                                 ; 00562525
    PUSH 0x1                            ; 00562526
        ;   Label: LAB_00562526
    PUSH 0x2                            ; 00562528
    PUSH EDX                            ; 0056252a
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0056252b
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 00562530
    ADD EAX,0x15                        ; 00562533
    PUSH EAX                            ; 00562536
    JMP 0x0056251b                      ; 00562537
        ;   XREF to: 0056251b (UNCONDITIONAL_JUMP)  ; LAB_0056251b
    PUSH 0x1                            ; 00562539
        ;   Label: LAB_00562539
    PUSH 0x1                            ; 0056253b
    PUSH EBX                            ; 0056253d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0056253e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00562543
    POP EBX                             ; 00562546
    RET                                 ; 00562547

