; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c2db(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056c2db
        ;   Label: FUN_0056c2db
    INT 0x6                             ; 0056c2de
    FSTP extended double ptr [ESP]      ; 0056c2e0
        ;   Label: LAB_0056c2e0
    FXCH ST5                            ; 0056c2e3
    FSTP extended double ptr [ESP + 0xc] ; 0056c2e5
    CALL FUN_0056be50                   ; 0056c2e9
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST5                            ; 0056c2ee
    FLD extended double ptr [ESP + 0xc] ; 0056c2f0
    FXCH ST6                            ; 0056c2f4
    ADD ESP,0x2c                        ; 0056c2f6
    RET                                 ; 0056c2f9

