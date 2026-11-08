; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ae2a0(void)
;
;
; XREF[1]:
;   FUN_004b5ac0 at 004b5b02
;
; Referenced Globals:
;   TerminatedCString s_fball_kfm_005df214
;   TerminatedCString s_smfball_kfm_005df21e
;   TerminatedCString s_grnball_kfm_005df22a
;
; Called Functions:
;   FUN_004688e0
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH 0x5df214                       ; 004ae2a0 | = "fball.kfm"
        ;   Label: FUN_004ae2a0
    PUSH 0x1c57234                      ; 004ae2a5
    CALL FUN_00468950                   ; 004ae2aa
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004ae2af
    PUSH 0x1c57234                      ; 004ae2b2
    CALL FUN_004688e0                   ; 004ae2b7
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004ae2bc
    PUSH 0x5df21e                       ; 004ae2bf | = "smfball.kfm"
    PUSH 0x1c573b0                      ; 004ae2c4
    CALL FUN_00468950                   ; 004ae2c9
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004ae2ce
    PUSH 0x1c573b0                      ; 004ae2d1
    CALL FUN_004688e0                   ; 004ae2d6
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004ae2db
    PUSH 0x5df22a                       ; 004ae2de | = "grnball.kfm"
    PUSH 0x1c5752c                      ; 004ae2e3
    CALL FUN_00468950                   ; 004ae2e8
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004ae2ed
    PUSH 0x1c5752c                      ; 004ae2f0
    CALL FUN_004688e0                   ; 004ae2f5
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004ae2fa
    RET                                 ; 004ae2fd

