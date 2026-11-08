; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7a4f(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7a4f
        ;   Label: FUN_005c7a4f
    FXCH ST3                            ; 005c7a53
    FSTP extended double ptr [ESP]      ; 005c7a55
    CALL FUN_005c769c                   ; 005c7a58
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST3                            ; 005c7a5d
    ADD ESP,0x2c                        ; 005c7a5f
    RET                                 ; 005c7a62

