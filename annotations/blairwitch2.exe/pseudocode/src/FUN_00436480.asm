; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00436480(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004ce590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00436480
        ;   Label: FUN_00436480
    PUSH EDX                            ; 00436484
    CALL FUN_004ce590                   ; 00436485
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce590()
    ADD ESP,0x4                         ; 0043648a
    RET                                 ; 0043648d

