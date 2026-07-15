; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c__cexit_FUN_100075e0(void)
;
;
; XREF[1]:
;   crt_startup.c___CRTDLL_INIT_FUN_100056a0 at 100057b5
;
; Called Functions:
;   crt_startup.c_doexit_FUN_10007600
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 100075e0
        ;   Label: crt_startup.c__cexit_FUN_100075e0
    PUSH 0x0                            ; 100075e2
    PUSH 0x0                            ; 100075e4
    CALL crt_startup.c_doexit_FUN_10007600 ; 100075e6
        ;   XREF to: 10007600 (UNCONDITIONAL_CALL)  ; void crt_startup.c_doexit_FUN_10007600(int code, int quick, int retcaller)
    ADD ESP,0xc                         ; 100075eb
    RET                                 ; 100075ee

