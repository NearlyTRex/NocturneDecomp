; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_io_c_invalidate_handle_wrapper_FUN_0060a154(int handle_index)
;
; Parameters:
; int              Stack[0x4]:4   handle_index
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a3c7
;
; Referenced Globals:
;   void* g_TlsDataBase
;
; Called Functions:
;   crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060a154
        ;   Label: crt_io.c_invalidate_handle_wrapper_FUN_0060a154
    AND EAX,0xf                         ; 0060a158
    SHL EAX,0x4                         ; 0060a15b
    ADD EAX,0x3f9b8c0                   ; 0060a15e | g_TlsDataBase
    PUSH EAX                            ; 0060a163
    CALL crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c ; 0060a164
        ;   XREF to: 0060a04c (UNCONDITIONAL_CALL)  ; void crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a169
    MOV EDX,dword ptr [ESP + 0x4]       ; 0060a16c
    PUSH EDX                            ; 0060a170
    CALL 0x00608af4                     ; 0060a171
        ;   XREF to: 00608af4 (UNCONDITIONAL_CALL)  ; LAB_00608af2+2
    ADD ESP,0x4                         ; 0060a176
    RET                                 ; 0060a179

