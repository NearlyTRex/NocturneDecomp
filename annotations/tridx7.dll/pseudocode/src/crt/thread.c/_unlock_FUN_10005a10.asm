; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_thread_c__unlock_FUN_10005a10(int locknum)
;
; Parameters:
; int              Stack[0x4]:4   locknum
;
; XREF[27]:
;   crt_ctype.c__tolower_FUN_10009b70 at 10009bc6
;   crt_ctype.c_towupper_FUN_10010750 at 100107ab
;   crt_env.c_getenv_FUN_10010c20 at 10010c3c
;   crt_heap.c__callnewh_FUN_1000ab30 at 1000ab53
;   crt_heap.c__set_new_handler_FUN_1000aaf0 at 1000ab0c
;   crt_io.c__alloc_osfhnd_FUN_10008a40 at 10008aa0
;   crt_io.c__lock_fhandle_FUN_10008de0 at 10008e27
;   crt_locale.c__setmbcp_FUN_10007eb0 at 10007eda
;   crt_locale.c__wctomb_FUN_100091e0 at 1000921e
;   crt_locale.c_setlocale_FUN_1000ac10 at 1000adb2
;   ... and 17 more
;
; Referenced Globals:
;   undefined4 DAT_10016c78
;   void* PTR_LeaveCriticalSection_102421bc = 002423e4
;
; Called Functions:
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 10005a10
        ;   Label: crt_thread.c__unlock_FUN_10005a10
    MOV EAX,dword ptr [ESP + 0x8]       ; 10005a11
    MOV EBP,ESP                         ; 10005a15
    MOV ECX,dword ptr [EAX*0x4 + 0x10016c78] ; 10005a17 | DAT_10016c78
    PUSH ECX                            ; 10005a1e
    CALL dword ptr [0x102421bc]         ; 10005a1f | PTR_LeaveCriticalSection_102421bc
    POP EBP                             ; 10005a25
    RET                                 ; 10005a26

