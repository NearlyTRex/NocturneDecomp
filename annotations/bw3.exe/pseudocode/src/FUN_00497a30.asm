; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00497a30(void)
;
;
; XREF[1]:
;   FUN_004a24a0 at 004a252a
;
; Referenced Globals:
;   TerminatedCString s_stake_kfm_005c0508
;
; Called Functions:
;   FUN_00462580
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH 0x5c0508                       ; 00497a30 | = "stake.kfm"
        ;   Label: FUN_00497a30
    PUSH 0x1c73698                      ; 00497a35
    CALL FUN_004625f0                   ; 00497a3a
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 00497a3f
    PUSH 0x1c73698                      ; 00497a42
    CALL FUN_00462580                   ; 00497a47
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 00497a4c
    RET                                 ; 00497a4f

