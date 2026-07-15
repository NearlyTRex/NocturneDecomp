; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_thread_c__lock_FUN_100059a0(int file)
;
; Parameters:
; int              Stack[0x4]:4   file
;
; XREF[26]:
;   crt_ctype.c__tolower_FUN_10009b70 at 10009b9f
;   crt_ctype.c_towupper_FUN_10010750 at 10010783
;   crt_env.c_getenv_FUN_10010c20 at 10010c23
;   crt_heap.c__callnewh_FUN_1000ab30 at 1000ab32
;   crt_heap.c__set_new_handler_FUN_1000aaf0 at 1000aaf3
;   crt_io.c__alloc_osfhnd_FUN_10008a40 at 10008a55
;   crt_io.c__lock_fhandle_FUN_10008de0 at 10008e0a
;   crt_locale.c__setmbcp_FUN_10007eb0 at 10007eb9
;   crt_locale.c__wctomb_FUN_100091e0 at 100091f2
;   crt_locale.c_setlocale_FUN_1000ac10 at 1000ac34
;   ... and 16 more
;
; Referenced Globals:
;   undefined4 DAT_10016c78
;   void* PTR_InitializeCriticalSection_102421b0 = 00242398
;   void* PTR_EnterCriticalSection_102421b8 = 002423cc
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;   crt_heap.c_malloc_FUN_10008830
;   crt_startup.c__amsg_exit_FUN_100058c0
;   crt_thread.c__unlock_FUN_10005a10
;   EnterCriticalSection
;   InitializeCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 100059a0
        ;   Label: crt_thread.c__lock_FUN_100059a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 100059a1
    MOV EBP,ESP                         ; 100059a5
    PUSH ESI                            ; 100059a7
    PUSH EDI                            ; 100059a8
    LEA EDI,[EAX*0x4 + 0x10016c78]      ; 100059a9 | DAT_10016c78
    CMP dword ptr [EDI],0x0             ; 100059b0 | DAT_10016c78
    JNZ 0x100059fb                      ; 100059b3
        ;   XREF to: 100059fb (CONDITIONAL_JUMP)  ; LAB_100059fb
    PUSH 0x18                           ; 100059b5
    CALL crt_heap.c_malloc_FUN_10008830 ; 100059b7
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 100059bc
    MOV ESI,EAX                         ; 100059bf
    TEST ESI,ESI                        ; 100059c1
    JNZ 0x100059cf                      ; 100059c3
        ;   XREF to: 100059cf (CONDITIONAL_JUMP)  ; LAB_100059cf
    PUSH 0x11                           ; 100059c5
    CALL crt_startup.c__amsg_exit_FUN_100058c0 ; 100059c7
        ;   XREF to: 100058c0 (UNCONDITIONAL_CALL)  ; void crt_startup.c__amsg_exit_FUN_100058c0(int rterrnum)
    ADD ESP,0x4                         ; 100059cc
    PUSH 0x11                           ; 100059cf
        ;   Label: LAB_100059cf
    CALL crt_thread.c__lock_FUN_100059a0 ; 100059d1
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_FUN_100059a0(int file)
    ADD ESP,0x4                         ; 100059d6
    CMP dword ptr [EDI],0x0             ; 100059d9 | DAT_10016c78
    PUSH ESI                            ; 100059dc
    JNZ 0x100059e9                      ; 100059dd
        ;   XREF to: 100059e9 (CONDITIONAL_JUMP)  ; LAB_100059e9
    CALL dword ptr [0x102421b0]         ; 100059df | PTR_InitializeCriticalSection_102421b0
    MOV dword ptr [EDI],ESI             ; 100059e5 | DAT_10016c78
    JMP 0x100059f1                      ; 100059e7
        ;   XREF to: 100059f1 (UNCONDITIONAL_JUMP)  ; LAB_100059f1
    CALL crt_heap.c_free_FUN_10005b30   ; 100059e9
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
        ;   Label: LAB_100059e9
    ADD ESP,0x4                         ; 100059ee
    PUSH 0x11                           ; 100059f1
        ;   Label: LAB_100059f1
    CALL crt_thread.c__unlock_FUN_10005a10 ; 100059f3
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 100059f8
    MOV EAX,dword ptr [EDI]             ; 100059fb | DAT_10016c78
        ;   Label: LAB_100059fb
    PUSH EAX                            ; 100059fd
    CALL dword ptr [0x102421b8]         ; 100059fe | PTR_EnterCriticalSection_102421b8
    POP EDI                             ; 10005a04
    POP ESI                             ; 10005a05
    POP EBP                             ; 10005a06
    RET                                 ; 10005a07

