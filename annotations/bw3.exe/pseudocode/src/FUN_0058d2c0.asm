; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058d2c0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 0058d2c0
        ;   Label: FUN_0058d2c0
    PUSH 0x7                            ; 0058d2c5
    PUSH 0x607344                       ; 0058d2c7
    PUSH 0x58d4b0                       ; 0058d2cc
    PUSH 0x5d89d8                       ; 0058d2d1
    PUSH 0x2d249a0                      ; 0058d2d6
    CALL FUN_0040c3a0                   ; 0058d2db
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0058d2e0
    RET                                 ; 0058d2e3

