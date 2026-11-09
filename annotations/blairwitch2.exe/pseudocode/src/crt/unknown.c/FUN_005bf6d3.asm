; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf6d3(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf6d3
        ;   Label: crt_unknown.c_FUN_005bf6d3
    FXCH ST2                            ; 005bf6d7
    FSTP extended double ptr [ESP]      ; 005bf6d9
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf6dc
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST2                            ; 005bf6e1
    FLD extended double ptr [ESP + 0xc] ; 005bf6e3
    ADD ESP,0x2c                        ; 005bf6e7
    RET                                 ; 005bf6ea

