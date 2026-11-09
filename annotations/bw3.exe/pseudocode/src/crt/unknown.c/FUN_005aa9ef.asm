; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa9ef(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa9ef
        ;   Label: crt_unknown.c_FUN_005aa9ef
    FXCH ST5                            ; 005aa9f3
    FSTP extended double ptr [ESP]      ; 005aa9f5
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa9f8
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST5                            ; 005aa9fd
    FLD extended double ptr [ESP + 0xc] ; 005aa9ff
    ADD ESP,0x2c                        ; 005aaa03
    RET                                 ; 005aaa06

