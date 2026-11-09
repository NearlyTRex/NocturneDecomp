; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf7a3(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf7a3
        ;   Label: crt_unknown.c_FUN_005bf7a3
    FXCH ST4                            ; 005bf7a7
    FLD ST0                             ; 005bf7a9
    FSTP extended double ptr [ESP]      ; 005bf7ab
    FSTP extended double ptr [ESP + 0x20] ; 005bf7ae
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf7b2
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST4                            ; 005bf7b7
    FLD extended double ptr [ESP + 0x20] ; 005bf7b9
    FXCH ST5                            ; 005bf7bd
    ADD ESP,0x2c                        ; 005bf7bf
    RET                                 ; 005bf7c2

