; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_tls_c_unregister_thread_data_FUN_0060cc3c(void *threadDataKey)
;
; Parameters:
; void *           Stack[0x4]:4   threadDataKey
;
; XREF[1]:
;   crt_tls.c_cleanup_thread_tls_data_FUN_0060a334 at 0060a35a
;
; Referenced Globals:
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14 = 00602434
;   ThreadRegistryEntry* g_ThreadDataRegistryList
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060cc3c
        ;   Label: crt_tls.c_unregister_thread_data_FUN_0060cc3c
    PUSH ESI                            ; 0060cc3d
    PUSH EDI                            ; 0060cc3e
    MOV EDI,dword ptr [ESP + 0x10]      ; 0060cc3f
    CALL dword ptr [0x00684f10]         ; 0060cc43 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10
    MOV EBX,dword ptr [0x03f9c160]      ; 0060cc49 | g_ThreadDataRegistryList
    MOV ESI,0x3f9c160                   ; 0060cc4f | g_ThreadDataRegistryList
    TEST EBX,EBX                        ; 0060cc54
    JZ 0x0060cc86                       ; 0060cc56
        ;   XREF to: 0060cc86 (CONDITIONAL_JUMP)  ; LAB_0060cc86
    CMP EDI,dword ptr [EBX + 0x4]       ; 0060cc58
        ;   Label: LAB_0060cc58
    JNZ 0x0060cc7e                      ; 0060cc5b
        ;   XREF to: 0060cc7e (CONDITIONAL_JUMP)  ; LAB_0060cc7e
    CMP dword ptr [EBX + 0xc],0x0       ; 0060cc5d
    JZ 0x0060cc6f                       ; 0060cc61
        ;   XREF to: 0060cc6f (CONDITIONAL_JUMP)  ; LAB_0060cc6f
    MOV EDI,dword ptr [EBX + 0x8]       ; 0060cc63
    PUSH EDI                            ; 0060cc66
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060cc67
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060cc6c
    MOV EDI,dword ptr [EBX]             ; 0060cc6f
        ;   Label: LAB_0060cc6f
    PUSH EBX                            ; 0060cc71
    MOV dword ptr [ESI],EDI             ; 0060cc72 | g_ThreadDataRegistryList
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060cc74
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060cc79
    JMP 0x0060cc86                      ; 0060cc7c
        ;   XREF to: 0060cc86 (UNCONDITIONAL_JUMP)  ; LAB_0060cc86
    MOV ESI,EBX                         ; 0060cc7e
        ;   Label: LAB_0060cc7e
    MOV EBX,dword ptr [EBX]             ; 0060cc80
    TEST EBX,EBX                        ; 0060cc82
    JNZ 0x0060cc58                      ; 0060cc84
        ;   XREF to: 0060cc58 (CONDITIONAL_JUMP)  ; LAB_0060cc58
    CALL dword ptr [0x00684f14]         ; 0060cc86 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14
        ;   Label: LAB_0060cc86
    POP EDI                             ; 0060cc8c
    POP ESI                             ; 0060cc8d
    POP EBX                             ; 0060cc8e
    RET                                 ; 0060cc8f

