; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c21f0(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005bb860 at 005bb870
;   crt_unknown.c_FUN_005bd9a8 at 005bdc12
;
; Referenced Globals:
;   TerminatedCString s_Floating_point_support_n_005f1a8c
;
; Called Functions:
;   crt_unknown.c_FUN_005c1c20
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005c21f0
        ;   Label: crt_unknown.c_FUN_005c21f0
    PUSH 0x5f1a8c                       ; 005c21f2 | = "Floating-point support not loaded\r\n"
    CALL crt_unknown.c_FUN_005c1c20     ; 005c21f7
        ;   XREF to: 005c1c20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1c20()
    ADD ESP,0x8                         ; 005c21fc
    RET                                 ; 005c21ff

