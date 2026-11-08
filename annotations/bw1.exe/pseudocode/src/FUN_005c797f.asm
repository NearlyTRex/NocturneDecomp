; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c797f(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c797f
        ;   Label: FUN_005c797f
    FXCH ST2                            ; 005c7982
    FSTP extended double ptr [ESP + 0xc] ; 005c7984
    CALL FUN_005c769c                   ; 005c7988
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST2                            ; 005c798d
    ADD ESP,0x2c                        ; 005c798f
    RET                                 ; 005c7992

