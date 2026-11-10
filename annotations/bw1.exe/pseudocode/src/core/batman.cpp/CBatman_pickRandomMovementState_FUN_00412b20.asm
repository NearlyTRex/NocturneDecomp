; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_pickRandomMovementState_FUN_00412b20(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 004132a4
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH 0x3f000000                     ; 00412b20
        ;   Label: core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412b20
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00412b25
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00412b2a
    MOV EDX,dword ptr [ESP + 0x4]       ; 00412b2d
    ADD EDX,0x158                       ; 00412b31
    TEST EAX,EAX                        ; 00412b37
    JZ 0x00412b49                       ; 00412b39
        ;   XREF to: 00412b49 (CONDITIONAL_JUMP)  ; LAB_00412b49
    PUSH 0x1                            ; 00412b3b
    PUSH 0x1                            ; 00412b3d
    PUSH EDX                            ; 00412b3f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00412b40
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412b45
    RET                                 ; 00412b48
    PUSH 0x1                            ; 00412b49
        ;   Label: LAB_00412b49
    PUSH 0x2                            ; 00412b4b
    PUSH EDX                            ; 00412b4d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00412b4e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412b53
    RET                                 ; 00412b56

