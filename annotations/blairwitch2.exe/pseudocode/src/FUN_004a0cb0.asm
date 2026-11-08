; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0cb0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 004a0cb0
        ;   Label: FUN_004a0cb0
    PUSH 0x1                            ; 004a0cb5
    PUSH 0x615edc                       ; 004a0cb7
    PUSH 0x4a0ce0                       ; 004a0cbc
    PUSH 0x5d5990                       ; 004a0cc1
    PUSH 0x1cab6fc                      ; 004a0cc6
    CALL FUN_0040c450                   ; 004a0ccb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004a0cd0
    RET                                 ; 004a0cd3

