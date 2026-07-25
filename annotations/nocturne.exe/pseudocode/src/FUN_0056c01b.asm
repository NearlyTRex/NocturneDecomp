; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c01b(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c01b
        ;   Label: FUN_0056c01b
    FSTP extended double ptr [ESP]      ; 0056c01f
    CALL FUN_0056be50                   ; 0056c022
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    ADD ESP,0x2c                        ; 0056c027
    RET                                 ; 0056c02a

