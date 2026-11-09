; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bcc3f(void)
;
;
; Referenced Globals:
;   TerminatedCString s_C_floating_point_support_005f19bc
;
; Called Functions:
;   crt_unknown.c_FUN_005c1c20
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005bcc3f
        ;   Label: crt_unknown.c_FUN_005bcc3f
    PUSH 0x5f19bc                       ; 005bcc41 | = "C++ floating-point support not loaded..."
    CALL crt_unknown.c_FUN_005c1c20     ; 005bcc46
        ;   XREF to: 005c1c20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1c20()
    ADD ESP,0x8                         ; 005bcc4b
    RET                                 ; 005bcc4e

