; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa72b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FXCH ST2                            ; 005aa72b
        ;   Label: crt_unknown.c_FUN_005aa72b
    FSTP extended double ptr [ESP + 0xc] ; 005aa72d
    FXCH                                ; 005aa731
    FLD ST0                             ; 005aa733
    FSTP extended double ptr [ESP]      ; 005aa735
    FSTP extended double ptr [ESP + 0x20] ; 005aa738
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa73c
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH                                ; 005aa741
    FLD extended double ptr [ESP + 0x20] ; 005aa743
    ADD ESP,0x2c                        ; 005aa747
    RET                                 ; 005aa74a

