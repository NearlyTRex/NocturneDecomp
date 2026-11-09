; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c789c(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c789c
        ;   Label: crt_unknown.c_FUN_005c789c
    FXCH                                ; 005c789f
    FSTP extended double ptr [ESP + 0xc] ; 005c78a1
    CALL crt_unknown.c_FUN_005c769c     ; 005c78a5
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH                                ; 005c78aa
    FLD extended double ptr [ESP + 0xc] ; 005c78ac
    FXCH ST2                            ; 005c78b0
    ADD ESP,0x2c                        ; 005c78b2
    RET                                 ; 005c78b5

