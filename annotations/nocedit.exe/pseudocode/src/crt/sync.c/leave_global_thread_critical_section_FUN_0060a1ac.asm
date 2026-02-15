; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_sync_c_leave_global_thread_critical_section_FUN_0060a1ac(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a450
;
; Referenced Globals:
;   ReentrantCriticalSection g_GlobalThreadCriticalSection
;
; Called Functions:
;   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
;
; *****************************************************************************

section .text

    PUSH 0x3f9b8b0                      ; 0060a1ac | g_GlobalThreadCriticalSection
        ;   Label: crt_sync.c_leave_global_thread_critical_section_FUN_0060a1ac
    CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4 ; 0060a1b1
        ;   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)  ; void crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a1b6
    RET                                 ; 0060a1b9

