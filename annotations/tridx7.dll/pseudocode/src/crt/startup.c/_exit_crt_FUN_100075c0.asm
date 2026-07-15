; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c__exit_crt_FUN_100075c0(int code)
;
; Parameters:
; int              Stack[0x4]:4   code
;
; XREF[2]:
;   crt_signal.c_raise_FUN_1000bbc0 at 1000bc97
;   crt_startup.c__amsg_exit_FUN_100058c0 at 100058ee
;
; Called Functions:
;   crt_startup.c_doexit_FUN_10007600
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100075c0
        ;   Label: crt_startup.c__exit_crt_FUN_100075c0
    PUSH 0x0                            ; 100075c4
    PUSH 0x1                            ; 100075c6
    PUSH EAX                            ; 100075c8
    CALL crt_startup.c_doexit_FUN_10007600 ; 100075c9
        ;   XREF to: 10007600 (UNCONDITIONAL_CALL)  ; void crt_startup.c_doexit_FUN_10007600(int code, int quick, int retcaller)
    ADD ESP,0xc                         ; 100075ce
    RET                                 ; 100075d1

