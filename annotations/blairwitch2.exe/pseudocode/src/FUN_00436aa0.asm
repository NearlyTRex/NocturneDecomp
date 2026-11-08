; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00436aa0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 00436aa0
        ;   Label: FUN_00436aa0
    PUSH 0x3                            ; 00436aa5
    PUSH 0x609f00                       ; 00436aa7
    PUSH 0x436ad0                       ; 00436aac
    PUSH 0x5cdc3b                       ; 00436ab1
    PUSH 0x7c2584                       ; 00436ab6
    CALL FUN_0040c450                   ; 00436abb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 00436ac0
    RET                                 ; 00436ac3

