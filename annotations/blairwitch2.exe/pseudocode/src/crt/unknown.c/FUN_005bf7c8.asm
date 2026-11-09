; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf7c8(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf7c8
        ;   Label: crt_unknown.c_FUN_005bf7c8
    FXCH ST4                            ; 005bf7cb
    FSTP extended double ptr [ESP + 0xc] ; 005bf7cd
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf7d1
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST4                            ; 005bf7d6
    FLD extended double ptr [ESP + 0xc] ; 005bf7d8
    FXCH ST5                            ; 005bf7dc
    ADD ESP,0x2c                        ; 005bf7de
    RET                                 ; 005bf7e1

