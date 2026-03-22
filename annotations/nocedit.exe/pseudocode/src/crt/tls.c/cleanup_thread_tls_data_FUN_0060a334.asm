; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_tls_c_cleanup_thread_tls_data_FUN_0060a334(int shutdownMode)
;
; Parameters:
; int              Stack[0x4]:4   shutdownMode
;
; XREF[1]:
;   crt_tls.c_shutdown_tls_infrastructure_FUN_0060a388 at 0060a38a
;
; Referenced Globals:
;   CLOSE_HANDLE_FUNC* g_CloseHandleFunc = 00211c38
;   TLS_GET_VALUE_FUNC* g_TlsGetValueFunc = 0021225e
;   TLS_SET_VALUE_FUNC* g_TlsSetValueFunc = 0021226c
;   DWORD g_TLSIndex = 0xffffffff
;
; Called Functions:
;   CloseHandle
;   crt_tls.c_unregister_thread_data_FUN_0060cc3c
;   TlsGetValue
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a334
        ;   Label: crt_tls.c_cleanup_thread_tls_data_FUN_0060a334
    PUSH ESI                            ; 0060a335
    MOV EDX,dword ptr [0x00684ee0]      ; 0060a336 | g_TLSIndex
    CMP EDX,-0x1                        ; 0060a33c
    JZ 0x0060a385                       ; 0060a33f
        ;   XREF to: 0060a385 (CONDITIONAL_JUMP)  ; LAB_0060a385
    PUSH EDX                            ; 0060a341
    CALL dword ptr CS:[0x611654]        ; 0060a342 | g_TlsGetValueFunc
    TEST EAX,EAX                        ; 0060a349
    JZ 0x0060a385                       ; 0060a34b
        ;   XREF to: 0060a385 (CONDITIONAL_JUMP)  ; LAB_0060a385
    MOV ECX,dword ptr [EAX + 0xda]      ; 0060a34d
    PUSH ECX                            ; 0060a353
    MOV EBX,dword ptr [EAX + 0xde]      ; 0060a354
    CALL crt_tls.c_unregister_thread_data_FUN_0060cc3c ; 0060a35a
        ;   XREF to: 0060cc3c (UNCONDITIONAL_CALL)  ; void crt_tls.c_unregister_thread_data_FUN_0060cc3c(void * threadDataKey)
    ADD ESP,0x4                         ; 0060a35f
    PUSH 0x0                            ; 0060a362
    MOV ESI,dword ptr [0x00684ee0]      ; 0060a364 | g_TLSIndex
    PUSH ESI                            ; 0060a36a
    CALL dword ptr CS:[0x611658]        ; 0060a36b | g_TlsSetValueFunc
    TEST EBX,EBX                        ; 0060a372
    JZ 0x0060a385                       ; 0060a374
        ;   XREF to: 0060a385 (CONDITIONAL_JUMP)  ; LAB_0060a385
    CMP dword ptr [ESP + 0xc],0x0       ; 0060a376
    JZ 0x0060a385                       ; 0060a37b
        ;   XREF to: 0060a385 (CONDITIONAL_JUMP)  ; LAB_0060a385
    PUSH EBX                            ; 0060a37d
    CALL dword ptr CS:[0x611504]        ; 0060a37e | g_CloseHandleFunc
    POP ESI                             ; 0060a385
        ;   Label: LAB_0060a385
    POP EBX                             ; 0060a386
    RET                                 ; 0060a387

