; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_sync.c_enter_global_thread_critical_section_FUN_0060a19c(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a41d
;
; Referenced Globals:
;   ReentrantCriticalSection g_GlobalThreadCriticalSection
;
; Called Functions:
;   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
;
; *****************************************************************************

section .text

    PUSH 0x3f9b8b0                      ; 0060a19c | g_GlobalThreadCriticalSection
        ;   Label: crt_sync.c_enter_global_thread_critical_section_FUN_0060a19c
    CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060 ; 0060a1a1
        ;   XREF to: 0060a060 (UNCONDITIONAL_CALL)  ; void crt_sync.c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a1a6
    RET                                 ; 0060a1a9

