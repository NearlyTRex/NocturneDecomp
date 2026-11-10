; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004d42f0(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_004d42d0 = 004d4314
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d42f0
        ;   Label: core_hotdemon.cpp_CHotDemon_getDeathState_FUN_004d42f0
    ADD EAX,0x2b4                       ; 004d42f4
    PUSH EAX                            ; 004d42f9
    CALL core_motion.cpp_FUN_005035c0   ; 004d42fa
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d42ff
    SUB EAX,0x4                         ; 004d4302
    ADD ESP,0x4                         ; 004d4305
    CMP EAX,0x7                         ; 004d4308
    JA 0x004d4320                       ; 004d430b
        ;   XREF to: 004d4320 (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x4d42d0]  ; 004d430d | caseD_a | caseD_b | caseD_9
        ;   Label: switchD
    MOV EAX,0x1                         ; 004d4314
        ;   Label: caseD_4
    RET                                 ; 004d4319
    MOV EAX,0x2                         ; 004d431a
        ;   Label: caseD_5
    RET                                 ; 004d431f
    XOR EAX,EAX                         ; 004d4320
        ;   Label: caseD_6
    RET                                 ; 004d4322

