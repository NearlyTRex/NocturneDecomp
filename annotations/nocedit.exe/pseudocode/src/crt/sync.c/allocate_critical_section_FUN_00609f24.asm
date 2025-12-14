; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl LPCRITICAL_SECTION crt_sync.c_allocate_critical_section_FUN_00609f24(void)
;
;
; XREF[2]:
;   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060 at 0060a092
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a46a
;
; Referenced Globals:
;   InitializeCriticalSection* PTR_InitializeCriticalSection_006115e0 = 00212028
;   TerminatedCString s_Unable_to_allocate_semap_006590c8
;   TerminatedCString s_Unable_to_allocate_semap_006590ec
;   CRITICAL_SECTION[64] g_StaticCriticalSectionArray
;   DWORD g_StaticCriticalSectionCounter
;   DWORD g_DynamicCriticalSectionCounter
;   LPCRITICAL_SECTION* g_DynamicCriticalSectionArray
;
; Called Functions:
;   crt_memory.c_calloc_FUN_0060ca90
;   crt_memory.c_realloc_FUN_00601df0
;   crt_startup.c_HandleRuntimeError_FUN_00606660
;   InitializeCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609f24
        ;   Label: crt_sync.c_allocate_critical_section_FUN_00609f24
    PUSH ESI                            ; 00609f25
    PUSH EDI                            ; 00609f26
    MOV EDX,dword ptr [0x03f9c000]      ; 00609f27 | g_StaticCriticalSectionCounter
    CMP EDX,0x40                        ; 00609f2d
    JGE 0x00609f50                      ; 00609f30
        ;   XREF to: 00609f50 (CONDITIONAL_JUMP)  ; LAB_00609f50
    LEA EAX,[EDX*0x4 + 0x0]             ; 00609f32
    MOV EBX,0x3f9b9d0                   ; 00609f39 | g_StaticCriticalSectionArray
    SUB EAX,EDX                         ; 00609f3e
    LEA EDI,[EDX + 0x1]                 ; 00609f40
    SHL EAX,0x3                         ; 00609f43
    MOV dword ptr [0x03f9c000],EDI      ; 00609f46 | g_StaticCriticalSectionCounter
    ADD EBX,EAX                         ; 00609f4c
    JMP 0x00609fb9                      ; 00609f4e
        ;   XREF to: 00609fb9 (UNCONDITIONAL_JUMP)  ; LAB_00609fb9
    PUSH 0x18                           ; 00609f50
        ;   Label: LAB_00609f50
    PUSH 0x1                            ; 00609f52
    CALL crt_memory.c_calloc_FUN_0060ca90 ; 00609f54
        ;   XREF to: 0060ca90 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_calloc_FUN_0060ca90(ulong count, ulong size)
    ADD ESP,0x8                         ; 00609f59
    MOV EBX,EAX                         ; 00609f5c
    TEST EAX,EAX                        ; 00609f5e
    JNZ 0x00609f71                      ; 00609f60
        ;   XREF to: 00609f71 (CONDITIONAL_JUMP)  ; LAB_00609f71
    PUSH 0x1                            ; 00609f62
    PUSH 0x6590c8                       ; 00609f64 | = "Unable to allocate semaphore data\r\n"
    CALL crt_startup.c_HandleRuntimeError_FUN_00606660 ; 00609f69
        ;   XREF to: 00606660 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)
    ADD ESP,0x8                         ; 00609f6e
    MOV EAX,[0x03f9c004]                ; 00609f71 | g_DynamicCriticalSectionCounter
        ;   Label: LAB_00609f71
    INC EAX                             ; 00609f76
    SHL EAX,0x2                         ; 00609f77
    PUSH EAX                            ; 00609f7a
    MOV ECX,dword ptr [0x03f9c008]      ; 00609f7b | g_DynamicCriticalSectionArray
    PUSH ECX                            ; 00609f81
    CALL crt_memory.c_realloc_FUN_00601df0 ; 00609f82
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00609f87
    MOV [0x03f9c008],EAX                ; 00609f8a | g_DynamicCriticalSectionArray
    TEST EAX,EAX                        ; 00609f8f
    JNZ 0x00609fa2                      ; 00609f91
        ;   XREF to: 00609fa2 (CONDITIONAL_JUMP)  ; LAB_00609fa2
    PUSH 0x1                            ; 00609f93
    PUSH 0x6590ec                       ; 00609f95 | = "Unable to allocate semaphore data\r\n"
    CALL crt_startup.c_HandleRuntimeError_FUN_00606660 ; 00609f9a
        ;   XREF to: 00606660 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)
    ADD ESP,0x8                         ; 00609f9f
    MOV EAX,[0x03f9c004]                ; 00609fa2 | g_DynamicCriticalSectionCounter
        ;   Label: LAB_00609fa2
    MOV EDX,dword ptr [0x03f9c008]      ; 00609fa7 | g_DynamicCriticalSectionArray
    LEA ESI,[EAX + 0x1]                 ; 00609fad
    MOV dword ptr [EDX + EAX*0x4],EBX   ; 00609fb0
    MOV dword ptr [0x03f9c004],ESI      ; 00609fb3 | g_DynamicCriticalSectionCounter
    PUSH EBX                            ; 00609fb9
        ;   Label: LAB_00609fb9
    CALL dword ptr CS:[0x6115e0]        ; 00609fba | PTR_InitializeCriticalSection_006115e0
    MOV EAX,EBX                         ; 00609fc1
    POP EDI                             ; 00609fc3
    POP ESI                             ; 00609fc4
    POP EBX                             ; 00609fc5
    RET                                 ; 00609fc6

