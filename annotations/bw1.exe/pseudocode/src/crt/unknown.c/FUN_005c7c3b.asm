; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7c3b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7c3b
        ;   Label: crt_unknown.c_FUN_005c7c3b
    FXCH ST6                            ; 005c7c3f
    FSTP extended double ptr [ESP]      ; 005c7c41
    CALL crt_unknown.c_FUN_005c769c     ; 005c7c44
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST6                            ; 005c7c49
    ADD ESP,0x2c                        ; 005c7c4b
    RET                                 ; 005c7c4e

