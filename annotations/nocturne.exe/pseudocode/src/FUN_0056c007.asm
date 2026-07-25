; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c007(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c007
        ;   Label: FUN_0056c007
    FSTP extended double ptr [ESP]      ; 0056c00b
    CALL FUN_0056be50                   ; 0056c00e
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FLD extended double ptr [ESP + 0xc] ; 0056c013
    ADD ESP,0x2c                        ; 0056c017
    RET                                 ; 0056c01a

