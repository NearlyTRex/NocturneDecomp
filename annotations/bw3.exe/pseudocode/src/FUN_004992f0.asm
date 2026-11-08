; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004992f0(void)
;
;
; XREF[1]:
;   FUN_004a24a0 at 004a252f
;
; Referenced Globals:
;   TerminatedCString s_fball_kfm_005c0550
;   TerminatedCString s_smfball_kfm_005c055a
;   TerminatedCString s_grnball_kfm_005c0566
;
; Called Functions:
;   FUN_00462580
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH 0x5c0550                       ; 004992f0 | = "fball.kfm"
        ;   Label: FUN_004992f0
    PUSH 0x1c73814                      ; 004992f5
    CALL FUN_004625f0                   ; 004992fa
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 004992ff
    PUSH 0x1c73814                      ; 00499302
    CALL FUN_00462580                   ; 00499307
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0049930c
    PUSH 0x5c055a                       ; 0049930f | = "smfball.kfm"
    PUSH 0x1c73990                      ; 00499314
    CALL FUN_004625f0                   ; 00499319
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0049931e
    PUSH 0x1c73990                      ; 00499321
    CALL FUN_00462580                   ; 00499326
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0049932b
    PUSH 0x5c0566                       ; 0049932e | = "grnball.kfm"
    PUSH 0x1c73b0c                      ; 00499333
    CALL FUN_004625f0                   ; 00499338
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0049933d
    PUSH 0x1c73b0c                      ; 00499340
    CALL FUN_00462580                   ; 00499345
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0049934a
    RET                                 ; 0049934d

