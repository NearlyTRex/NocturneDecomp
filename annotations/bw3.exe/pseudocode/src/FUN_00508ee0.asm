; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00508ee0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7e2cb4                       ; 00508ee0
        ;   Label: FUN_00508ee0
    PUSH 0x8                            ; 00508ee5
    PUSH 0x6035e4                       ; 00508ee7
    PUSH 0x508f10                       ; 00508eec
    PUSH 0x5cb520                       ; 00508ef1
    PUSH 0x1dd6a44                      ; 00508ef6
    CALL FUN_0040c3a0                   ; 00508efb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00508f00
    RET                                 ; 00508f03

