; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7c75(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005c7c75
        ;   Label: crt_unknown.c_FUN_005c7c75
    FSTP extended double ptr [ESP + 0xc] ; 005c7c78
    FSTP extended double ptr [ESP]      ; 005c7c7c
    CALL crt_unknown.c_FUN_005c769c     ; 005c7c7f
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    ADD ESP,0x2c                        ; 005c7c84
    RET                                 ; 005c7c87

