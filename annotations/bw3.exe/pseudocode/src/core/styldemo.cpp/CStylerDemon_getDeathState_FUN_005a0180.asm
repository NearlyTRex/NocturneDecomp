; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_styldemo_cpp_CStylerDemon_getDeathState_FUN_005a0180(CStylerDemon *this_ptr)
;
; Parameters:
; CStylerDemon *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_005a0150 = 005a01a4
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a0180
        ;   Label: core_styldemo.cpp_CStylerDemon_getDeathState_FUN_005a0180
    ADD EAX,0x158                       ; 005a0184
    PUSH EAX                            ; 005a0189
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005a018a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a018f
    SUB EAX,0x5                         ; 005a0192
    ADD ESP,0x4                         ; 005a0195
    CMP EAX,0xa                         ; 005a0198
    JA 0x005a01b0                       ; 005a019b
        ;   XREF to: 005a01b0 (CONDITIONAL_JUMP)  ; caseD_d
    JMP dword ptr [EAX*0x4 + 0x5a0150]  ; 005a019d | caseD_e | caseD_f | caseD_d
        ;   Label: switchD
    MOV EAX,0x1                         ; 005a01a4
        ;   Label: caseD_5
    RET                                 ; 005a01a9
    MOV EAX,0x2                         ; 005a01aa
        ;   Label: caseD_6
    RET                                 ; 005a01af
    XOR EAX,EAX                         ; 005a01b0
        ;   Label: caseD_7
    RET                                 ; 005a01b2

