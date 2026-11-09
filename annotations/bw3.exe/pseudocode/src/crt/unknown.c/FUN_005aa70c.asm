; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa70c(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa70c
        ;   Label: crt_unknown.c_FUN_005aa70c
    FXCH                                ; 005aa70f
    FSTP extended double ptr [ESP + 0xc] ; 005aa711
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa715
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH                                ; 005aa71a
    FLD extended double ptr [ESP + 0xc] ; 005aa71c
    FXCH ST2                            ; 005aa720
    ADD ESP,0x2c                        ; 005aa722
    RET                                 ; 005aa725

