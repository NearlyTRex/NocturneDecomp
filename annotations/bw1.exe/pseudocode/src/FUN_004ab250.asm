; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ab250(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004ab250
        ;   Label: FUN_004ab250
    PUSH 0x2                            ; 004ab255
    PUSH 0x61bf28                       ; 004ab257
    PUSH 0x4ab2a0                       ; 004ab25c
    PUSH 0x5df087                       ; 004ab261
    PUSH 0x1c56ffc                      ; 004ab266
    CALL FUN_0040c160                   ; 004ab26b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004ab270
    PUSH 0x152c360                      ; 004ab273
    PUSH 0x2                            ; 004ab278
    PUSH 0x61bf2c                       ; 004ab27a
    PUSH 0x4ab590                       ; 004ab27f
    PUSH 0x5df091                       ; 004ab284
    PUSH 0x1c57038                      ; 004ab289
    CALL FUN_0040c160                   ; 004ab28e
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004ab293
    RET                                 ; 004ab296

