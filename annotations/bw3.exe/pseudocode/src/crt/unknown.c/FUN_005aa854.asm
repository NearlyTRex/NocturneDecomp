; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa854(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa854
        ;   Label: crt_unknown.c_FUN_005aa854
    FXCH ST3                            ; 005aa857
    FSTP extended double ptr [ESP + 0xc] ; 005aa859
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa85d
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST3                            ; 005aa862
    FLD extended double ptr [ESP + 0xc] ; 005aa864
    FXCH ST4                            ; 005aa868
    ADD ESP,0x2c                        ; 005aa86a
    RET                                 ; 005aa86d

