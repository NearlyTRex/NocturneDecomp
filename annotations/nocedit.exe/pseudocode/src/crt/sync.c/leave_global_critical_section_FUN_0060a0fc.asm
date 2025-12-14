; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_sync.c_leave_global_critical_section_FUN_0060a0fc(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a3d1
;
; Referenced Globals:
;   ReentrantCriticalSection g_GlobalSystemCriticalSection
;
; Called Functions:
;   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
;
; *****************************************************************************

section .text

    PUSH 0x3f9b8a0                      ; 0060a0fc | g_GlobalSystemCriticalSection
        ;   Label: crt_sync.c_leave_global_critical_section_FUN_0060a0fc
    CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4 ; 0060a101
        ;   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)  ; void crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a106
    RET                                 ; 0060a109

