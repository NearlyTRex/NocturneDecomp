; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf65b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf65b
        ;   Label: crt_unknown.c_FUN_005bf65b
    FXCH ST2                            ; 005bf65f
    FLD ST0                             ; 005bf661
    FSTP extended double ptr [ESP]      ; 005bf663
    FSTP extended double ptr [ESP + 0x20] ; 005bf666
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf66a
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST2                            ; 005bf66f
    FLD extended double ptr [ESP + 0x20] ; 005bf671
    FXCH ST3                            ; 005bf675
    ADD ESP,0x2c                        ; 005bf677
    RET                                 ; 005bf67a

