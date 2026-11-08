; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa84f(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aa84f
        ;   Label: FUN_005aa84f
    INT 0x6                             ; 005aa852
    FSTP extended double ptr [ESP]      ; 005aa854
        ;   Label: LAB_005aa854
    FXCH ST3                            ; 005aa857
    FSTP extended double ptr [ESP + 0xc] ; 005aa859
    CALL FUN_005aa50c                   ; 005aa85d
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST3                            ; 005aa862
    FLD extended double ptr [ESP + 0xc] ; 005aa864
    FXCH ST4                            ; 005aa868
    ADD ESP,0x2c                        ; 005aa86a
    RET                                 ; 005aa86d

