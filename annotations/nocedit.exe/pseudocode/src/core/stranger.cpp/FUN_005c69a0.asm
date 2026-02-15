; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_FUN_005c69a0(void)
;
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c69a0
        ;   Label: core_stranger.cpp_FUN_005c69a0
    ADD EAX,0x158                       ; 005c69a4
    PUSH EAX                            ; 005c69a9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005c69aa
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005c69af
    MOV EAX,dword ptr [EAX + 0x24]      ; 005c69b2
    RET                                 ; 005c69b5

