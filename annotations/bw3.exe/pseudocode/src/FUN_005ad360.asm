; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad360(void)
;
;
; XREF[2]:
;   FUN_005a69a0 at 005a69b0
;   FUN_005a8ae8 at 005a8d52
;
; Referenced Globals:
;   TerminatedCString s_Floating_point_support_n_005da8f0
;
; Called Functions:
;   FUN_005acde0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005ad360
        ;   Label: FUN_005ad360
    PUSH 0x5da8f0                       ; 005ad362 | = "Floating-point support not loaded\r\n"
    CALL FUN_005acde0                   ; 005ad367
        ;   XREF to: 005acde0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acde0()
    ADD ESP,0x8                         ; 005ad36c
    RET                                 ; 005ad36f

