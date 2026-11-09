; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c78db(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c78db
        ;   Label: crt_unknown.c_FUN_005c78db
    FXCH                                ; 005c78de
    FSTP extended double ptr [ESP + 0xc] ; 005c78e0
    CALL crt_unknown.c_FUN_005c769c     ; 005c78e4
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH                                ; 005c78e9
    ADD ESP,0x2c                        ; 005c78eb
    RET                                 ; 005c78ee

