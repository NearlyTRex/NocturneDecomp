; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aaa40(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aaa40
        ;   Label: crt_unknown.c_FUN_005aaa40
    FXCH ST6                            ; 005aaa43
    FSTP extended double ptr [ESP + 0xc] ; 005aaa45
    CALL crt_unknown.c_FUN_005aa50c     ; 005aaa49
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST6                            ; 005aaa4e
    FLD extended double ptr [ESP + 0xc] ; 005aaa50
    FXCH ST7                            ; 005aaa54
    ADD ESP,0x2c                        ; 005aaa56
    RET                                 ; 005aaa59

