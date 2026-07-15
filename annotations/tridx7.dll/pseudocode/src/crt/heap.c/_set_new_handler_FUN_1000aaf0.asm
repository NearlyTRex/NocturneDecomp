; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _PNH __cdecl crt_heap_c__set_new_handler_FUN_1000aaf0(_PNH pnh)
;
; Parameters:
; _PNH             Stack[0x4]:4   pnh
;
; Referenced Globals:
;   undefined4 DAT_10240794
;
; Called Functions:
;   crt_thread.c__lock_FUN_100059a0
;   crt_thread.c__unlock_FUN_10005a10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000aaf0
        ;   Label: crt_heap.c__set_new_handler_FUN_1000aaf0
    PUSH 0x9                            ; 1000aaf1
    CALL crt_thread.c__lock_FUN_100059a0 ; 1000aaf3
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_FUN_100059a0(int file)
    MOV EAX,dword ptr [ESP + 0xc]       ; 1000aaf8
    ADD ESP,0x4                         ; 1000aafc
    MOV ESI,dword ptr [0x10240794]      ; 1000aaff | DAT_10240794
    PUSH 0x9                            ; 1000ab05
    MOV [0x10240794],EAX                ; 1000ab07 | DAT_10240794
    CALL crt_thread.c__unlock_FUN_10005a10 ; 1000ab0c
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 1000ab11
    MOV EAX,ESI                         ; 1000ab14
    POP ESI                             ; 1000ab16
    RET                                 ; 1000ab17

