; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c3ef(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c3ef
        ;   Label: FUN_0056c3ef
    FXCH ST6                            ; 0056c3f3
    FSTP extended double ptr [ESP]      ; 0056c3f5
    CALL FUN_0056be50                   ; 0056c3f8
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST6                            ; 0056c3fd
    ADD ESP,0x2c                        ; 0056c3ff
    RET                                 ; 0056c402

