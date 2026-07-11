; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483290(void)
;
;
; XREF[1]:
;   FUN_0048af70 at 0048afad
;
; Referenced Globals:
;   string s_stake.kfm_005810bc
;
; Called Functions:
;   FUN_00454510
;   FUN_00454580
;
; *****************************************************************************

section .text

    PUSH 0x5810bc                       ; 00483290 | = "stake.kfm"
        ;   Label: FUN_00483290
    PUSH 0x1c08d48                      ; 00483295
    CALL FUN_00454580                   ; 0048329a
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 0048329f
    PUSH 0x1c08d48                      ; 004832a2
    CALL FUN_00454510                   ; 004832a7
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 004832ac
    RET                                 ; 004832af

