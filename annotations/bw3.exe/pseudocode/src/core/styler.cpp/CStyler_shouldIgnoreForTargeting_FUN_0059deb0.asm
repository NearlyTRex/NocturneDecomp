; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_styler_cpp_CStyler_shouldIgnoreForTargeting_FUN_0059deb0(CStyler *this_ptr)
;
; Parameters:
; CStyler *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059deb0
        ;   Label: core_styler.cpp_CStyler_shouldIgnoreForTargeting_FUN_0059deb0
    ADD EAX,0x158                       ; 0059deb4
    PUSH EAX                            ; 0059deb9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0059deba
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059debf
    ADD ESP,0x4                         ; 0059dec2
    CMP EAX,0x9a                        ; 0059dec5
    SETZ AL                             ; 0059deca
    AND EAX,0xff                        ; 0059decd
    RET                                 ; 0059ded2

