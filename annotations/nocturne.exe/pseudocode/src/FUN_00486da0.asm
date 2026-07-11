; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00486da0(void)
;
;
; XREF[1]:
;   FUN_0048af70 at 0048afd0
;
; Referenced Globals:
;   string s_debris01.kfm_005811cc
;   string s_debris02.kfm_005811d9
;   string s_debris03.kfm_005811e6
;   string s_debris04.kfm_005811f3
;   string s_debris05.kfm_00581200
;
; Called Functions:
;   FUN_00454510
;   FUN_00454580
;
; *****************************************************************************

section .text

    PUSH 0x5811cc                       ; 00486da0 | = "debris01.kfm"
        ;   Label: FUN_00486da0
    PUSH 0x1c094bc                      ; 00486da5
    CALL FUN_00454580                   ; 00486daa
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 00486daf
    PUSH 0x5811d9                       ; 00486db2 | = "debris02.kfm"
    PUSH 0x1c09638                      ; 00486db7
    CALL FUN_00454580                   ; 00486dbc
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 00486dc1
    PUSH 0x5811e6                       ; 00486dc4 | = "debris03.kfm"
    PUSH 0x1c097b4                      ; 00486dc9
    CALL FUN_00454580                   ; 00486dce
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 00486dd3
    PUSH 0x5811f3                       ; 00486dd6 | = "debris04.kfm"
    PUSH 0x1c09930                      ; 00486ddb
    CALL FUN_00454580                   ; 00486de0
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 00486de5
    PUSH 0x581200                       ; 00486de8 | = "debris05.kfm"
    PUSH 0x1c09aac                      ; 00486ded
    CALL FUN_00454580                   ; 00486df2
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 00486df7
    PUSH 0x1c094bc                      ; 00486dfa
    CALL FUN_00454510                   ; 00486dff
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 00486e04
    PUSH 0x1c09638                      ; 00486e07
    CALL FUN_00454510                   ; 00486e0c
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 00486e11
    PUSH 0x1c097b4                      ; 00486e14
    CALL FUN_00454510                   ; 00486e19
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 00486e1e
    PUSH 0x1c09930                      ; 00486e21
    CALL FUN_00454510                   ; 00486e26
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 00486e2b
    PUSH 0x1c09aac                      ; 00486e2e
    CALL FUN_00454510                   ; 00486e33
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 00486e38
    RET                                 ; 00486e3b

