; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf777(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf777
        ;   Label: crt_unknown.c_FUN_005bf777
    FXCH ST3                            ; 005bf77b
    FSTP extended double ptr [ESP]      ; 005bf77d
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf780
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST3                            ; 005bf785
    FLD extended double ptr [ESP + 0xc] ; 005bf787
    ADD ESP,0x2c                        ; 005bf78b
    RET                                 ; 005bf78e

