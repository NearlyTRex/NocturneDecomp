; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl LPVOID crt_tls.c_get_thread_local_data_FUN_0060a1fc(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a4b5
;
; Referenced Globals:
;   GetLastError* GetLastError = 00211f22
;   SetLastError* PTR_SetLastError_00611634 = 002121d6
;   TlsGetValue* PTR_TlsGetValue_00611654 = 0021225e
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
    CALL dword ptr CS:[0x6115a4]        ; 0060a1fe | GetLastError * GetLastError
    MOV EDX,dword ptr [0x00684ee0]      ; 0060a205 | DWORD g_TLSIndex
    PUSH EDX                            ; 0060a20b
    MOV ESI,EAX                         ; 0060a20c
    CALL dword ptr CS:[0x611654]        ; 0060a20e | TlsGetValue * PTR_TlsGetValue_00611654
    MOV EBX,EAX                         ; 0060a215
    TEST EAX,EAX                        ; 0060a217
    JNZ 0x0060a222                      ; 0060a219 | LAB_0060a222
        ;   XREF to: 0060a222 (CONDITIONAL_JUMP)
    CALL crt_tls.c_create_thread_local_data_FUN_0060cac0 ; 0060a21b | LPVOID crt_tls.c_create_thread_local_data_FUN_0060cac0()
        ;   XREF to: 0060cac0 (UNCONDITIONAL_CALL)
    JMP 0x0060a22d                      ; 0060a220 | LAB_0060a22d
        ;   XREF to: 0060a22d (UNCONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x53],0x0       ; 0060a222
        ;   Label: LAB_0060a222
    JZ 0x0060a22f                       ; 0060a226 | LAB_0060a22f
        ;   XREF to: 0060a22f (CONDITIONAL_JUMP)
    CALL crt_tls.c_getThreadLocalData_FUN_0060caf8 ; 0060a228 | void * crt_tls.c_getThreadLocalData_FUN_0060caf8()
        ;   XREF to: 0060caf8 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 0060a22d
        ;   Label: LAB_0060a22d
    PUSH ESI                            ; 0060a22f
        ;   Label: LAB_0060a22f
    CALL dword ptr CS:[0x611634]        ; 0060a230 | SetLastError * PTR_SetLastError_00611634
    MOV EAX,EBX                         ; 0060a237
    POP ESI                             ; 0060a239
    POP EBX                             ; 0060a23a
    RET                                 ; 0060a23b

