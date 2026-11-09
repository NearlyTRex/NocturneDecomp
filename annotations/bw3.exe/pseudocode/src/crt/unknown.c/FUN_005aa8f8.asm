; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa8f8(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa8f8
        ;   Label: crt_unknown.c_FUN_005aa8f8
    FXCH ST4                            ; 005aa8fb
    FSTP extended double ptr [ESP + 0xc] ; 005aa8fd
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa901
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST4                            ; 005aa906
    FLD extended double ptr [ESP + 0xc] ; 005aa908
    FXCH ST5                            ; 005aa90c
    ADD ESP,0x2c                        ; 005aa90e
    RET                                 ; 005aa911

