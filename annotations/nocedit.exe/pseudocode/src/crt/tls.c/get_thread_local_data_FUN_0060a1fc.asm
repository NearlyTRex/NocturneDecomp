; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl LPVOID __cdecl crt_tls_c_get_thread_local_data_FUN_0060a1fc(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a4b5
;
; Referenced Globals:
;   GET_LAST_ERROR_FUNC* g_GetLastErrorFunc = 00211f22
;   SET_LAST_ERROR_FUNC* g_SetLastErrorFunc = 002121d6
;   TLS_GET_VALUE_FUNC* g_TlsGetValueFunc = 0021225e
;   DWORD g_TLSIndex = 0xffffffff
;
; Called Functions:
;   crt_tls.c_create_thread_local_data_FUN_0060cac0
;   crt_tls.c_getThreadLocalData_FUN_0060caf8
;   GetLastError
;   SetLastError
;   TlsGetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a1fc
        ;   Label: crt_tls.c_get_thread_local_data_FUN_0060a1fc
    PUSH ESI                            ; 0060a1fd
    CALL dword ptr CS:[0x6115a4]        ; 0060a1fe | g_GetLastErrorFunc
    MOV EDX,dword ptr [0x00684ee0]      ; 0060a205 | g_TLSIndex
    PUSH EDX                            ; 0060a20b
    MOV ESI,EAX                         ; 0060a20c
    CALL dword ptr CS:[0x611654]        ; 0060a20e | g_TlsGetValueFunc
    MOV EBX,EAX                         ; 0060a215
    TEST EAX,EAX                        ; 0060a217
    JNZ 0x0060a222                      ; 0060a219
        ;   XREF to: 0060a222 (CONDITIONAL_JUMP)  ; LAB_0060a222
    CALL crt_tls.c_create_thread_local_data_FUN_0060cac0 ; 0060a21b
        ;   XREF to: 0060cac0 (UNCONDITIONAL_CALL)  ; LPVOID crt_tls.c_create_thread_local_data_FUN_0060cac0()
    JMP 0x0060a22d                      ; 0060a220
        ;   XREF to: 0060a22d (UNCONDITIONAL_JUMP)  ; LAB_0060a22d
    CMP byte ptr [EAX + 0x53],0x0       ; 0060a222
        ;   Label: LAB_0060a222
    JZ 0x0060a22f                       ; 0060a226
        ;   XREF to: 0060a22f (CONDITIONAL_JUMP)  ; LAB_0060a22f
    CALL crt_tls.c_getThreadLocalData_FUN_0060caf8 ; 0060a228
        ;   XREF to: 0060caf8 (UNCONDITIONAL_CALL)  ; void * crt_tls.c_getThreadLocalData_FUN_0060caf8()
    MOV EBX,EAX                         ; 0060a22d
        ;   Label: LAB_0060a22d
    PUSH ESI                            ; 0060a22f
        ;   Label: LAB_0060a22f
    CALL dword ptr CS:[0x611634]        ; 0060a230 | g_SetLastErrorFunc
    MOV EAX,EBX                         ; 0060a237
    POP ESI                             ; 0060a239
    POP EBX                             ; 0060a23a
    RET                                 ; 0060a23b

