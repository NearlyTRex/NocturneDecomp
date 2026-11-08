; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059d5f0(void)
;
;
; XREF[1]:
;   FUN_0049d1c0 at 0049d225
;
; Referenced Globals:
;   TerminatedCString s_gunflash2_kfm_005ef841
;
; Called Functions:
;   FUN_0044fd00
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH 0x5ef841                       ; 0059d5f0 | = "gunflash2.kfm"
        ;   Label: FUN_0059d5f0
    PUSH 0x26681e0                      ; 0059d5f5
    CALL FUN_0044fd70                   ; 0059d5fa
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0059d5ff
    PUSH 0x26681e0                      ; 0059d602
    CALL FUN_0044fd00                   ; 0059d607
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0059d60c
    RET                                 ; 0059d60f

