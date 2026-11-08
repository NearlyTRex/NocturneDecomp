; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040dd50(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005cb0be
;   undefined4 DAT_00609780
;   undefined4 DAT_007bbff8
;   undefined4 DAT_007bc36c
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0040dd50 | DAT_007bbff8
        ;   Label: FUN_0040dd50
    PUSH 0x1                            ; 0040dd55
    PUSH 0x609780                       ; 0040dd57 | DAT_00609780
    PUSH 0x40dd80                       ; 0040dd5c | LAB_0040dd80
    PUSH 0x5cb0be                       ; 0040dd61 | = "CAmmo"
    PUSH 0x7bc36c                       ; 0040dd66 | DAT_007bc36c
    CALL FUN_0040c450                   ; 0040dd6b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0040dd70
    RET                                 ; 0040dd73

