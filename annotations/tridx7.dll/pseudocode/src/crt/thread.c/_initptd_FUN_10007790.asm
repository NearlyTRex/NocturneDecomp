; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_thread_c__initptd_FUN_10007790(_ptiddata ptd,pthreadlocinfo locale)
;
; Parameters:
; _ptiddata        Stack[0x4]:4   ptd
; pthreadlocinfo   Stack[0x8]:4   locale
;
; XREF[2]:
;   crt_thread.c__getptd_FUN_100077b0 at 100077f0
;   crt_thread.c__mtinit_FUN_10007700 at 1000773e
;
; Referenced Globals:
;   undefined4 DAT_100176d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10007790
        ;   Label: crt_thread.c__initptd_FUN_10007790
    MOV dword ptr [EAX + 0x50],0x100176d0 ; 10007794 | DAT_100176d0
    MOV dword ptr [EAX + 0x14],0x1      ; 1000779b
    RET                                 ; 100077a2

