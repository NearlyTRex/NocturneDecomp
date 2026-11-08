; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7c3b(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7c3b
        ;   Label: FUN_005c7c3b
    FXCH ST6                            ; 005c7c3f
    FSTP extended double ptr [ESP]      ; 005c7c41
    CALL FUN_005c769c                   ; 005c7c44
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST6                            ; 005c7c49
    ADD ESP,0x2c                        ; 005c7c4b
    RET                                 ; 005c7c4e

