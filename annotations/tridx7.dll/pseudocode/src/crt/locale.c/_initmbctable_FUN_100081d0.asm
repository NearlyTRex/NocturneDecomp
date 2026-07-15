; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_locale_c__initmbctable_FUN_100081d0(void)
;
;
; XREF[1]:
;   crt_startup.c___CRTDLL_INIT_FUN_100056a0 at 10005773
;
; Called Functions:
;   crt_locale.c__setmbcp_FUN_10007eb0
;
; *****************************************************************************

section .text

    PUSH -0x3                           ; 100081d0
        ;   Label: crt_locale.c__initmbctable_FUN_100081d0
    CALL crt_locale.c__setmbcp_FUN_10007eb0 ; 100081d2
        ;   XREF to: 10007eb0 (UNCONDITIONAL_CALL)  ; int crt_locale.c__setmbcp_FUN_10007eb0(int code_page)
    ADD ESP,0x4                         ; 100081d7
    RET                                 ; 100081da

