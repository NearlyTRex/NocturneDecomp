; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa937(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa937
        ;   Label: crt_unknown.c_FUN_005aa937
    FXCH ST4                            ; 005aa93a
    FSTP extended double ptr [ESP + 0xc] ; 005aa93c
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa940
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST4                            ; 005aa945
    ADD ESP,0x2c                        ; 005aa947
    RET                                 ; 005aa94a

