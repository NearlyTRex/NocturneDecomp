; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7940(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c7940
        ;   Label: crt_unknown.c_FUN_005c7940
    FXCH ST2                            ; 005c7943
    FSTP extended double ptr [ESP + 0xc] ; 005c7945
    CALL crt_unknown.c_FUN_005c769c     ; 005c7949
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST2                            ; 005c794e
    FLD extended double ptr [ESP + 0xc] ; 005c7950
    FXCH ST3                            ; 005c7954
    ADD ESP,0x2c                        ; 005c7956
    RET                                 ; 005c7959

