; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aaa7f(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aaa7f
        ;   Label: crt_unknown.c_FUN_005aaa7f
    FXCH ST6                            ; 005aaa82
    FSTP extended double ptr [ESP + 0xc] ; 005aaa84
    CALL crt_unknown.c_FUN_005aa50c     ; 005aaa88
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST6                            ; 005aaa8d
    ADD ESP,0x2c                        ; 005aaa8f
    RET                                 ; 005aaa92

