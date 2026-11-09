; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7b6b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c7b6b
        ;   Label: crt_unknown.c_FUN_005c7b6b
    FXCH ST5                            ; 005c7b6e
    FSTP extended double ptr [ESP + 0xc] ; 005c7b70
    CALL crt_unknown.c_FUN_005c769c     ; 005c7b74
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST5                            ; 005c7b79
    ADD ESP,0x2c                        ; 005c7b7b
    RET                                 ; 005c7b7e

