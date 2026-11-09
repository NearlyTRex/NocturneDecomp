; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa75f(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa75f
        ;   Label: crt_unknown.c_FUN_005aa75f
    FXCH                                ; 005aa763
    FSTP extended double ptr [ESP]      ; 005aa765
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa768
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH                                ; 005aa76d
    FLD extended double ptr [ESP + 0xc] ; 005aa76f
    ADD ESP,0x2c                        ; 005aa773
    RET                                 ; 005aa776

