; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_thread_c__unlock_file_FUN_10005aa0(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; XREF[4]:
;   crt_stdio.c__fclose_FUN_10005430 at 10005462
;   crt_stdio.c__fsopen_FUN_10005520 at 1000554d
;   crt_stdio.c_fflush_FUN_10005c90 at 10005cbc
;   crt_stdio.c_fprintf_FUN_100054d0 at 1000550b
;
; Referenced Globals:
;   void* PTR_DAT_10017088 = 10240860
;   undefined4 DAT_100172e8
;   void* PTR_LeaveCriticalSection_102421bc = 002423e4
;
; Called Functions:
;   crt_thread.c__unlock_FUN_10005a10
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 10005aa0
        ;   Label: crt_thread.c__unlock_file_FUN_10005aa0
    MOV EAX,dword ptr [ESP + 0x8]       ; 10005aa1
    MOV EBP,ESP                         ; 10005aa5
    CMP EAX,0x10017088                  ; 10005aa7 | PTR_DAT_10017088
    JC 0x10005aca                       ; 10005aac
        ;   XREF to: 10005aca (CONDITIONAL_JUMP)  ; LAB_10005aca
    CMP EAX,0x100172e8                  ; 10005aae | DAT_100172e8
    JA 0x10005aca                       ; 10005ab3
        ;   XREF to: 10005aca (CONDITIONAL_JUMP)  ; LAB_10005aca
    SUB EAX,0x10017088                  ; 10005ab5 | PTR_DAT_10017088
    SAR EAX,0x5                         ; 10005aba
    ADD EAX,0x1c                        ; 10005abd
    PUSH EAX                            ; 10005ac0
    CALL crt_thread.c__unlock_FUN_10005a10 ; 10005ac1
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    MOV ESP,EBP                         ; 10005ac6
    POP EBP                             ; 10005ac8
    RET                                 ; 10005ac9
    ADD EAX,0x20                        ; 10005aca
        ;   Label: LAB_10005aca
    PUSH EAX                            ; 10005acd
    CALL dword ptr [0x102421bc]         ; 10005ace | PTR_LeaveCriticalSection_102421bc
    POP EBP                             ; 10005ad4
    RET                                 ; 10005ad5

