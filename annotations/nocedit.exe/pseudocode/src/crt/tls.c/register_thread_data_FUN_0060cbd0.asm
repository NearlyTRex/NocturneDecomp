; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl BOOL crt_tls.c_register_thread_data_FUN_0060cbd0(void * tls_data, void * thread_param)
;
; Parameters:
; void *           Stack[0x4]:4   tls_data
; void *           Stack[0x8]:4   thread_param
;
; XREF[2]:
;   crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8 at 0060a303
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a49f
;
; Referenced Globals:
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14 = 00602434
;   ThreadRegistryEntry* g_ThreadDataRegistryList
;
; Called Functions:
;   crt_memory.c_calloc_FUN_0060ca90
;   crt_memory.c_free_FUN_00601cd0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   crt_unknown.c_CallReturnZero6_FUN_0060e880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060cbd0
        ;   Label: crt_tls.c_register_thread_data_FUN_0060cbd0
    PUSH ESI                            ; 0060cbd1
    PUSH EDI                            ; 0060cbd2
    MOV EDI,dword ptr [ESP + 0x14]      ; 0060cbd3
    CALL dword ptr [0x00684f10]         ; 0060cbd7 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10
    PUSH 0x10                           ; 0060cbdd
    MOV ESI,0x1                         ; 0060cbdf
    PUSH ESI                            ; 0060cbe4
    CALL crt_memory.c_calloc_FUN_0060ca90 ; 0060cbe5
        ;   XREF to: 0060ca90 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_calloc_FUN_0060ca90(ulong count, ulong size)
    MOV EBX,EAX                         ; 0060cbea
    ADD ESP,0x8                         ; 0060cbec
    TEST EAX,EAX                        ; 0060cbef
    JZ 0x0060cc2e                       ; 0060cbf1
        ;   XREF to: 0060cc2e (CONDITIONAL_JUMP)  ; LAB_0060cc2e
    PUSH EDI                            ; 0060cbf3
    CALL crt_unknown.c_CallReturnZero6_FUN_0060e880 ; 0060cbf4
        ;   XREF to: 0060e880 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_CallReturnZero6_FUN_0060e880()
    ADD ESP,0x4                         ; 0060cbf9
    TEST EAX,EAX                        ; 0060cbfc
    JZ 0x0060cc0d                       ; 0060cbfe
        ;   XREF to: 0060cc0d (CONDITIONAL_JUMP)  ; LAB_0060cc0d
    PUSH EBX                            ; 0060cc00
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060cc01
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    XOR ESI,ESI                         ; 0060cc06
    ADD ESP,0x4                         ; 0060cc08
    JMP 0x0060cc30                      ; 0060cc0b
        ;   XREF to: 0060cc30 (UNCONDITIONAL_JUMP)  ; LAB_0060cc30
    MOV EAX,dword ptr [ESP + 0x10]      ; 0060cc0d
        ;   Label: LAB_0060cc0d
    MOV dword ptr [EBX + 0x8],EDI       ; 0060cc11
    MOV dword ptr [EBX + 0x4],EAX       ; 0060cc14
    XOR EAX,EAX                         ; 0060cc17
    MOV AL,byte ptr [EDI + 0x52]        ; 0060cc19
    MOV dword ptr [EBX + 0xc],EAX       ; 0060cc1c
    MOV EAX,[0x03f9c160]                ; 0060cc1f | g_ThreadDataRegistryList
    MOV dword ptr [0x03f9c160],EBX      ; 0060cc24 | g_ThreadDataRegistryList
    MOV dword ptr [EBX],EAX             ; 0060cc2a
    JMP 0x0060cc30                      ; 0060cc2c
        ;   XREF to: 0060cc30 (UNCONDITIONAL_JUMP)  ; LAB_0060cc30
    XOR ESI,ESI                         ; 0060cc2e
        ;   Label: LAB_0060cc2e
    CALL dword ptr [0x00684f14]         ; 0060cc30 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14
        ;   Label: LAB_0060cc30
    MOV EAX,ESI                         ; 0060cc36
    POP EDI                             ; 0060cc38
    POP ESI                             ; 0060cc39
    POP EBX                             ; 0060cc3a
    RET                                 ; 0060cc3b

