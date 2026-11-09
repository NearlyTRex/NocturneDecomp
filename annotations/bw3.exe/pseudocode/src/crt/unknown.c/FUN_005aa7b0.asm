; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa7b0(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa7b0
        ;   Label: crt_unknown.c_FUN_005aa7b0
    FXCH ST2                            ; 005aa7b3
    FSTP extended double ptr [ESP + 0xc] ; 005aa7b5
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa7b9
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST2                            ; 005aa7be
    FLD extended double ptr [ESP + 0xc] ; 005aa7c0
    FXCH ST3                            ; 005aa7c4
    ADD ESP,0x2c                        ; 005aa7c6
    RET                                 ; 005aa7c9

