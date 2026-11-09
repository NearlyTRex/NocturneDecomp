; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa74b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa74b
        ;   Label: crt_unknown.c_FUN_005aa74b
    FXCH                                ; 005aa74e
    FSTP extended double ptr [ESP + 0xc] ; 005aa750
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa754
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH                                ; 005aa759
    ADD ESP,0x2c                        ; 005aa75b
    RET                                 ; 005aa75e

