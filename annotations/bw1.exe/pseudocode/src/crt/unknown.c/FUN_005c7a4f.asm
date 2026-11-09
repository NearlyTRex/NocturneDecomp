; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7a4f(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7a4f
        ;   Label: crt_unknown.c_FUN_005c7a4f
    FXCH ST3                            ; 005c7a53
    FSTP extended double ptr [ESP]      ; 005c7a55
    CALL crt_unknown.c_FUN_005c769c     ; 005c7a58
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST3                            ; 005c7a5d
    ADD ESP,0x2c                        ; 005c7a5f
    RET                                 ; 005c7a62

