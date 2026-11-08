; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e9d0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0040e9d0
        ;   Label: FUN_0040e9d0
    PUSH 0x1                            ; 0040e9d5
    PUSH 0x6097a8                       ; 0040e9d7
    PUSH 0x40ea00                       ; 0040e9dc
    PUSH 0x5cb2ec                       ; 0040e9e1
    PUSH 0x7bc3e4                       ; 0040e9e6
    CALL FUN_0040c450                   ; 0040e9eb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0040e9f0
    RET                                 ; 0040e9f3

