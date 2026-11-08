; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004acad0(void)
;
;
; XREF[1]:
;   FUN_004b5ac0 at 004b5afd
;
; Referenced Globals:
;   TerminatedCString s_stake_kfm_005df1cc
;
; Called Functions:
;   FUN_004688e0
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH 0x5df1cc                       ; 004acad0 | = "stake.kfm"
        ;   Label: FUN_004acad0
    PUSH 0x1c570b8                      ; 004acad5
    CALL FUN_00468950                   ; 004acada
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004acadf
    PUSH 0x1c570b8                      ; 004acae2
    CALL FUN_004688e0                   ; 004acae7
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004acaec
    RET                                 ; 004acaef

