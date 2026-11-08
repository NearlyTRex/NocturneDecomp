; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bfa80(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 004bfa80
        ;   Label: FUN_004bfa80
    PUSH 0x2                            ; 004bfa85
    PUSH 0x616750                       ; 004bfa87
    PUSH 0x4bfab0                       ; 004bfa8c
    PUSH 0x5d8c02                       ; 004bfa91
    PUSH 0x1cb8150                      ; 004bfa96
    CALL FUN_0040c450                   ; 004bfa9b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004bfaa0
    RET                                 ; 004bfaa3

