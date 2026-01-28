; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_icepick_cpp_FUN_004f8ad0(void)
;
;
; XREF[1]:
;   core_icepick.cpp_FUN_004f80b0 at 004f858a
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f8ad0
        ;   Label: core_icepick.cpp_FUN_004f8ad0
    CMP dword ptr [EAX + 0x1fbf4],0x0   ; 004f8ad4
    JNZ 0x004f8ae0                      ; 004f8adb
        ;   XREF to: 004f8ae0 (CONDITIONAL_JUMP)  ; LAB_004f8ae0
    XOR EAX,EAX                         ; 004f8add
    RET                                 ; 004f8adf
    PUSH 0x1                            ; 004f8ae0
        ;   Label: LAB_004f8ae0
    PUSH 0x16                           ; 004f8ae2
    ADD EAX,0x158                       ; 004f8ae4
    PUSH EAX                            ; 004f8ae9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f8aea
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004f8aef
    ADD ESP,0xc                         ; 004f8af4
    RET                                 ; 004f8af7

