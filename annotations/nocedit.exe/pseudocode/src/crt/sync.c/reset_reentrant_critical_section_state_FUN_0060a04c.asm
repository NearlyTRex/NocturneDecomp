; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_sync_c_reset_reentrant_critical_section_state_FUN_0060a04c(ReentrantCriticalSection *rcs)
;
; Parameters:
; ReentrantCriticalSection * Stack[0x4]:4   rcs
;
; XREF[2]:
;   crt_io.c_invalidate_handle_wrapper_FUN_0060a154 at 0060a164
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a413
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060a04c
        ;   Label: crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c
    MOV dword ptr [EAX + 0x8],0x0       ; 0060a050
    MOV dword ptr [EAX + 0xc],0x0       ; 0060a057
    RET                                 ; 0060a05e

