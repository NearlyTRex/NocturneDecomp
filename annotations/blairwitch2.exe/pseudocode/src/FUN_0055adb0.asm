; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055adb0(void)
;
;
; XREF[3]:
;   FUN_004ee1a0 at 004ee3c9
;   FUN_004ee3f0 at 004ee76c
;   FUN_0055ac50 at 0055ace0
;
; Called Functions:
;   FUN_00551c70
;   FUN_005526b0
;
; *****************************************************************************

section .text

    CALL FUN_005526b0                   ; 0055adb0
        ;   XREF to: 005526b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005526b0()
        ;   Label: FUN_0055adb0
    JMP 0x00551c70                      ; 0055adb5
        ;   XREF to: 00551c70 (UNCONDITIONAL_CALL)

