; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ca4f0(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c3b30 at 005c3b40
;   crt_unknown.c_FUN_005c5c78 at 005c5ee2
;
; Referenced Globals:
;   TerminatedCString s_Floating_point_support_n_005fac34
;
; Called Functions:
;   crt_unknown.c_FUN_005c9f70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005ca4f0
        ;   Label: crt_unknown.c_FUN_005ca4f0
    PUSH 0x5fac34                       ; 005ca4f2 | = "Floating-point support not loaded\r\n"
    CALL crt_unknown.c_FUN_005c9f70     ; 005ca4f7
        ;   XREF to: 005c9f70 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9f70()
    ADD ESP,0x8                         ; 005ca4fc
    RET                                 ; 005ca4ff

