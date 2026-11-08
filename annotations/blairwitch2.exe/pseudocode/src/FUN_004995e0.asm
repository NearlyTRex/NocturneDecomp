; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004995e0(void)
;
;
; XREF[1]:
;   FUN_0049d1c0 at 0049d20c
;
; Referenced Globals:
;   TerminatedCString s_dynamitestick_kfm_005d5590
;
; Called Functions:
;   FUN_0044fba0
;
; *****************************************************************************

section .text

    PUSH 0x5d5590                       ; 004995e0 | = "dynamitestick.kfm"
        ;   Label: FUN_004995e0
    CALL FUN_0044fba0                   ; 004995e5
        ;   XREF to: 0044fba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fba0()
    ADD ESP,0x4                         ; 004995ea
    RET                                 ; 004995ed

