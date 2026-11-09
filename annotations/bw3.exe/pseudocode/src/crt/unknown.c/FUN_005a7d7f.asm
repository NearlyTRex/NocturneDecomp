; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a7d7f(void)
;
;
; Referenced Globals:
;   TerminatedCString s_C_floating_point_support_005da820
;
; Called Functions:
;   crt_unknown.c_FUN_005acde0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a7d7f
        ;   Label: crt_unknown.c_FUN_005a7d7f
    PUSH 0x5da820                       ; 005a7d81 | = "C++ floating-point support not loaded..."
    CALL crt_unknown.c_FUN_005acde0     ; 005a7d86
        ;   XREF to: 005acde0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acde0()
    ADD ESP,0x8                         ; 005a7d8b
    RET                                 ; 005a7d8e

