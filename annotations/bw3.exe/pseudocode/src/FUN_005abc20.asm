; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005abc20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00607bdc
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00607bdc]      ; 005abc20 | DAT_00607bdc
        ;   Label: FUN_005abc20
    TEST EDX,EDX                        ; 005abc26
    JZ 0x005abc3b                       ; 005abc28
        ;   XREF to: 005abc3b (CONDITIONAL_JUMP)  ; LAB_005abc3b
    PUSH EDX                            ; 005abc2a
    CALL FUN_005a3770                   ; 005abc2b
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    XOR ECX,ECX                         ; 005abc30
    ADD ESP,0x4                         ; 005abc32
    MOV dword ptr [0x00607bdc],ECX      ; 005abc35 | DAT_00607bdc
    RET                                 ; 005abc3b
        ;   Label: LAB_005abc3b

