; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aaa93(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aaa93
        ;   Label: crt_unknown.c_FUN_005aaa93
    FXCH ST6                            ; 005aaa97
    FSTP extended double ptr [ESP]      ; 005aaa99
    CALL crt_unknown.c_FUN_005aa50c     ; 005aaa9c
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST6                            ; 005aaaa1
    FLD extended double ptr [ESP + 0xc] ; 005aaaa3
    ADD ESP,0x2c                        ; 005aaaa7
    RET                                 ; 005aaaaa

