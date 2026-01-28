; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_tls_c_leave_critical_section_by_index_FUN_0060a128(int sectionIndex)
;
; Parameters:
; int              Stack[0x4]:4   sectionIndex
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a3bd
;
; Referenced Globals:
;   void* g_TlsDataBase
;
; Called Functions:
;   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060a128
        ;   Label: crt_tls.c_leave_critical_section_by_index_FUN_0060a128
    AND EAX,0xf                         ; 0060a12c
    SHL EAX,0x4                         ; 0060a12f
    ADD EAX,0x3f9b8c0                   ; 0060a132 | g_TlsDataBase
    PUSH EAX                            ; 0060a137
    CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4 ; 0060a138
        ;   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)  ; void crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection * rcs)
    ADD ESP,0x4                         ; 0060a13d
    RET                                 ; 0060a140

