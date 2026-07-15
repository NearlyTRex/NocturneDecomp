; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_thread_c__mtterm_FUN_10007760(void)
;
;
; XREF[2]:
;   crt_startup.c__DllMainCRTStartup_FUN_100057f0 at 1000587c
;   crt_startup.c___CRTDLL_INIT_FUN_100056a0 at 100057bf
;
; Referenced Globals:
;   undefined4 DAT_10016da4
;   void* PTR_TlsFree_102421e4 = 0024248e
;
; Called Functions:
;   crt_thread.c__mtdeletelocks_FUN_10005930
;   TlsFree
;
; *****************************************************************************

section .text

    CALL crt_thread.c__mtdeletelocks_FUN_10005930 ; 10007760
        ;   XREF to: 10005930 (UNCONDITIONAL_CALL)  ; void crt_thread.c__mtdeletelocks_FUN_10005930()
        ;   Label: crt_thread.c__mtterm_FUN_10007760
    MOV EAX,[0x10016da4]                ; 10007765 | DAT_10016da4
    CMP EAX,-0x1                        ; 1000776a
    JZ 0x10007780                       ; 1000776d
        ;   XREF to: 10007780 (CONDITIONAL_JUMP)  ; LAB_10007780
    PUSH EAX                            ; 1000776f
    CALL dword ptr [0x102421e4]         ; 10007770 | PTR_TlsFree_102421e4
    MOV dword ptr [0x10016da4],0xffffffff ; 10007776 | DAT_10016da4
    RET                                 ; 10007780
        ;   Label: LAB_10007780

