; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_werewolf.cpp_FUN_005f11a0()
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042c920
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005f11a0
        ;   Label: core_werewolf.cpp_FUN_005f11a0
    ADD EAX,0x158                       ; 005f11a4
    PUSH EAX                            ; 005f11a9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005f11aa | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005f11af
    ADD ESP,0x4                         ; 005f11b2
    CMP EAX,0x13                        ; 005f11b5
    JNZ 0x005f11bb                      ; 005f11b8 | LAB_005f11bb
        ;   XREF to: 005f11bb (CONDITIONAL_JUMP)
    RET                                 ; 005f11ba
    PUSH dword ptr [ESP + 0x10]         ; 005f11bb
        ;   Label: LAB_005f11bb
    MOV EDX,dword ptr [ESP + 0xc]       ; 005f11bf
    PUSH dword ptr [ESP + 0x10]         ; 005f11c3
    PUSH EDX                            ; 005f11c7
    MOV ECX,dword ptr [ESP + 0x10]      ; 005f11c8
    PUSH ECX                            ; 005f11cc
    CALL core_charactr.cpp_CCharacter_FUN_0042c920 ; 005f11cd | void core_charactr.cpp_CCharacter_FUN_0042c920(CCharacter * this_ptr)
        ;   XREF to: 0042c920 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005f11d2
    RET                                 ; 005f11d5

