; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPVOID __watcallRegister crt_tls_c_create_thread_local_data_FUN_0060cac0(void)
;
;
; XREF[1]:
;   crt_tls.c_get_thread_local_data_FUN_0060a1fc at 0060a21b
;
; Referenced Globals:
;   TLS_GET_VALUE_FUNC* g_TlsGetValueFunc = 0021225e
;   TerminatedCString s_Thread_has_no_thread_spe_00659620
;   DWORD g_TLSIndex = 0xffffffff
;
; Called Functions:
;   crt_startup.c_HandleRuntimeError_FUN_00606660
;   crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
;   TlsGetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060cac0
        ;   Label: crt_tls.c_create_thread_local_data_FUN_0060cac0
    XOR EBX,EBX                         ; 0060cac1
    PUSH EBX                            ; 0060cac3
    CALL crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8 ; 0060cac4
        ;   XREF to: 0060a2d8 (UNCONDITIONAL_CALL)  ; BOOL crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8(void * init_param)
    ADD ESP,0x4                         ; 0060cac9
    TEST EAX,EAX                        ; 0060cacc
    JZ 0x0060cae0                       ; 0060cace
        ;   XREF to: 0060cae0 (CONDITIONAL_JUMP)  ; LAB_0060cae0
    MOV EDX,dword ptr [0x00684ee0]      ; 0060cad0 | g_TLSIndex
    PUSH EDX                            ; 0060cad6
    CALL dword ptr CS:[0x611654]        ; 0060cad7 | g_TlsGetValueFunc
    MOV EBX,EAX                         ; 0060cade
    TEST EBX,EBX                        ; 0060cae0
        ;   Label: LAB_0060cae0
    JNZ 0x0060caf3                      ; 0060cae2
        ;   XREF to: 0060caf3 (CONDITIONAL_JUMP)  ; LAB_0060caf3
    PUSH 0x1                            ; 0060cae4
    PUSH 0x659620                       ; 0060cae6 | = "Thread has no thread-specific data\r\n"
    CALL crt_startup.c_HandleRuntimeError_FUN_00606660 ; 0060caeb
        ;   XREF to: 00606660 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)
    ADD ESP,0x8                         ; 0060caf0
    MOV EAX,EBX                         ; 0060caf3
        ;   Label: LAB_0060caf3
    POP EBX                             ; 0060caf5
    RET                                 ; 0060caf6

