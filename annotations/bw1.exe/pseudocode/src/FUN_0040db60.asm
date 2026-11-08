; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040db60(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005d3039
;   undefined4 DAT_00610884
;   undefined4 DAT_007c2ff8
;   undefined4 DAT_007c336c
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 0040db60 | DAT_007c2ff8
        ;   Label: FUN_0040db60
    PUSH 0x1                            ; 0040db65
    PUSH 0x610884                       ; 0040db67 | DAT_00610884
    PUSH 0x40db90                       ; 0040db6c | LAB_0040db90
    PUSH 0x5d3039                       ; 0040db71 | = "CAmmo"
    PUSH 0x7c336c                       ; 0040db76 | DAT_007c336c
    CALL FUN_0040c160                   ; 0040db7b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 0040db80
    RET                                 ; 0040db83

