; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl undefined crt_sync.c_leave_global_io_critical_section_FUN_0060a1cc()
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a404
;
; Referenced Globals:
;   ReentrantCriticalSection g_GlobalIoCriticalSection
;
; Called Functions:
;   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
;
; *****************************************************************************

section .text

    PUSH 0x3f9bfe0                      ; 0060a1cc | g_GlobalIoCriticalSection
        ;   Label: crt_sync.c_leave_global_io_critical_section_FUN_0060a1cc
    CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4 ; 0060a1d1
        ;   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)  ; void crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a1d6
    RET                                 ; 0060a1d9

