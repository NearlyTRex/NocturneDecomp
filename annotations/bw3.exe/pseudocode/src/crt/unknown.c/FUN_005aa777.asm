; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa777(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa777
        ;   Label: crt_unknown.c_FUN_005aa777
    FXCH                                ; 005aa77b
    FSTP extended double ptr [ESP]      ; 005aa77d
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa780
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH                                ; 005aa785
    ADD ESP,0x2c                        ; 005aa787
    RET                                 ; 005aa78a

