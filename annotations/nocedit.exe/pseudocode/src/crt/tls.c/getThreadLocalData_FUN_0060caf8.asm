; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void * crt_tls.c_getThreadLocalData_FUN_0060caf8(void)
;
;
; XREF[1]:
;   crt_tls.c_get_thread_local_data_FUN_0060a1fc at 0060a228
;
; Referenced Globals:
;   GetCurrentThreadId* g_GetCurrentThreadIdFunc = 00211e84
;   TlsSetValue* g_TlsSetValueFunc = 0021226c
;   TerminatedCString s_Unable_to_resize_thread__00659648
;   TerminatedCString s_Unable_to_resize_thread__00659670
;   DWORD g_TLSIndex = 0xffffffff
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14 = 00602434
;   DWORD g_RuntimeBufferSize = 0xf4
;   ThreadRegistryEntry* g_ThreadDataRegistryList
;
; Called Functions:
;   crt_memory.c_calloc_FUN_0060ca90
;   crt_memory.c_realloc_FUN_00601df0
;   crt_startup.c_HandleRuntimeError_FUN_00606660
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060caf8
        ;   Label: crt_tls.c_getThreadLocalData_FUN_0060caf8
    PUSH ESI                            ; 0060caf9
    PUSH EDI                            ; 0060cafa
    PUSH EBP                            ; 0060cafb
    CALL dword ptr [0x00684f10]         ; 0060cafc | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10
    CALL dword ptr CS:[0x611584]        ; 0060cb02 | g_GetCurrentThreadIdFunc
    MOV EBX,dword ptr [0x03f9c160]      ; 0060cb09 | g_ThreadDataRegistryList
    TEST EBX,EBX                        ; 0060cb0f
    JZ 0x0060cb1e                       ; 0060cb11
        ;   XREF to: 0060cb1e (CONDITIONAL_JUMP)  ; LAB_0060cb1e
    CMP EAX,dword ptr [EBX + 0x4]       ; 0060cb13
        ;   Label: LAB_0060cb13
    JZ 0x0060cb1e                       ; 0060cb16
        ;   XREF to: 0060cb1e (CONDITIONAL_JUMP)  ; LAB_0060cb1e
    MOV EBX,dword ptr [EBX]             ; 0060cb18
    TEST EBX,EBX                        ; 0060cb1a
    JNZ 0x0060cb13                      ; 0060cb1c
        ;   XREF to: 0060cb13 (CONDITIONAL_JUMP)  ; LAB_0060cb13
    CMP dword ptr [EBX + 0xc],0x0       ; 0060cb1e
        ;   Label: LAB_0060cb1e
    JZ 0x0060cb4e                       ; 0060cb22
        ;   XREF to: 0060cb4e (CONDITIONAL_JUMP)  ; LAB_0060cb4e
    MOV EDI,dword ptr [0x006854f8]      ; 0060cb24 | g_RuntimeBufferSize
    PUSH EDI                            ; 0060cb2a
    MOV EBP,dword ptr [EBX + 0x8]       ; 0060cb2b
    PUSH EBP                            ; 0060cb2e
    CALL crt_memory.c_realloc_FUN_00601df0 ; 0060cb2f
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0060cb34
    MOV EBP,EAX                         ; 0060cb37
    TEST EAX,EAX                        ; 0060cb39
    JNZ 0x0060cb9c                      ; 0060cb3b
        ;   XREF to: 0060cb9c (CONDITIONAL_JUMP)  ; LAB_0060cb9c
    PUSH 0x1                            ; 0060cb3d
    PUSH 0x659648                       ; 0060cb3f | = "Unable to resize thread-specific data..."
    CALL crt_startup.c_HandleRuntimeError_FUN_00606660 ; 0060cb44
        ;   XREF to: 00606660 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)
    ADD ESP,0x8                         ; 0060cb49
    JMP 0x0060cb9c                      ; 0060cb4c
        ;   XREF to: 0060cb9c (UNCONDITIONAL_JUMP)  ; LAB_0060cb9c
    MOV ESI,dword ptr [0x006854f8]      ; 0060cb4e | g_RuntimeBufferSize
        ;   Label: LAB_0060cb4e
    PUSH ESI                            ; 0060cb54
    PUSH 0x1                            ; 0060cb55
    CALL crt_memory.c_calloc_FUN_0060ca90 ; 0060cb57
        ;   XREF to: 0060ca90 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_calloc_FUN_0060ca90(ulong count, ulong size)
    ADD ESP,0x8                         ; 0060cb5c
    MOV EBP,EAX                         ; 0060cb5f
    TEST EAX,EAX                        ; 0060cb61
    JNZ 0x0060cb74                      ; 0060cb63
        ;   XREF to: 0060cb74 (CONDITIONAL_JUMP)  ; LAB_0060cb74
    PUSH 0x1                            ; 0060cb65
    PUSH 0x659670                       ; 0060cb67 | = "Unable to resize thread-specific data..."
    CALL crt_startup.c_HandleRuntimeError_FUN_00606660 ; 0060cb6c
        ;   XREF to: 00606660 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)
    ADD ESP,0x8                         ; 0060cb71
    MOV ESI,dword ptr [EBX + 0x8]       ; 0060cb74
        ;   Label: LAB_0060cb74
    MOV EDI,EBP                         ; 0060cb77
    MOV ECX,dword ptr [ESI + 0xf0]      ; 0060cb79
    PUSH ES                             ; 0060cb7f
    MOV AX,DS                           ; 0060cb80
    MOV ES,AX                           ; 0060cb82
    PUSH EDI                            ; 0060cb84
    MOV EAX,ECX                         ; 0060cb85
    SHR ECX,0x2                         ; 0060cb87
    MOVSD.REP ES:EDI,ESI                ; 0060cb8a
    MOV CL,AL                           ; 0060cb8c
    AND CL,0x3                          ; 0060cb8e
    MOVSB.REP ES:EDI,ESI                ; 0060cb91
    POP EDI                             ; 0060cb93
    POP ES                              ; 0060cb94
    MOV dword ptr [EBX + 0xc],0x1       ; 0060cb95
    MOV dword ptr [EBX + 0x8],EBP       ; 0060cb9c
        ;   Label: LAB_0060cb9c
    MOV EAX,[0x006854f8]                ; 0060cb9f | g_RuntimeBufferSize
    PUSH EBP                            ; 0060cba4
    MOV dword ptr [EBP + 0xf0],EAX      ; 0060cba5
    MOV EAX,[0x00684ee0]                ; 0060cbab | g_TLSIndex
    MOV byte ptr [EBP + 0x52],0x1       ; 0060cbb0
    PUSH EAX                            ; 0060cbb4
    MOV byte ptr [EBP + 0x53],0x0       ; 0060cbb5
    CALL dword ptr CS:[0x611658]        ; 0060cbb9 | g_TlsSetValueFunc
    CALL dword ptr [0x00684f14]         ; 0060cbc0 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14
    MOV EAX,EBP                         ; 0060cbc6
    POP EBP                             ; 0060cbc8
    POP EDI                             ; 0060cbc9
    POP ESI                             ; 0060cbca
    POP EBX                             ; 0060cbcb
    RET                                 ; 0060cbcc

