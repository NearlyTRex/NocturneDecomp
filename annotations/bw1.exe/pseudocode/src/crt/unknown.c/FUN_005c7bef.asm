; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7bef(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FXCH ST7                            ; 005c7bef
        ;   Label: crt_unknown.c_FUN_005c7bef
    FSTP extended double ptr [ESP + 0xc] ; 005c7bf1
    FXCH ST6                            ; 005c7bf5
    FLD ST0                             ; 005c7bf7
    FSTP extended double ptr [ESP]      ; 005c7bf9
    FSTP extended double ptr [ESP + 0x20] ; 005c7bfc
    CALL crt_unknown.c_FUN_005c769c     ; 005c7c00
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST6                            ; 005c7c05
    FLD extended double ptr [ESP + 0x20] ; 005c7c07
    ADD ESP,0x2c                        ; 005c7c0b
    RET                                 ; 005c7c0e

