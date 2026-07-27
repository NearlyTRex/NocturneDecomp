; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_stranger_cpp_FUN_00540a70(void)
;
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00540a70
        ;   Label: core_stranger.cpp_FUN_00540a70
    ADD EAX,0x150                       ; 00540a74
    PUSH EAX                            ; 00540a79
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00540a7a
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    ADD ESP,0x4                         ; 00540a7f
    MOV EAX,dword ptr [EAX + 0x24]      ; 00540a82
    RET                                 ; 00540a85

