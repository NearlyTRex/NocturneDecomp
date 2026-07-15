; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c__unlockexit_FUN_100076d0(void)
;
;
; XREF[1]:
;   crt_startup.c_doexit_FUN_10007600 at 10007693
;
; Called Functions:
;   crt_thread.c__unlock_FUN_10005a10
;
; *****************************************************************************

section .text

    PUSH 0xd                            ; 100076d0
        ;   Label: crt_startup.c__unlockexit_FUN_100076d0
    CALL crt_thread.c__unlock_FUN_10005a10 ; 100076d2
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 100076d7
    RET                                 ; 100076da

