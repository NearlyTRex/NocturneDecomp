; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_sync_c_leave_global_runtime_critical_section_FUN_0060a1ec(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a45a
;
; Referenced Globals:
;   ReentrantCriticalSection g_GlobalRuntimeCriticalSection
;
; Called Functions:
;   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
;
; *****************************************************************************

section .text

    PUSH 0x3f9bff0                      ; 0060a1ec | g_GlobalRuntimeCriticalSection
        ;   Label: crt_sync.c_leave_global_runtime_critical_section_FUN_0060a1ec
    CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4 ; 0060a1f1
        ;   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)  ; void crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a1f6
    RET                                 ; 0060a1f9

