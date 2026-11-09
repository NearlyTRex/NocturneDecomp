; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7a37(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7a37
        ;   Label: crt_unknown.c_FUN_005c7a37
    FXCH ST3                            ; 005c7a3b
    FSTP extended double ptr [ESP]      ; 005c7a3d
    CALL crt_unknown.c_FUN_005c769c     ; 005c7a40
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST3                            ; 005c7a45
    FLD extended double ptr [ESP + 0xc] ; 005c7a47
    ADD ESP,0x2c                        ; 005c7a4b
    RET                                 ; 005c7a4e

