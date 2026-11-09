; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf61b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf61b
        ;   Label: crt_unknown.c_FUN_005bf61b
    FXCH                                ; 005bf61e
    FSTP extended double ptr [ESP + 0xc] ; 005bf620
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf624
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH                                ; 005bf629
    ADD ESP,0x2c                        ; 005bf62b
    RET                                 ; 005bf62e

