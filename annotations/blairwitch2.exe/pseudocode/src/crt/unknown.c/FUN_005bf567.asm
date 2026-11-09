; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf567(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FXCH                                ; 005bf567
        ;   Label: crt_unknown.c_FUN_005bf567
    FSTP extended double ptr [ESP + 0xc] ; 005bf569
    FLD ST0                             ; 005bf56d
    FSTP extended double ptr [ESP]      ; 005bf56f
    FSTP extended double ptr [ESP + 0x20] ; 005bf572
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf576
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FLD extended double ptr [ESP + 0x20] ; 005bf57b
    ADD ESP,0x2c                        ; 005bf57f
    RET                                 ; 005bf582

