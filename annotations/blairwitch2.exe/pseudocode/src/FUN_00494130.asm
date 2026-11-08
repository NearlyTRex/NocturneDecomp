; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00494130(void)
;
;
; XREF[1]:
;   FUN_0049d1c0 at 0049d1fd
;
; Referenced Globals:
;   TerminatedCString s_stake_kfm_005d538a
;
; Called Functions:
;   FUN_0044fd00
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH 0x5d538a                       ; 00494130 | = "stake.kfm"
        ;   Label: FUN_00494130
    PUSH 0x1c3def8                      ; 00494135
    CALL FUN_0044fd70                   ; 0049413a
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0049413f
    PUSH 0x1c3def8                      ; 00494142
    CALL FUN_0044fd00                   ; 00494147
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0049414c
    RET                                 ; 0049414f

