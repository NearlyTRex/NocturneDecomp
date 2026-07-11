; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004876a0(void)
;
;
; XREF[1]:
;   FUN_0048af70 at 0048afbc
;
; Referenced Globals:
;   string s_dynamitestick.kfm_0058128a
;
; Called Functions:
;   FUN_004543b0
;
; *****************************************************************************

section .text

    PUSH 0x58128a                       ; 004876a0 | = "dynamitestick.kfm"
        ;   Label: FUN_004876a0
    CALL FUN_004543b0                   ; 004876a5
        ;   XREF to: 004543b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004543b0()
    ADD ESP,0x4                         ; 004876aa
    RET                                 ; 004876ad

