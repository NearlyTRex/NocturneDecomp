; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050dca0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0050dca0
        ;   Label: FUN_0050dca0
    PUSH 0x8                            ; 0050dca5
    PUSH 0x6036e0                       ; 0050dca7
    PUSH 0x50dcd0                       ; 0050dcac
    PUSH 0x5cbab5                       ; 0050dcb1
    PUSH 0x1ed2a78                      ; 0050dcb6
    CALL FUN_0040c3a0                   ; 0050dcbb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0050dcc0
    RET                                 ; 0050dcc3

