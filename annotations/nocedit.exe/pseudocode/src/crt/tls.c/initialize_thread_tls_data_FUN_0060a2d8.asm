; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl BOOL __cdecl crt_tls_c_initialize_thread_tls_data_FUN_0060a2d8(void *init_param)
;
; Parameters:
; void *           Stack[0x4]:4   init_param
;
; XREF[2]:
;   crt_thread.c_threadStartupWrapper_FUN_0060f8c0 at 0060f90e
;   crt_tls.c_create_thread_local_data_FUN_0060cac0 at 0060cac4
;
; Referenced Globals:
;   TLS_SET_VALUE_FUNC* g_TlsSetValueFunc = 0021226c
;   DWORD g_TLSIndex = 0xffffffff
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c
;   crt_tls.c_register_thread_data_FUN_0060cbd0
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a2d8
        ;   Label: crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
    PUSH ESI                            ; 0060a2d9
    CMP dword ptr [0x00684ee0],-0x1     ; 0060a2da | g_TLSIndex
    JNZ 0x0060a2e8                      ; 0060a2e1
        ;   XREF to: 0060a2e8 (CONDITIONAL_JUMP)  ; LAB_0060a2e8
    XOR EAX,EAX                         ; 0060a2e3
    POP ESI                             ; 0060a2e5
    POP EBX                             ; 0060a2e6
    RET                                 ; 0060a2e7
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060a2e8
        ;   Label: LAB_0060a2e8
    PUSH EBX                            ; 0060a2ec
    CALL crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c ; 0060a2ed
        ;   XREF to: 0060a23c (UNCONDITIONAL_CALL)  ; void * crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c(void * pThreadData)
    MOV EBX,EAX                         ; 0060a2f2
    ADD ESP,0x4                         ; 0060a2f4
    TEST EAX,EAX                        ; 0060a2f7
    JZ 0x0060a331                       ; 0060a2f9
        ;   XREF to: 0060a331 (CONDITIONAL_JUMP)  ; LAB_0060a331
    PUSH EAX                            ; 0060a2fb
    MOV ECX,dword ptr [EAX + 0xda]      ; 0060a2fc
    PUSH ECX                            ; 0060a302
    CALL crt_tls.c_register_thread_data_FUN_0060cbd0 ; 0060a303
        ;   XREF to: 0060cbd0 (UNCONDITIONAL_CALL)  ; BOOL crt_tls.c_register_thread_data_FUN_0060cbd0(void * tls_data, void * thread_param)
    ADD ESP,0x8                         ; 0060a308
    TEST EAX,EAX                        ; 0060a30b
    JNZ 0x0060a31d                      ; 0060a30d
        ;   XREF to: 0060a31d (CONDITIONAL_JUMP)  ; LAB_0060a31d
    PUSH EBX                            ; 0060a30f
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060a310
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060a315
    XOR EAX,EAX                         ; 0060a318
    POP ESI                             ; 0060a31a
    POP EBX                             ; 0060a31b
    RET                                 ; 0060a31c
    PUSH EBX                            ; 0060a31d
        ;   Label: LAB_0060a31d
    MOV ESI,dword ptr [0x00684ee0]      ; 0060a31e | g_TLSIndex
    PUSH ESI                            ; 0060a324
    CALL dword ptr CS:[0x611658]        ; 0060a325 | g_TlsSetValueFunc
    MOV EAX,0x1                         ; 0060a32c
    POP ESI                             ; 0060a331
        ;   Label: LAB_0060a331
    POP EBX                             ; 0060a332
    RET                                 ; 0060a333

