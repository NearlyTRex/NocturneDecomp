; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7b07(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7b07
        ;   Label: crt_unknown.c_FUN_005c7b07
    FXCH ST5                            ; 005c7b0b
    FLD ST0                             ; 005c7b0d
    FSTP extended double ptr [ESP]      ; 005c7b0f
    FSTP extended double ptr [ESP + 0x20] ; 005c7b12
    CALL crt_unknown.c_FUN_005c769c     ; 005c7b16
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST5                            ; 005c7b1b
    FLD extended double ptr [ESP + 0x20] ; 005c7b1d
    FXCH ST6                            ; 005c7b21
    ADD ESP,0x2c                        ; 005c7b23
    RET                                 ; 005c7b26

