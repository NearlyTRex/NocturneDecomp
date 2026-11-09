; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf81b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf81b
        ;   Label: crt_unknown.c_FUN_005bf81b
    FXCH ST4                            ; 005bf81f
    FSTP extended double ptr [ESP]      ; 005bf821
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf824
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST4                            ; 005bf829
    FLD extended double ptr [ESP + 0xc] ; 005bf82b
    ADD ESP,0x2c                        ; 005bf82f
    RET                                 ; 005bf832

