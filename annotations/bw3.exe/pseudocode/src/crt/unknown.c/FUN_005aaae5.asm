; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aaae5(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005aaae5
        ;   Label: crt_unknown.c_FUN_005aaae5
    FSTP extended double ptr [ESP + 0xc] ; 005aaae8
    FSTP extended double ptr [ESP]      ; 005aaaec
    CALL crt_unknown.c_FUN_005aa50c     ; 005aaaef
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    ADD ESP,0x2c                        ; 005aaaf4
    RET                                 ; 005aaaf7

