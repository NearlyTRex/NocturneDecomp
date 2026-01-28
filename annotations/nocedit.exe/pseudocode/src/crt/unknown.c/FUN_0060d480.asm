; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined1 * crt_unknown_c_FUN_0060d480(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_0060b106 at 0060b10c
;   crt_unknown.c_FUN_0060b142 at 0060b14b
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00684ee4]         ; 0060d480 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: crt_unknown.c_FUN_0060d480
    ADD EAX,0xc6                        ; 0060d486
    RET                                 ; 0060d48b

