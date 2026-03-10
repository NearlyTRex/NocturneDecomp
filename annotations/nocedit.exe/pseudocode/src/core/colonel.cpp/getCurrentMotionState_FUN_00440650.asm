; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_colonel_cpp_getCurrentMotionState_FUN_00440650(CMotionController *motion_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   motion_ptr
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00440650
        ;   Label: core_colonel.cpp_getCurrentMotionState_FUN_00440650
    PUSH EDX                            ; 00440654
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00440655
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0044065a
    MOV EAX,dword ptr [EAX + 0x24]      ; 0044065d
    RET                                 ; 00440660

