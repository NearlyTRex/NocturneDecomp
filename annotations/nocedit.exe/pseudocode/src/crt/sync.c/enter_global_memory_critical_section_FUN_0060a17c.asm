; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_sync.c_enter_global_memory_critical_section_FUN_0060a17c(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a418
;
; Referenced Globals:
;   ReentrantCriticalSection g_GlobalMemoryCriticalSection
;
; Called Functions:
;   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
;
; *****************************************************************************

section .text

    PUSH 0x3f9b9c0                      ; 0060a17c | g_GlobalMemoryCriticalSection
        ;   Label: crt_sync.c_enter_global_memory_critical_section_FUN_0060a17c
    CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060 ; 0060a181
        ;   XREF to: 0060a060 (UNCONDITIONAL_CALL)  ; void crt_sync.c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a186
    RET                                 ; 0060a189

