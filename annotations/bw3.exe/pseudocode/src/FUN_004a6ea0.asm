; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a6ea0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004a6ea0
        ;   Label: FUN_004a6ea0
    PUSH 0x1                            ; 004a6ea5
    PUSH 0x5fe24c                       ; 004a6ea7
    PUSH 0x4a6ed0                       ; 004a6eac
    PUSH 0x5c0c8c                       ; 004a6eb1
    PUSH 0x1d0cf28                      ; 004a6eb6
    CALL FUN_0040c3a0                   ; 004a6ebb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004a6ec0
    RET                                 ; 004a6ec3

