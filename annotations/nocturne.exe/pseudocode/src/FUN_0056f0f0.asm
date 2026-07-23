; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056f0f0(void)
;
;
; XREF[2]:
;   FUN_00567d88 at 00567ff2
;   FUN_00569850 at 00569860
;
; Referenced Globals:
;   TerminatedCString s_Floating_point_support_n_005990e4
;
; Called Functions:
;   FUN_0056ddc0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0056f0f0
        ;   Label: FUN_0056f0f0
    PUSH 0x5990e4                       ; 0056f0f2 | = "Floating-point support not loaded\r\n"
    CALL FUN_0056ddc0                   ; 0056f0f7
        ;   XREF to: 0056ddc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ddc0()
    ADD ESP,0x8                         ; 0056f0fc
    RET                                 ; 0056f0ff

