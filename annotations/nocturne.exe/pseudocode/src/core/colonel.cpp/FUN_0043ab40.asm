; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_colonel_cpp_FUN_0043ab40(void)
;
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043ab40
        ;   Label: core_colonel.cpp_FUN_0043ab40
    PUSH EDX                            ; 0043ab44
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0043ab45
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    ADD ESP,0x4                         ; 0043ab4a
    MOV EAX,dword ptr [EAX + 0x24]      ; 0043ab4d
    RET                                 ; 0043ab50

