; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_time_c__isindst_FUN_10010330(_tm *tb)
;
; Parameters:
; _tm *            Stack[0x4]:4   tb
;
; Called Functions:
;   crt_thread.c__lock_FUN_100059a0
;   crt_thread.c__unlock_FUN_10005a10
;   crt_time.c__isindst_lk_FUN_10010360
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10010330
        ;   Label: crt_time.c__isindst_FUN_10010330
    PUSH 0xb                            ; 10010331
    CALL crt_thread.c__lock_FUN_100059a0 ; 10010333
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_FUN_100059a0(int file)
    MOV EAX,dword ptr [ESP + 0xc]       ; 10010338
    ADD ESP,0x4                         ; 1001033c
    PUSH EAX                            ; 1001033f
    CALL crt_time.c__isindst_lk_FUN_10010360 ; 10010340
        ;   XREF to: 10010360 (UNCONDITIONAL_CALL)  ; int crt_time.c__isindst_lk_FUN_10010360(_tm * tb)
    ADD ESP,0x4                         ; 10010345
    MOV ESI,EAX                         ; 10010348
    PUSH 0xb                            ; 1001034a
    CALL crt_thread.c__unlock_FUN_10005a10 ; 1001034c
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 10010351
    MOV EAX,ESI                         ; 10010354
    POP ESI                             ; 10010356
    RET                                 ; 10010357

