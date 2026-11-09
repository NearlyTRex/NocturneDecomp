; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7bab(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7bab
        ;   Label: crt_unknown.c_FUN_005c7bab
    FXCH ST6                            ; 005c7baf
    FLD ST0                             ; 005c7bb1
    FSTP extended double ptr [ESP]      ; 005c7bb3
    FSTP extended double ptr [ESP + 0x20] ; 005c7bb6
    CALL crt_unknown.c_FUN_005c769c     ; 005c7bba
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST6                            ; 005c7bbf
    FLD extended double ptr [ESP + 0x20] ; 005c7bc1
    FXCH ST7                            ; 005c7bc5
    ADD ESP,0x2c                        ; 005c7bc7
    RET                                 ; 005c7bca

