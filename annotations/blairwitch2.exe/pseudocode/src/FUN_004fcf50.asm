; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fcf50(void)
;
;
; XREF[1]:
;   FUN_004fb590 at 004fba97
;
; Called Functions:
;   FUN_0044fc50
;   FUN_00548f80
;   FUN_00549090
;   FUN_00575010
;
; *****************************************************************************

section .text

    CALL FUN_00575010                   ; 004fcf50
        ;   XREF to: 00575010 (UNCONDITIONAL_CALL)  ; undefined FUN_00575010()
        ;   Label: FUN_004fcf50
    CALL FUN_0044fc50                   ; 004fcf55
        ;   XREF to: 0044fc50 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc50()
    CALL FUN_00548f80                   ; 004fcf5a
        ;   XREF to: 00548f80 (UNCONDITIONAL_CALL)  ; undefined FUN_00548f80()
    JMP 0x00549090                      ; 004fcf5f
        ;   XREF to: 00549090 (UNCONDITIONAL_CALL)

