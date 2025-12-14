; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_sync.c_enter_global_critical_section_FUN_0060a0ec(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a3cc
;
; Referenced Globals:
;   ReentrantCriticalSection g_GlobalSystemCriticalSection
;
; Called Functions:
;   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
;
; *****************************************************************************

section .text

    PUSH 0x3f9b8a0                      ; 0060a0ec | g_GlobalSystemCriticalSection
        ;   Label: crt_sync.c_enter_global_critical_section_FUN_0060a0ec
    CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060 ; 0060a0f1
        ;   XREF to: 0060a060 (UNCONDITIONAL_CALL)  ; void crt_sync.c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a0f6
    RET                                 ; 0060a0f9

