; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004b9680(int param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004b965c = 004b96a4
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b9680
        ;   Label: core_hotdemon.cpp_CHotDemon_getDeathState_FUN_004b9680
    ADD EAX,0x150                       ; 004b9684
    PUSH EAX                            ; 004b9689
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b968a
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b968f
    SUB EAX,0x4                         ; 004b9692
    ADD ESP,0x4                         ; 004b9695
    CMP EAX,0x7                         ; 004b9698
    JA 0x004b96b0                       ; 004b969b
        ;   XREF to: 004b96b0 (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x4b965c]  ; 004b969d | caseD_a | caseD_b | caseD_9
        ;   Label: switchD
    MOV EAX,0x1                         ; 004b96a4
        ;   Label: caseD_4
    RET                                 ; 004b96a9
    MOV EAX,0x2                         ; 004b96aa
        ;   Label: caseD_5
    RET                                 ; 004b96af
    XOR EAX,EAX                         ; 004b96b0
        ;   Label: caseD_6
    RET                                 ; 004b96b2

