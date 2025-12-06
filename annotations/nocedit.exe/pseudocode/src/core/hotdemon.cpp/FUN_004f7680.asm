; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hotdemon.cpp_FUN_004f7680()
;
;
; Referenced Globals:
;   void* switchdataD_004f765c = 004f76a4
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f7680
        ;   Label: core_hotdemon.cpp_FUN_004f7680
    ADD EAX,0x158                       ; 004f7684
    PUSH EAX                            ; 004f7689
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f768a | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f768f
    SUB EAX,0x4                         ; 004f7692
    ADD ESP,0x4                         ; 004f7695
    CMP EAX,0x7                         ; 004f7698
    JA 0x004f76b0                       ; 004f769b | caseD_8
        ;   XREF to: 004f76b0 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x4f765c]  ; 004f769d | void * switchdataD_004f765c
        ;   Label: switchD
    MOV EAX,0x1                         ; 004f76a4
        ;   Label: caseD_a
    RET                                 ; 004f76a9
    MOV EAX,0x2                         ; 004f76aa
        ;   Label: caseD_b
    RET                                 ; 004f76af
    XOR EAX,EAX                         ; 004f76b0
        ;   Label: caseD_9
    RET                                 ; 004f76b2

