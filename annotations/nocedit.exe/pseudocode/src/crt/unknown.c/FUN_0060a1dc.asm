; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0060a1dc(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a46f
;
; Referenced Globals:
;   ReentrantCriticalSection g_GlobalRuntimeCriticalSection
;
; Called Functions:
;   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
;
; *****************************************************************************

section .text

    PUSH 0x3f9bff0                      ; 0060a1dc | g_GlobalRuntimeCriticalSection
        ;   Label: crt_unknown.c_FUN_0060a1dc
    CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060 ; 0060a1e1
        ;   XREF to: 0060a060 (UNCONDITIONAL_CALL)  ; void crt_sync.c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a1e6
    RET                                 ; 0060a1e9

