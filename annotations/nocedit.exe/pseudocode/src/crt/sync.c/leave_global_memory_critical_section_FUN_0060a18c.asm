; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a422
;
; Referenced Globals:
;   ReentrantCriticalSection g_GlobalMemoryCriticalSection
;
; Called Functions:
;   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
;
; *****************************************************************************

section .text

    PUSH 0x3f9b9c0                      ; 0060a18c | g_GlobalMemoryCriticalSection
        ;   Label: crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c
    CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4 ; 0060a191
        ;   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)  ; void crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a196
    RET                                 ; 0060a199

