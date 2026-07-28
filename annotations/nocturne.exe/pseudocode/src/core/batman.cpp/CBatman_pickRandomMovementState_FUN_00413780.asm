; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_pickRandomMovementState_FUN_00413780(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413d54
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH 0x3f000000                     ; 00413780
        ;   Label: core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00413785
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 0041378a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0041378d
    ADD EDX,0x150                       ; 00413791
    TEST EAX,EAX                        ; 00413797
    JZ 0x004137a9                       ; 00413799
        ;   XREF to: 004137a9 (CONDITIONAL_JUMP)  ; LAB_004137a9
    PUSH 0x1                            ; 0041379b
    PUSH 0x1                            ; 0041379d
    PUSH EDX                            ; 0041379f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004137a0
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004137a5
    RET                                 ; 004137a8
    PUSH 0x1                            ; 004137a9
        ;   Label: LAB_004137a9
    PUSH 0x2                            ; 004137ab
    PUSH EDX                            ; 004137ad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004137ae
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004137b3
    RET                                 ; 004137b6

