; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044c580(void)
;
;
; Called Functions:
;   FUN_004436b0
;   FUN_005c0357
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x5fb430                       ; 0044c580
        ;   Label: FUN_0044c580
    PUSH 0x12d40                        ; 0044c585
    PUSH 0xa1bad8                       ; 0044c58a
    CALL FUN_005c0357                   ; 0044c58f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 0044c594
    PUSH 0x6                            ; 0044c597
    PUSH 0x10000                        ; 0044c599
    PUSH 0x13411c8                      ; 0044c59e
    CALL FUN_004436b0                   ; 0044c5a3
        ;   XREF to: 004436b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004436b0()
    ADD ESP,0xc                         ; 0044c5a8
    PUSH 0x611214                       ; 0044c5ab
    CALL FUN_005c1093                   ; 0044c5b0
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 0044c5b5
    RET                                 ; 0044c5b8

