; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c403(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 0056c403
        ;   Label: FUN_0056c403
    FSTP extended double ptr [ESP]      ; 0056c406
    FSTP extended double ptr [ESP + 0xc] ; 0056c409
    CALL FUN_0056be50                   ; 0056c40d
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    ADD ESP,0x2c                        ; 0056c412
    RET                                 ; 0056c415

