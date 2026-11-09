; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf5fb(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FXCH ST2                            ; 005bf5fb
        ;   Label: crt_unknown.c_FUN_005bf5fb
    FSTP extended double ptr [ESP + 0xc] ; 005bf5fd
    FXCH                                ; 005bf601
    FLD ST0                             ; 005bf603
    FSTP extended double ptr [ESP]      ; 005bf605
    FSTP extended double ptr [ESP + 0x20] ; 005bf608
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf60c
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH                                ; 005bf611
    FLD extended double ptr [ESP + 0x20] ; 005bf613
    ADD ESP,0x2c                        ; 005bf617
    RET                                 ; 005bf61a

