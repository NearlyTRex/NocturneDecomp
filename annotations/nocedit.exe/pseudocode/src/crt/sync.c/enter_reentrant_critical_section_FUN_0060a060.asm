; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_sync_c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection *rcs)
;
; Parameters:
; ReentrantCriticalSection * Stack[0x4]:4   rcs
;
; XREF[7]:
;   crt_sync.c_enter_global_critical_section_FUN_0060a0ec at 0060a0f1
;   crt_sync.c_enter_global_io_critical_section_FUN_0060a1bc at 0060a1c1
;   crt_sync.c_enter_global_memory_critical_section_FUN_0060a17c at 0060a181
;   crt_sync.c_enter_global_thread_critical_section_FUN_0060a19c at 0060a1a1
;   crt_tls.c_enter_critical_section_by_index_FUN_0060a10c at 0060a11c
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a409
;   crt_unknown.c_FUN_0060a1dc at 0060a1e1
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_FUNC* g_EnterCriticalSectionFunc = 00211cfa
;   GET_CURRENT_THREAD_ID_FUNC* g_GetCurrentThreadIdFunc = 00211e84
;   LPCRITICAL_SECTION g_GlobalInitLock
;
; Called Functions:
;   crt_sync.c_allocate_critical_section_FUN_00609f24
;   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
;   EnterCriticalSection
;   GetCurrentThreadId
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a060
        ;   Label: crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
    PUSH ESI                            ; 0060a061
    PUSH EDI                            ; 0060a062
    PUSH EBP                            ; 0060a063
    MOV EBX,dword ptr [ESP + 0x14]      ; 0060a064
    CALL dword ptr CS:[0x611584]        ; 0060a068 | g_GetCurrentThreadIdFunc
    MOV EDX,dword ptr [EBX + 0x8]       ; 0060a06f
    MOV ESI,EAX                         ; 0060a072
    CMP EAX,EDX                         ; 0060a074
    JZ 0x0060a0ba                       ; 0060a076
        ;   XREF to: 0060a0ba (CONDITIONAL_JUMP)  ; LAB_0060a0ba
    CMP dword ptr [EBX + 0x4],0x0       ; 0060a078
    JNZ 0x0060a0ad                      ; 0060a07c
        ;   XREF to: 0060a0ad (CONDITIONAL_JUMP)  ; LAB_0060a0ad
    PUSH 0x3f9bfd0                      ; 0060a07e | g_GlobalInitLock
    CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060 ; 0060a083
        ;   XREF to: 0060a060 (UNCONDITIONAL_CALL)  ; void crt_sync.c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection * rcs)
    MOV EDI,dword ptr [EBX + 0x4]       ; 0060a088
    ADD ESP,0x4                         ; 0060a08b
    TEST EDI,EDI                        ; 0060a08e
    JNZ 0x0060a0a0                      ; 0060a090
        ;   XREF to: 0060a0a0 (CONDITIONAL_JUMP)  ; LAB_0060a0a0
    CALL crt_sync.c_allocate_critical_section_FUN_00609f24 ; 0060a092
        ;   XREF to: 00609f24 (UNCONDITIONAL_CALL)  ; LPCRITICAL_SECTION crt_sync.c_allocate_critical_section_FUN_00609f24()
    MOV dword ptr [EBX + 0x4],0x1       ; 0060a097
    MOV dword ptr [EBX],EAX             ; 0060a09e
    PUSH 0x3f9bfd0                      ; 0060a0a0 | g_GlobalInitLock
        ;   Label: LAB_0060a0a0
    CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4 ; 0060a0a5
        ;   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)  ; void crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a0aa
    MOV EBP,dword ptr [EBX]             ; 0060a0ad
        ;   Label: LAB_0060a0ad
    PUSH EBP                            ; 0060a0af
    CALL dword ptr CS:[0x611530]        ; 0060a0b0 | g_EnterCriticalSectionFunc
    MOV dword ptr [EBX + 0x8],ESI       ; 0060a0b7
    INC dword ptr [EBX + 0xc]           ; 0060a0ba
        ;   Label: LAB_0060a0ba
    POP EBP                             ; 0060a0bd
    POP EDI                             ; 0060a0be
    POP ESI                             ; 0060a0bf
    POP EBX                             ; 0060a0c0
    RET                                 ; 0060a0c1

