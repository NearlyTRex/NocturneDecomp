; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf54c(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf54c
        ;   Label: crt_unknown.c_FUN_005bf54c
    FSTP extended double ptr [ESP + 0xc] ; 005bf54f
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf553
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FLD extended double ptr [ESP + 0xc] ; 005bf558
    FXCH                                ; 005bf55c
    ADD ESP,0x2c                        ; 005bf55e
    RET                                 ; 005bf561

