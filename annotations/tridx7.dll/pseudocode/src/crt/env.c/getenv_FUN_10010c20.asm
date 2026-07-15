; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_env_c_getenv_FUN_10010c20(char *name)
;
; Parameters:
; char *           Stack[0x4]:4   name
;
; Called Functions:
;   crt_env.c_getenv_FUN_10010c50
;   crt_thread.c__lock_FUN_100059a0
;   crt_thread.c__unlock_FUN_10005a10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10010c20
        ;   Label: crt_env.c_getenv_FUN_10010c20
    PUSH 0xc                            ; 10010c21
    CALL crt_thread.c__lock_FUN_100059a0 ; 10010c23
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_FUN_100059a0(int file)
    MOV EAX,dword ptr [ESP + 0xc]       ; 10010c28
    ADD ESP,0x4                         ; 10010c2c
    PUSH EAX                            ; 10010c2f
    CALL crt_env.c_getenv_FUN_10010c50  ; 10010c30
        ;   XREF to: 10010c50 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_10010c50(char * name)
    ADD ESP,0x4                         ; 10010c35
    MOV ESI,EAX                         ; 10010c38
    PUSH 0xc                            ; 10010c3a
    CALL crt_thread.c__unlock_FUN_10005a10 ; 10010c3c
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 10010c41
    MOV EAX,ESI                         ; 10010c44
    POP ESI                             ; 10010c46
    RET                                 ; 10010c47

