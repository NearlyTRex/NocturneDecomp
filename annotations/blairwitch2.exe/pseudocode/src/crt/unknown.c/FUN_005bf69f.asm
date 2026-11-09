; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf69f(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FXCH ST3                            ; 005bf69f
        ;   Label: crt_unknown.c_FUN_005bf69f
    FSTP extended double ptr [ESP + 0xc] ; 005bf6a1
    FXCH ST2                            ; 005bf6a5
    FLD ST0                             ; 005bf6a7
    FSTP extended double ptr [ESP]      ; 005bf6a9
    FSTP extended double ptr [ESP + 0x20] ; 005bf6ac
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf6b0
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST2                            ; 005bf6b5
    FLD extended double ptr [ESP + 0x20] ; 005bf6b7
    ADD ESP,0x2c                        ; 005bf6bb
    RET                                 ; 005bf6be

