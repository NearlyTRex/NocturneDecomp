; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7a88(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c7a88
        ;   Label: crt_unknown.c_FUN_005c7a88
    FXCH ST4                            ; 005c7a8b
    FSTP extended double ptr [ESP + 0xc] ; 005c7a8d
    CALL crt_unknown.c_FUN_005c769c     ; 005c7a91
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST4                            ; 005c7a96
    FLD extended double ptr [ESP + 0xc] ; 005c7a98
    FXCH ST5                            ; 005c7a9c
    ADD ESP,0x2c                        ; 005c7a9e
    RET                                 ; 005c7aa1

