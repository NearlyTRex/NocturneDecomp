; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7c0f(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c7c0f
        ;   Label: FUN_005c7c0f
    FXCH ST6                            ; 005c7c12
    FSTP extended double ptr [ESP + 0xc] ; 005c7c14
    CALL FUN_005c769c                   ; 005c7c18
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST6                            ; 005c7c1d
    ADD ESP,0x2c                        ; 005c7c1f
    RET                                 ; 005c7c22

