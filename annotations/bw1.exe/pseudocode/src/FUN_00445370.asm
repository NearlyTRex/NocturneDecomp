; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00445370(void)
;
;
; Called Functions:
;   FUN_004453a0
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00445370
        ;   Label: FUN_00445370
    PUSH 0x1                            ; 00445372
    PUSH 0x20                           ; 00445374
    PUSH 0x28                           ; 00445376
    PUSH 0x7db5f0                       ; 00445378
    CALL FUN_004453a0                   ; 0044537d
        ;   XREF to: 004453a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004453a0()
    ADD ESP,0x14                        ; 00445382
    PUSH 0x6110f0                       ; 00445385
    CALL FUN_005c1093                   ; 0044538a
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 0044538f
    RET                                 ; 00445392

