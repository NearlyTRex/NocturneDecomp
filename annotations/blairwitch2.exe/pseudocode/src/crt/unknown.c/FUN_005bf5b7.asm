; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf5b7(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf5b7
        ;   Label: crt_unknown.c_FUN_005bf5b7
    FXCH                                ; 005bf5bb
    FLD ST0                             ; 005bf5bd
    FSTP extended double ptr [ESP]      ; 005bf5bf
    FSTP extended double ptr [ESP + 0x20] ; 005bf5c2
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf5c6
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH                                ; 005bf5cb
    FLD extended double ptr [ESP + 0x20] ; 005bf5cd
    FXCH ST2                            ; 005bf5d1
    ADD ESP,0x2c                        ; 005bf5d3
    RET                                 ; 005bf5d6

