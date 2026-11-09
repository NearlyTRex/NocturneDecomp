; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf5dc(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf5dc
        ;   Label: crt_unknown.c_FUN_005bf5dc
    FXCH                                ; 005bf5df
    FSTP extended double ptr [ESP + 0xc] ; 005bf5e1
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf5e5
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH                                ; 005bf5ea
    FLD extended double ptr [ESP + 0xc] ; 005bf5ec
    FXCH ST2                            ; 005bf5f0
    ADD ESP,0x2c                        ; 005bf5f2
    RET                                 ; 005bf5f5

