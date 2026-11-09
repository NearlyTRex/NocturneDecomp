; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confedrt_cpp_FUN_005a0fd0(int param_1)
;
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a0fd0
        ;   Label: core_confedrt.cpp_FUN_005a0fd0
    MOV EDX,dword ptr [EAX + 0x11390]   ; 005a0fd4
    TEST EDX,EDX                        ; 005a0fda
    JGE 0x005a0fdf                      ; 005a0fdc
        ;   XREF to: 005a0fdf (CONDITIONAL_JUMP)  ; LAB_005a0fdf
    RET                                 ; 005a0fde
    PUSH 0x1                            ; 005a0fdf
        ;   Label: LAB_005a0fdf
    PUSH EDX                            ; 005a0fe1
    ADD EAX,0x2b4                       ; 005a0fe2
    PUSH EAX                            ; 005a0fe7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a0fe8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a0fed
    RET                                 ; 005a0ff0

