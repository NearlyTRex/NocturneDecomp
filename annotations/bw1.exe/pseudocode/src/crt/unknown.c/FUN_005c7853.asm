; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7853(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7853
        ;   Label: crt_unknown.c_FUN_005c7853
    FSTP extended double ptr [ESP]      ; 005c7857
    CALL crt_unknown.c_FUN_005c769c     ; 005c785a
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FLD extended double ptr [ESP + 0xc] ; 005c785f
    ADD ESP,0x2c                        ; 005c7863
    RET                                 ; 005c7866

