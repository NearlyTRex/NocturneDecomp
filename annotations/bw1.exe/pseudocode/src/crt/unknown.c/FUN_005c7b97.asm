; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7b97(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7b97
        ;   Label: crt_unknown.c_FUN_005c7b97
    FXCH ST5                            ; 005c7b9b
    FSTP extended double ptr [ESP]      ; 005c7b9d
    CALL crt_unknown.c_FUN_005c769c     ; 005c7ba0
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST5                            ; 005c7ba5
    ADD ESP,0x2c                        ; 005c7ba7
    RET                                 ; 005c7baa

