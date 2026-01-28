; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_tls_c_enter_critical_section_by_index_FUN_0060a10c(int sectionIndex)
;
; Parameters:
; int              Stack[0x4]:4   sectionIndex
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a3b8
;
; Referenced Globals:
;   void* g_TlsDataBase
;
; Called Functions:
;   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060a10c
        ;   Label: crt_tls.c_enter_critical_section_by_index_FUN_0060a10c
    AND EAX,0xf                         ; 0060a110
    SHL EAX,0x4                         ; 0060a113
    ADD EAX,0x3f9b8c0                   ; 0060a116 | g_TlsDataBase
    PUSH EAX                            ; 0060a11b
    CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060 ; 0060a11c
        ;   XREF to: 0060a060 (UNCONDITIONAL_CALL)  ; void crt_sync.c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a121
    RET                                 ; 0060a124

