; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa7ef(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa7ef
        ;   Label: crt_unknown.c_FUN_005aa7ef
    FXCH ST2                            ; 005aa7f2
    FSTP extended double ptr [ESP + 0xc] ; 005aa7f4
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa7f8
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST2                            ; 005aa7fd
    ADD ESP,0x2c                        ; 005aa7ff
    RET                                 ; 005aa802

