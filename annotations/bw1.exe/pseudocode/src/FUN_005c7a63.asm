; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7a63(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7a63
        ;   Label: FUN_005c7a63
    FXCH ST4                            ; 005c7a67
    FLD ST0                             ; 005c7a69
    FSTP extended double ptr [ESP]      ; 005c7a6b
    FSTP extended double ptr [ESP + 0x20] ; 005c7a6e
    CALL FUN_005c769c                   ; 005c7a72
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST4                            ; 005c7a77
    FLD extended double ptr [ESP + 0x20] ; 005c7a79
    FXCH ST5                            ; 005c7a7d
    ADD ESP,0x2c                        ; 005c7a7f
    RET                                 ; 005c7a82

