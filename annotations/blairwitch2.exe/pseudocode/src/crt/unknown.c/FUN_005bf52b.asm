; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf52b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf52b
        ;   Label: crt_unknown.c_FUN_005bf52b
    FLD ST0                             ; 005bf52f
    FSTP extended double ptr [ESP]      ; 005bf531
    FSTP extended double ptr [ESP + 0x20] ; 005bf534
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf538
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FLD extended double ptr [ESP + 0x20] ; 005bf53d
    FXCH                                ; 005bf541
    ADD ESP,0x2c                        ; 005bf543
    RET                                 ; 005bf546

