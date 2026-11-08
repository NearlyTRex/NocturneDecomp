; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7adb(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7adb
        ;   Label: FUN_005c7adb
    FXCH ST4                            ; 005c7adf
    FSTP extended double ptr [ESP]      ; 005c7ae1
    CALL FUN_005c769c                   ; 005c7ae4
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST4                            ; 005c7ae9
    FLD extended double ptr [ESP + 0xc] ; 005c7aeb
    ADD ESP,0x2c                        ; 005c7aef
    RET                                 ; 005c7af2

