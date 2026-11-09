; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa6e7(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa6e7
        ;   Label: crt_unknown.c_FUN_005aa6e7
    FXCH                                ; 005aa6eb
    FLD ST0                             ; 005aa6ed
    FSTP extended double ptr [ESP]      ; 005aa6ef
    FSTP extended double ptr [ESP + 0x20] ; 005aa6f2
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa6f6
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH                                ; 005aa6fb
    FLD extended double ptr [ESP + 0x20] ; 005aa6fd
    FXCH ST2                            ; 005aa701
    ADD ESP,0x2c                        ; 005aa703
    RET                                 ; 005aa706

