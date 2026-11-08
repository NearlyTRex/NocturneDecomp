; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00495900(void)
;
;
; XREF[1]:
;   FUN_0049d1c0 at 0049d202
;
; Referenced Globals:
;   TerminatedCString s_fball_kfm_005d53d2
;   TerminatedCString s_smfball_kfm_005d53dc
;   TerminatedCString s_grnball_kfm_005d53e8
;
; Called Functions:
;   FUN_0044fd00
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH 0x5d53d2                       ; 00495900 | = "fball.kfm"
        ;   Label: FUN_00495900
    PUSH 0x1c3e074                      ; 00495905
    CALL FUN_0044fd70                   ; 0049590a
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0049590f
    PUSH 0x1c3e074                      ; 00495912
    CALL FUN_0044fd00                   ; 00495917
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0049591c
    PUSH 0x5d53dc                       ; 0049591f | = "smfball.kfm"
    PUSH 0x1c3e1f0                      ; 00495924
    CALL FUN_0044fd70                   ; 00495929
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0049592e
    PUSH 0x1c3e1f0                      ; 00495931
    CALL FUN_0044fd00                   ; 00495936
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0049593b
    PUSH 0x5d53e8                       ; 0049593e | = "grnball.kfm"
    PUSH 0x1c3e36c                      ; 00495943
    CALL FUN_0044fd70                   ; 00495948
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0049594d
    PUSH 0x1c3e36c                      ; 00495950
    CALL FUN_0044fd00                   ; 00495955
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0049595a
    RET                                 ; 0049595d

