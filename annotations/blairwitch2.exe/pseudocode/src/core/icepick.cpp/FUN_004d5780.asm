; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_icepick_cpp_FUN_004d5780(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_icepick.cpp_FUN_004d4c50 at 004d51b5
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d5780
        ;   Label: core_icepick.cpp_FUN_004d5780
    CMP dword ptr [EAX + 0x25660],0x0   ; 004d5784
    JNZ 0x004d5790                      ; 004d578b
        ;   XREF to: 004d5790 (CONDITIONAL_JUMP)  ; LAB_004d5790
    XOR EAX,EAX                         ; 004d578d
    RET                                 ; 004d578f
    PUSH 0x1                            ; 004d5790
        ;   Label: LAB_004d5790
    PUSH 0x16                           ; 004d5792
    ADD EAX,0x2b4                       ; 004d5794
    PUSH EAX                            ; 004d5799
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d579a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004d579f
    ADD ESP,0xc                         ; 004d57a4
    RET                                 ; 004d57a7

