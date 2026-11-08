; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f440(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0040f440
        ;   Label: FUN_0040f440
    PUSH 0x1                            ; 0040f445
    PUSH 0x5f0bec                       ; 0040f447
    PUSH 0x40f470                       ; 0040f44c
    PUSH 0x5b62d6                       ; 0040f451
    PUSH 0x7dfe90                       ; 0040f456
    CALL FUN_0040c3a0                   ; 0040f45b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0040f460
    RET                                 ; 0040f463

