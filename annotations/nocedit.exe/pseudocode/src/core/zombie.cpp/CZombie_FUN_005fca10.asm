; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_zombie_cpp_CZombie_FUN_005fca10(void)
;
;
; XREF[2]:
;   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 at 005fb933
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005f95b4
;
; Referenced Globals:
;   TerminatedCString s_CHASE_2_00658a47
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fca10
        ;   Label: core_zombie.cpp_CZombie_FUN_005fca10
    PUSH 0x0                            ; 005fca11
    MOV EBX,dword ptr [ESP + 0xc]       ; 005fca13
    PUSH 0x658a47                       ; 005fca17 | = "CHASE_2"
    ADD EBX,0x158                       ; 005fca1c
    PUSH EBX                            ; 005fca22
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 005fca23
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005fca28
    PUSH EAX                            ; 005fca2b
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 005fca2c
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 005fca31
    CMP EAX,0x16                        ; 005fca34
    JNZ 0x005fca69                      ; 005fca37
        ;   XREF to: 005fca69 (CONDITIONAL_JUMP)  ; LAB_005fca69
    MOV EAX,dword ptr [ESP + 0x8]       ; 005fca39
    MOV EDX,dword ptr [EAX + 0xbf44]    ; 005fca3d
    TEST EDX,EDX                        ; 005fca43
    JZ 0x005fca56                       ; 005fca45
        ;   XREF to: 005fca56 (CONDITIONAL_JUMP)  ; LAB_005fca56
    PUSH 0x1                            ; 005fca47
    PUSH 0x16                           ; 005fca49
    PUSH EBX                            ; 005fca4b
        ;   Label: LAB_005fca4b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fca4c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fca51
    POP EBX                             ; 005fca54
    RET                                 ; 005fca55
    PUSH 0x1                            ; 005fca56
        ;   Label: LAB_005fca56
    PUSH 0x2                            ; 005fca58
    PUSH EDX                            ; 005fca5a
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005fca5b
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 005fca60
    ADD EAX,0x15                        ; 005fca63
    PUSH EAX                            ; 005fca66
    JMP 0x005fca4b                      ; 005fca67
        ;   XREF to: 005fca4b (UNCONDITIONAL_JUMP)  ; LAB_005fca4b
    PUSH 0x1                            ; 005fca69
        ;   Label: LAB_005fca69
    PUSH 0x1                            ; 005fca6b
    PUSH EBX                            ; 005fca6d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fca6e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fca73
    POP EBX                             ; 005fca76
    RET                                 ; 005fca77

