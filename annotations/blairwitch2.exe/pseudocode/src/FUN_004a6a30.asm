; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a6a30(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004a6a30
        ;   Label: FUN_004a6a30
    PUSH 0x3                            ; 004a6a35
    PUSH 0x616374                       ; 004a6a37
    PUSH 0x4a6a60                       ; 004a6a3c
    PUSH 0x5d66a1                       ; 004a6a41
    PUSH 0x1caf5f0                      ; 004a6a46
    CALL FUN_0040c450                   ; 004a6a4b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004a6a50
    RET                                 ; 004a6a53

