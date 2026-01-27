; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4(void)
;
;
; XREF[1]:
;   crt_thread.c_create_thread_with_sync_FUN_0060f960 at 0060f982
;
; Referenced Globals:
;   TlsSetValue* g_TlsSetValueFunc = 0021226c
;   DWORD g_TLSIndex = 0xffffffff
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   REGISTER_HANDLE_FUNC* PTR_crt_sync.c_RegisterHandle_FUN_00602438_00684ef0 = 00602438
;   INVALIDATE_HANDLE_FUNC* PTR_crt_sync.c_InvalidateHandle_FUN_00602448_00684ef4 = 00602448
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc = 00602434
;   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
;   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f04 = 00602434
;   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
;   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f0c = 00602434
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14 = 00602434
;   ... and 9 more
;
; Called Functions:
;   crt_sync.c_allocate_critical_section_FUN_00609f24
;   crt_tls.c_register_thread_data_FUN_0060cbd0
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a3b4
        ;   Label: crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4
    PUSH ESI                            ; 0060a3b5
    PUSH EDI                            ; 0060a3b6
    PUSH EBP                            ; 0060a3b7
    MOV EDX,0x60a10c                    ; 0060a3b8
    MOV EBX,0x60a128                    ; 0060a3bd
    MOV ECX,0x60a144                    ; 0060a3c2
    MOV ESI,0x60a154                    ; 0060a3c7
    MOV EDI,0x60a0ec                    ; 0060a3cc
    MOV EBP,0x60a0fc                    ; 0060a3d1
    MOV EAX,0x60a1bc                    ; 0060a3d6
    MOV dword ptr [0x00684ee8],EDX      ; 0060a3db | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV dword ptr [0x00684eec],EBX      ; 0060a3e1 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV dword ptr [0x00684ef0],ECX      ; 0060a3e7 | PTR_crt_sync.c_RegisterHandle_FUN_00602438_00684ef0
    MOV dword ptr [0x00684ef4],ESI      ; 0060a3ed | PTR_crt_sync.c_InvalidateHandle_FUN_00602448_00684ef4
    MOV dword ptr [0x00684ef8],EDI      ; 0060a3f3 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8
    MOV dword ptr [0x00684efc],EBP      ; 0060a3f9 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
    MOV [0x00684f10],EAX                ; 0060a3ff | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10
    MOV EDX,0x60a1cc                    ; 0060a404
    MOV EBX,0x60a060                    ; 0060a409
    MOV ECX,0x60a0c4                    ; 0060a40e
    MOV ESI,0x60a04c                    ; 0060a413
    MOV EDI,0x60a17c                    ; 0060a418
    MOV EBP,0x60a19c                    ; 0060a41d
    MOV EAX,0x60a18c                    ; 0060a422
    MOV dword ptr [0x00684f14],EDX      ; 0060a427 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14
    MOV dword ptr [0x006853e4],EBX      ; 0060a42d | PTR_crt_sync.c_EnterCriticalSection_FUN_006853e4
    MOV dword ptr [0x006853e8],ECX      ; 0060a433 | PTR_crt_sync.c_ExitCriticalSection_FUN_006853e8
    MOV dword ptr [0x006853ec],ESI      ; 0060a439 | PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec
    MOV dword ptr [0x00684f00],EDI      ; 0060a43f | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00
    MOV dword ptr [0x00684f04],EBP      ; 0060a445 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f04
    MOV [0x00684f08],EAX                ; 0060a44b | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
    MOV EDX,0x60a1ac                    ; 0060a450
    MOV EBX,0x1                         ; 0060a455
    MOV ESI,0x60a1ec                    ; 0060a45a
    MOV EDI,0x60a388                    ; 0060a45f
    MOV dword ptr [0x00684f0c],EDX      ; 0060a464 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f0c
    CALL crt_sync.c_allocate_critical_section_FUN_00609f24 ; 0060a46a
        ;   XREF to: 00609f24 (UNCONDITIONAL_CALL)  ; LPCRITICAL_SECTION crt_sync.c_allocate_critical_section_FUN_00609f24()
    MOV ECX,0x60a1dc                    ; 0060a46f
    MOV EBP,dword ptr [0x03f9b22c]      ; 0060a474 | g_CurrentThreadTlsBlock
    MOV [0x03f9bfd0],EAX                ; 0060a47a | g_GlobalInitLock
    MOV dword ptr [0x03f9bfd4],EBX      ; 0060a47f | INT_03f9bfd4
    PUSH EBP                            ; 0060a485
    MOV EDX,dword ptr [EBP + 0xda]      ; 0060a486
    MOV dword ptr [0x00684f1c],ESI      ; 0060a48c | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c
    PUSH EDX                            ; 0060a492
    MOV dword ptr [0x00684f20],EDI      ; 0060a493 | PTR_crt_sync.c_CriticalSectionCleanup_FUN_00602434_00684f20
    MOV dword ptr [0x00684f18],ECX      ; 0060a499 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18
    CALL crt_tls.c_register_thread_data_FUN_0060cbd0 ; 0060a49f
        ;   XREF to: 0060cbd0 (UNCONDITIONAL_CALL)  ; BOOL crt_tls.c_register_thread_data_FUN_0060cbd0(void * tls_data, void * thread_param)
    ADD ESP,0x8                         ; 0060a4a4
    MOV EBX,dword ptr [0x03f9b22c]      ; 0060a4a7 | g_CurrentThreadTlsBlock
    PUSH EBX                            ; 0060a4ad
    MOV ECX,dword ptr [0x00684ee0]      ; 0060a4ae | g_TLSIndex
    PUSH ECX                            ; 0060a4b4
    MOV ESI,0x60a1fc                    ; 0060a4b5
    CALL dword ptr CS:[0x611658]        ; 0060a4ba | g_TlsSetValueFunc
    MOV dword ptr [0x00684ee4],ESI      ; 0060a4c1 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    POP EBP                             ; 0060a4c7
    POP EDI                             ; 0060a4c8
    POP ESI                             ; 0060a4c9
    POP EBX                             ; 0060a4ca
    RET                                 ; 0060a4cb

