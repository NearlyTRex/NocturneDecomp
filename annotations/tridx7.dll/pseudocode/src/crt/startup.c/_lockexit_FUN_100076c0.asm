; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c__lockexit_FUN_100076c0(void)
;
;
; XREF[1]:
;   crt_startup.c_doexit_FUN_10007600 at 10007603
;
; Called Functions:
;   crt_thread.c__lock_FUN_100059a0
;
; *****************************************************************************

section .text

    PUSH 0xd                            ; 100076c0
        ;   Label: crt_startup.c__lockexit_FUN_100076c0
    CALL crt_thread.c__lock_FUN_100059a0 ; 100076c2
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_FUN_100059a0(int file)
    ADD ESP,0x4                         ; 100076c7
    RET                                 ; 100076ca

