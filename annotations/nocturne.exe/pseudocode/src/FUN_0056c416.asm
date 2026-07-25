; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c416(void)
;
;
; XREF[2]:
;   FUN_0056c4d4 at 0056c4f2
;   FUN_0056c520 at 0056c53e
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 0056c416
        ;   Label: FUN_0056c416
    FSTP extended double ptr [ESP + 0xc] ; 0056c419
    FSTP extended double ptr [ESP]      ; 0056c41d
    CALL FUN_0056be50                   ; 0056c420
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    ADD ESP,0x2c                        ; 0056c425
    RET                                 ; 0056c428

