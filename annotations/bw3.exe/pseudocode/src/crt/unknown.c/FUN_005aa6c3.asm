; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa6c3(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa6c3
        ;   Label: crt_unknown.c_FUN_005aa6c3
    FSTP extended double ptr [ESP]      ; 005aa6c7
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa6ca
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FLD extended double ptr [ESP + 0xc] ; 005aa6cf
    ADD ESP,0x2c                        ; 005aa6d3
    RET                                 ; 005aa6d6

