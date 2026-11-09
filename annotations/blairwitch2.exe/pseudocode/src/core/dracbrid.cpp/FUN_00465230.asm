; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dracbrid_cpp_FUN_00465230(int param_1)
;
;
; Referenced Globals:
;   undefined4 caseD_8
;   undefined1* switchdataD_00465204 = 0046523f
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00465230
        ;   Label: core_dracbrid.cpp_FUN_00465230
    MOV EDX,dword ptr [EAX + 0x70]      ; 00465234
    CMP EDX,0x2                         ; 00465237
    JNZ 0x0046524b                      ; 0046523a
        ;   XREF to: 0046524b (CONDITIONAL_JUMP)  ; LAB_0046524b
    MOV EAX,EDX                         ; 0046523c
    RET                                 ; 0046523e
    MOV EAX,0x1                         ; 0046523f
        ;   Label: caseD_7
    RET                                 ; 00465244
    MOV EAX,0x2                         ; 00465245
        ;   Label: caseD_10
    RET                                 ; 0046524a
    ADD EAX,0x2b4                       ; 0046524b
        ;   Label: LAB_0046524b
    PUSH EAX                            ; 00465250
    CALL core_motion.cpp_FUN_005035c0   ; 00465251
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00465256
    SUB EAX,0x7                         ; 00465259
    ADD ESP,0x4                         ; 0046525c
    CMP EAX,0xa                         ; 0046525f
    JA 0x00464aad                       ; 00465262
        ;   XREF to: 00464aad (CONDITIONAL_JUMP)  ; caseD_f
    JMP dword ptr [EAX*0x4 + 0x465204]  ; 00465268 | caseD_a | caseD_f | caseD_11
        ;   Label: switchD

