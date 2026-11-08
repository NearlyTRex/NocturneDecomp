; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059cb70(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 0059cb70
        ;   Label: FUN_0059cb70
    PUSH 0x1                            ; 0059cb75
    PUSH 0x61ea8c                       ; 0059cb77
    PUSH 0x59cba0                       ; 0059cb7c
    PUSH 0x5ef799                       ; 0059cb81
    PUSH 0x2668168                      ; 0059cb86
    CALL FUN_0040c450                   ; 0059cb8b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0059cb90
    RET                                 ; 0059cb93

