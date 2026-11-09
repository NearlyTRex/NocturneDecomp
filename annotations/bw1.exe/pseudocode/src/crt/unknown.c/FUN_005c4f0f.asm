; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c4f0f(void)
;
;
; Referenced Globals:
;   TerminatedCString s_C_floating_point_support_005fab64
;
; Called Functions:
;   crt_unknown.c_FUN_005c9f70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005c4f0f
        ;   Label: crt_unknown.c_FUN_005c4f0f
    PUSH 0x5fab64                       ; 005c4f11 | = "C++ floating-point support not loaded..."
    CALL crt_unknown.c_FUN_005c9f70     ; 005c4f16
        ;   XREF to: 005c9f70 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9f70()
    ADD ESP,0x8                         ; 005c4f1b
    RET                                 ; 005c4f1e

