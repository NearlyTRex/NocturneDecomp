; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_thread.c_threadStartupWrapper_FUN_0060f8c0(ThreadStartupInfo * info)
;
; Parameters:
; ThreadStartupInfo * Stack[0x4]:4   info
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   crt_thread.c_create_thread_with_sync_FUN_0060f960 at 0060f9fa
;
; Referenced Globals:
;   SetEvent* PTR_SetEvent_00611624 = 00212194
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f24 = 00602458
;   DWORD g_RuntimeBufferSize = 0xf4
;   int g_EmergencyExitFlag
;
; Called Functions:
;   crt_exception.c_installExceptionHandler_FUN_0060aba8
;   crt_memory.c_memset_FUN_005fde40
;   crt_sync.c_CriticalSectionStub_FUN_00602458
;   crt_thread.c_GetTLS_FUN_0060242c
;   crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
;   crt_unknown.c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878
;   SetEvent
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060f8c0
        ;   Label: crt_thread.c_threadStartupWrapper_FUN_0060f8c0
    PUSH ESI                            ; 0060f8c1
    PUSH EDI                            ; 0060f8c2
    PUSH ES                             ; 0060f8c3
    PUSH FS                             ; 0060f8c4
    PUSH GS                             ; 0060f8c6
    PUSH EBP                            ; 0060f8c8
    MOV EBP,ESP                         ; 0060f8c9
    SUB ESP,0xc                         ; 0060f8cb
    MOV ESI,dword ptr [EBP + 0x20]      ; 0060f8ce
    MOV EDX,dword ptr [0x03f9b220]      ; 0060f8d1 | int g_EmergencyExitFlag
    MOV EAX,dword ptr [ESI]             ; 0060f8d7
    MOV EDI,dword ptr [ESI + 0x4]       ; 0060f8d9
    MOV dword ptr [EBP + -0x4],EAX      ; 0060f8dc
    TEST EDX,EDX                        ; 0060f8df
    JNZ 0x0060f91a                      ; 0060f8e1 | LAB_0060f91a
        ;   XREF to: 0060f91a (CONDITIONAL_JUMP)
    MOV EAX,[0x006854f8]                ; 0060f8e3 | DWORD g_RuntimeBufferSize
    ADD EAX,0x3                         ; 0060f8e8
    AND AL,0xfc                         ; 0060f8eb
    SUB ESP,EAX                         ; 0060f8ed
    MOV EBX,ESP                         ; 0060f8ef
    MOV ECX,dword ptr [0x006854f8]      ; 0060f8f1 | DWORD g_RuntimeBufferSize
    PUSH ECX                            ; 0060f8f7
    PUSH EDX                            ; 0060f8f8
    PUSH EBX                            ; 0060f8f9
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060f8fa | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060f8ff
    MOV EAX,[0x006854f8]                ; 0060f902 | DWORD g_RuntimeBufferSize
    PUSH EBX                            ; 0060f907
    MOV dword ptr [EBX + 0xf0],EAX      ; 0060f908
    CALL crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8 ; 0060f90e | BOOL crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8(void * init_param)
        ;   XREF to: 0060a2d8 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060f913
    TEST EAX,EAX                        ; 0060f916
    JZ 0x0060f951                       ; 0060f918 | LAB_0060f951
        ;   XREF to: 0060f951 (CONDITIONAL_JUMP)
    CALL dword ptr [0x00684ee4]         ; 0060f91a | GET_TLS_FUNC * PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: LAB_0060f91a
    ADD EAX,0xde                        ; 0060f920
    MOV dword ptr [ESI + 0x10],EAX      ; 0060f925
    MOV EAX,dword ptr [ESI + 0xc]       ; 0060f928
    PUSH EAX                            ; 0060f92b
    CALL dword ptr CS:[0x611624]        ; 0060f92c | SetEvent * PTR_SetEvent_00611624
    LEA EAX,[EBP + -0xc]                ; 0060f933
    PUSH EAX                            ; 0060f936
    CALL crt_exception.c_installExceptionHandler_FUN_0060aba8 ; 0060f937 | void crt_exception.c_installExceptionHandler_FUN_0060aba8(ExceptionFrame * pExceptionFrame)
        ;   XREF to: 0060aba8 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060f93c
    CALL dword ptr [0x00684f24]         ; 0060f93f | void * PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f24
    PUSH EDI                            ; 0060f945
    CALL dword ptr [EBP + -0x4]         ; 0060f946
    ADD ESP,0x4                         ; 0060f949
    CALL crt_unknown.c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878 ; 0060f94c | undefined crt_unknown.c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878()
        ;   XREF to: 0060e878 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 0060f951
        ;   Label: LAB_0060f951
    POP EBP                             ; 0060f953
    POP GS                              ; 0060f954
    POP FS                              ; 0060f956
    POP ES                              ; 0060f958
    POP EDI                             ; 0060f959
    POP ESI                             ; 0060f95a
    POP EBX                             ; 0060f95b
    RET                                 ; 0060f95c

