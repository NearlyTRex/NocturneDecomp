; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c4d80(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 004c4d80
        ;   Label: FUN_004c4d80
    PUSH 0x2                            ; 004c4d85
    PUSH 0x5fec80                       ; 004c4d87
    PUSH 0x4c4db0                       ; 004c4d8c
    PUSH 0x5c3dc8                       ; 004c4d91
    PUSH 0x1d22cd4                      ; 004c4d96
    CALL FUN_0040c3a0                   ; 004c4d9b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004c4da0
    RET                                 ; 004c4da3

