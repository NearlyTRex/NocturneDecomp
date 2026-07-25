; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c3d7(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c3d7
        ;   Label: FUN_0056c3d7
    FXCH ST6                            ; 0056c3db
    FSTP extended double ptr [ESP]      ; 0056c3dd
    CALL FUN_0056be50                   ; 0056c3e0
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST6                            ; 0056c3e5
    FLD extended double ptr [ESP + 0xc] ; 0056c3e7
    ADD ESP,0x2c                        ; 0056c3eb
    RET                                 ; 0056c3ee

