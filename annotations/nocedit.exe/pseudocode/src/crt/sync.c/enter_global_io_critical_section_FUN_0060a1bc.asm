; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_sync_c_enter_global_io_critical_section_FUN_0060a1bc(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a3d6
;
; Referenced Globals:
;   ReentrantCriticalSection g_GlobalIoCriticalSection
;
; Called Functions:
;   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
;
; *****************************************************************************

section .text

    PUSH 0x3f9bfe0                      ; 0060a1bc | g_GlobalIoCriticalSection
        ;   Label: crt_sync.c_enter_global_io_critical_section_FUN_0060a1bc
    CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060 ; 0060a1c1
        ;   XREF to: 0060a060 (UNCONDITIONAL_CALL)  ; void crt_sync.c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a1c6
    RET                                 ; 0060a1c9

