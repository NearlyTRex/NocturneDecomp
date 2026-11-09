; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7c23(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7c23
        ;   Label: crt_unknown.c_FUN_005c7c23
    FXCH ST6                            ; 005c7c27
    FSTP extended double ptr [ESP]      ; 005c7c29
    CALL crt_unknown.c_FUN_005c769c     ; 005c7c2c
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST6                            ; 005c7c31
    FLD extended double ptr [ESP + 0xc] ; 005c7c33
    ADD ESP,0x2c                        ; 005c7c37
    RET                                 ; 005c7c3a

