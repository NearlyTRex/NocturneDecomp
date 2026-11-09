; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7bd0(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c7bd0
        ;   Label: crt_unknown.c_FUN_005c7bd0
    FXCH ST6                            ; 005c7bd3
    FSTP extended double ptr [ESP + 0xc] ; 005c7bd5
    CALL crt_unknown.c_FUN_005c769c     ; 005c7bd9
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST6                            ; 005c7bde
    FLD extended double ptr [ESP + 0xc] ; 005c7be0
    FXCH ST7                            ; 005c7be4
    ADD ESP,0x2c                        ; 005c7be6
    RET                                 ; 005c7be9

