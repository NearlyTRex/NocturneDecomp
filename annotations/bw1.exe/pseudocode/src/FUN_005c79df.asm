; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c79df(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005c79df
        ;   Label: FUN_005c79df
    INT 0x6                             ; 005c79e2
    FSTP extended double ptr [ESP]      ; 005c79e4
        ;   Label: LAB_005c79e4
    FXCH ST3                            ; 005c79e7
    FSTP extended double ptr [ESP + 0xc] ; 005c79e9
    CALL FUN_005c769c                   ; 005c79ed
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST3                            ; 005c79f2
    FLD extended double ptr [ESP + 0xc] ; 005c79f4
    FXCH ST4                            ; 005c79f8
    ADD ESP,0x2c                        ; 005c79fa
    RET                                 ; 005c79fd

