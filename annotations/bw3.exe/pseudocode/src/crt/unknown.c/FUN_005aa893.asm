; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa893(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa893
        ;   Label: crt_unknown.c_FUN_005aa893
    FXCH ST3                            ; 005aa896
    FSTP extended double ptr [ESP + 0xc] ; 005aa898
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa89c
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST3                            ; 005aa8a1
    ADD ESP,0x2c                        ; 005aa8a3
    RET                                 ; 005aa8a6

