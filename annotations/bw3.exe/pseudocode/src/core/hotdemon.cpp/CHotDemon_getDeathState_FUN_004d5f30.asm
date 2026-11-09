; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004d5f30(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_004d5f08 = 004d5f54
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d5f30
        ;   Label: core_hotdemon.cpp_CHotDemon_getDeathState_FUN_004d5f30
    ADD EAX,0x158                       ; 004d5f34
    PUSH EAX                            ; 004d5f39
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004d5f3a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d5f3f
    SUB EAX,0x4                         ; 004d5f42
    ADD ESP,0x4                         ; 004d5f45
    CMP EAX,0x7                         ; 004d5f48
    JA 0x004d5f60                       ; 004d5f4b
        ;   XREF to: 004d5f60 (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x4d5f08]  ; 004d5f4d | caseD_a | caseD_b | caseD_9
        ;   Label: switchD
    MOV EAX,0x1                         ; 004d5f54
        ;   Label: caseD_4
    RET                                 ; 004d5f59
    MOV EAX,0x2                         ; 004d5f5a
        ;   Label: caseD_5
    RET                                 ; 004d5f5f
    XOR EAX,EAX                         ; 004d5f60
        ;   Label: caseD_6
    RET                                 ; 004d5f62

