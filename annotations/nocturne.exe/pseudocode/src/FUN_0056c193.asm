; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c193(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056c193
        ;   Label: FUN_0056c193
    INT 0x6                             ; 0056c196
    FSTP extended double ptr [ESP]      ; 0056c198
        ;   Label: LAB_0056c198
    FXCH ST3                            ; 0056c19b
    FSTP extended double ptr [ESP + 0xc] ; 0056c19d
    CALL FUN_0056be50                   ; 0056c1a1
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST3                            ; 0056c1a6
    FLD extended double ptr [ESP + 0xc] ; 0056c1a8
    FXCH ST4                            ; 0056c1ac
    ADD ESP,0x2c                        ; 0056c1ae
    RET                                 ; 0056c1b1

