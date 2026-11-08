; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534da0(void)
;
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH 0x5fb310                       ; 00534da0
        ;   Label: FUN_00534da0
    PUSH 0x5                            ; 00534da5
    PUSH 0x2093618                      ; 00534da7
    CALL FUN_005b7f5f                   ; 00534dac
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00534db1
    RET                                 ; 00534db4

