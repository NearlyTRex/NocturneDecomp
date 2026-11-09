; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004f0510(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_004f04f0 = 004f0534
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f0510
        ;   Label: core_hotdemon.cpp_CHotDemon_getDeathState_FUN_004f0510
    ADD EAX,0x158                       ; 004f0514
    PUSH EAX                            ; 004f0519
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004f051a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f051f
    SUB EAX,0x4                         ; 004f0522
    ADD ESP,0x4                         ; 004f0525
    CMP EAX,0x7                         ; 004f0528
    JA 0x004f0540                       ; 004f052b
        ;   XREF to: 004f0540 (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x4f04f0]  ; 004f052d | caseD_a | caseD_b | caseD_9
        ;   Label: switchD
    MOV EAX,0x1                         ; 004f0534
        ;   Label: caseD_4
    RET                                 ; 004f0539
    MOV EAX,0x2                         ; 004f053a
        ;   Label: caseD_5
    RET                                 ; 004f053f
    XOR EAX,EAX                         ; 004f0540
        ;   Label: caseD_6
    RET                                 ; 004f0542

