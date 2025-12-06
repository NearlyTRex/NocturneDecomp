; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection * rcs)
;
; Parameters:
; ReentrantCriticalSection * Stack[0x4]:4   rcs
;
; XREF[8]:
;   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060 at 0060a0a5
;   crt_sync.c_leave_global_critical_section_FUN_0060a0fc at 0060a101
;   crt_sync.c_leave_global_io_critical_section_FUN_0060a1cc at 0060a1d1
;   crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c at 0060a191
;   crt_sync.c_leave_global_runtime_critical_section_FUN_0060a1ec at 0060a1f1
;   crt_sync.c_leave_global_thread_critical_section_FUN_0060a1ac at 0060a1b1
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a40e
;   crt_tls.c_leave_critical_section_by_index_FUN_0060a128 at 0060a138
;
; Referenced Globals:
;   LeaveCriticalSection* PTR_LeaveCriticalSection_006115e4 = 00212044
;
; Called Functions:
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a0c4
        ;   Label: crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
    PUSH ESI                            ; 0060a0c5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0060a0c6
    MOV EDX,dword ptr [EAX + 0xc]       ; 0060a0ca
    TEST EDX,EDX                        ; 0060a0cd
    JBE 0x0060a0e8                      ; 0060a0cf | LAB_0060a0e8
        ;   XREF to: 0060a0e8 (CONDITIONAL_JUMP)
    LEA EBX,[EDX + -0x1]                ; 0060a0d1
    MOV dword ptr [EAX + 0xc],EBX       ; 0060a0d4
    TEST EBX,EBX                        ; 0060a0d7
    JNZ 0x0060a0e8                      ; 0060a0d9 | LAB_0060a0e8
        ;   XREF to: 0060a0e8 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX]             ; 0060a0db
    PUSH ESI                            ; 0060a0dd
    MOV dword ptr [EAX + 0x8],EBX       ; 0060a0de
    CALL dword ptr CS:[0x6115e4]        ; 0060a0e1 | LeaveCriticalSection * PTR_LeaveCriticalSection_006115e4
    POP ESI                             ; 0060a0e8
        ;   Label: LAB_0060a0e8
    POP EBX                             ; 0060a0e9
    RET                                 ; 0060a0ea

