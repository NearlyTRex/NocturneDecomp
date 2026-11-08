; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055a640(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e48a0                       ; 0055a640
        ;   Label: FUN_0055a640
    PUSH 0x40                           ; 0055a645
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055a647
    PUSH EDX                            ; 0055a64b
    CALL FUN_005a3de6                   ; 0055a64c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 0055a651
    RET                                 ; 0055a654

