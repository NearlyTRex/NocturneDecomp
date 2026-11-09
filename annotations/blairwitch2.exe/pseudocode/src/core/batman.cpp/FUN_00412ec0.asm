; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_FUN_00412ec0(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_batman.cpp_FUN_00412f40 at 004135a4
;
; Called Functions:
;   core_actor.cpp_FUN_0040d060
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x3f000000                     ; 00412ec0
        ;   Label: core_batman.cpp_FUN_00412ec0
    CALL core_actor.cpp_FUN_0040d060    ; 00412ec5
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00412eca
    MOV EDX,dword ptr [ESP + 0x4]       ; 00412ecd
    ADD EDX,0x2b4                       ; 00412ed1
    TEST EAX,EAX                        ; 00412ed7
    JZ 0x00412ee9                       ; 00412ed9
        ;   XREF to: 00412ee9 (CONDITIONAL_JUMP)  ; LAB_00412ee9
    PUSH 0x1                            ; 00412edb
    PUSH 0x1                            ; 00412edd
    PUSH EDX                            ; 00412edf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00412ee0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412ee5
    RET                                 ; 00412ee8
    PUSH 0x1                            ; 00412ee9
        ;   Label: LAB_00412ee9
    PUSH 0x2                            ; 00412eeb
    PUSH EDX                            ; 00412eed
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00412eee
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412ef3
    RET                                 ; 00412ef6

