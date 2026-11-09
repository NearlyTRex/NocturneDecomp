; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf963(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf963
        ;   Label: crt_unknown.c_FUN_005bf963
    FXCH ST6                            ; 005bf967
    FSTP extended double ptr [ESP]      ; 005bf969
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf96c
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST6                            ; 005bf971
    FLD extended double ptr [ESP + 0xc] ; 005bf973
    ADD ESP,0x2c                        ; 005bf977
    RET                                 ; 005bf97a

