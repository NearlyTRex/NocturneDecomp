; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_batman_cpp_CBatman_FUN_004167f0(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_batman.cpp_CBatman_process_FUN_00416870 at 004170ad
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH 0x3f000000                     ; 004167f0
        ;   Label: core_batman.cpp_CBatman_FUN_004167f0
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004167f5
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004167fa
    MOV EDX,dword ptr [ESP + 0x4]       ; 004167fd
    ADD EDX,0x158                       ; 00416801
    TEST EAX,EAX                        ; 00416807
    JZ 0x00416819                       ; 00416809
        ;   XREF to: 00416819 (CONDITIONAL_JUMP)  ; LAB_00416819
    PUSH 0x1                            ; 0041680b
    PUSH 0x1                            ; 0041680d
    PUSH EDX                            ; 0041680f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00416810
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00416815
    RET                                 ; 00416818
    PUSH 0x1                            ; 00416819
        ;   Label: LAB_00416819
    PUSH 0x2                            ; 0041681b
    PUSH EDX                            ; 0041681d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041681e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00416823
    RET                                 ; 00416826

