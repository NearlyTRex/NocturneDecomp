; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl HANDLE crt_thread.c_create_thread_with_sync_FUN_0060f960(LPVOID thread_param, SIZE_T stack_size_hint, LPVOID sync_param, HANDLE * out_thread_handle)
;
; Parameters:
; typedef LPVOID void * Stack[0x4]:4   thread_param
; typedef SIZE_T ULONG_PTR Stack[0x8]:4   stack_size_hint
; typedef LPVOID void * Stack[0xc]:4   sync_param
; HANDLE *         Stack[0x10]:4   out_thread_handle
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
;
; Referenced Globals:
;   CloseHandle* CloseHandle = 00211c38
;   CreateEventA* PTR_CreateEventA_0061150c = 00211c5a
;   CreateThread* CreateThread = 00211c9a
;   GetCurrentThreadId* PTR_GetCurrentThreadId_00611584 = 00211e84
;   GetCurrentThread* PTR_GetCurrentThread_00611588 = 00211e9a
;   WaitForSingleObject* WaitForSingleObject = 002122c4
;   TerminatedCString s_bgnthd_00659784
;   undefined4 DAT_0065978c
;   DWORD g_TLSIndex = 0xffffffff
;
; Called Functions:
;   CloseHandle
;   CreateEventA
;   CreateThread
;   crt_stdio.c_IntegerToString_FUN_00607d18
;   crt_tls.c_allocate_tls_index_FUN_0060a27c
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4
;   GetCurrentThread
;   GetCurrentThreadId
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060f960
        ;   Label: crt_thread.c_create_thread_with_sync_FUN_0060f960
    PUSH ESI                            ; 0060f961
    PUSH EDI                            ; 0060f962
    PUSH ES                             ; 0060f963
    PUSH EBP                            ; 0060f964
    SUB ESP,0x38                        ; 0060f965
    MOV EBX,dword ptr [ESP + 0x54]      ; 0060f968
    CMP dword ptr [0x00684ee0],-0x1     ; 0060f96c | DWORD g_TLSIndex
    JNZ 0x0060f987                      ; 0060f973 | LAB_0060f987
        ;   XREF to: 0060f987 (CONDITIONAL_JUMP)
    CALL crt_tls.c_allocate_tls_index_FUN_0060a27c ; 0060f975 | BOOL crt_tls.c_allocate_tls_index_FUN_0060a27c()
        ;   XREF to: 0060a27c (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 0060f97a
    JZ 0x0060fa4c                       ; 0060f97c | LAB_0060fa4c
        ;   XREF to: 0060fa4c (CONDITIONAL_JUMP)
    CALL crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 ; 0060f982 | void crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4()
        ;   XREF to: 0060a3b4 (UNCONDITIONAL_CALL)
    LEA EAX,[EBX + 0xfff]               ; 0060f987
        ;   Label: LAB_0060f987
    XOR AL,AL                           ; 0060f98d
    AND AH,0xf0                         ; 0060f98f
    MOV EBX,EAX                         ; 0060f992
    MOV EAX,dword ptr [ESP + 0x50]      ; 0060f994
    MOV dword ptr [ESP + 0x20],EAX      ; 0060f998
    MOV EAX,dword ptr [ESP + 0x58]      ; 0060f99c
    MOV EDI,ESP                         ; 0060f9a0
    MOV dword ptr [ESP + 0x24],EAX      ; 0060f9a2
    CALL dword ptr CS:[0x611588]        ; 0060f9a6 | GetCurrentThread * PTR_GetCurrentThread_00611588
    PUSH 0x10                           ; 0060f9ad
    MOV dword ptr [ESP + 0x2c],EAX      ; 0060f9af
    MOV AX,DS                           ; 0060f9b3
    XOR ECX,ECX                         ; 0060f9b5
    MOV ES,AX                           ; 0060f9b7
    LEA EAX,[ESP + 0xc]                 ; 0060f9b9
    MOV ESI,0x659784                    ; 0060f9bd | = "__bgnthd" | s_bgnthd_00659784 = __bgnthd
    MOV dword ptr [ESP + 0x34],ECX      ; 0060f9c2
    PUSH EAX                            ; 0060f9c6
    MOVSD ES:EDI,ESI                    ; 0060f9c7 | = "__bgnthd" | s_bgnthd_00659784 = __bgnthd
    MOVSD ES:EDI,ESI                    ; 0060f9c8 | DAT_00659788
    MOVSB ES:EDI,ESI                    ; 0060f9c9 | DAT_0065978c
    CALL dword ptr CS:[0x611584]        ; 0060f9ca | GetCurrentThreadId * PTR_GetCurrentThreadId_00611584
    PUSH EAX                            ; 0060f9d1
    CALL crt_stdio.c_IntegerToString_FUN_00607d18 ; 0060f9d2 | char * crt_stdio.c_IntegerToString_FUN_00607d18(int value, char * buffer, int base)
        ;   XREF to: 00607d18 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060f9d7
    MOV EAX,ESP                         ; 0060f9da
    PUSH EAX                            ; 0060f9dc
    PUSH 0x0                            ; 0060f9dd
    PUSH 0x0                            ; 0060f9df
    PUSH 0x0                            ; 0060f9e1
    CALL dword ptr CS:[0x61150c]        ; 0060f9e3 | CreateEventA * PTR_CreateEventA_0061150c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0060f9ea
    LEA EAX,[ESP + 0x34]                ; 0060f9ee
    PUSH EAX                            ; 0060f9f2
    PUSH 0x0                            ; 0060f9f3
    LEA EAX,[ESP + 0x28]                ; 0060f9f5
    PUSH EAX                            ; 0060f9f9
    PUSH 0x60f8c0                       ; 0060f9fa
    PUSH EBX                            ; 0060f9ff
    PUSH 0x0                            ; 0060fa00
    CALL dword ptr CS:[0x61151c]        ; 0060fa02 | CreateThread * CreateThread
    MOV EBX,EAX                         ; 0060fa09
    MOV ESI,EAX                         ; 0060fa0b
    TEST EAX,EAX                        ; 0060fa0d
    JNZ 0x0060fa1b                      ; 0060fa0f | LAB_0060fa1b
        ;   XREF to: 0060fa1b (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x34],0xffffffff ; 0060fa11
    JMP 0x0060fa3e                      ; 0060fa19 | LAB_0060fa3e
        ;   XREF to: 0060fa3e (UNCONDITIONAL_JUMP)
    PUSH -0x1                           ; 0060fa1b
        ;   Label: LAB_0060fa1b
    MOV EDI,dword ptr [ESP + 0x30]      ; 0060fa1d
    PUSH EDI                            ; 0060fa21
    CALL dword ptr CS:[0x61166c]        ; 0060fa22 | WaitForSingleObject * WaitForSingleObject
    MOV EBP,dword ptr [ESP + 0x30]      ; 0060fa29
    TEST EBP,EBP                        ; 0060fa2d
    JZ 0x0060fa36                       ; 0060fa2f | LAB_0060fa36
        ;   XREF to: 0060fa36 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP],EBX             ; 0060fa31
    JMP 0x0060fa3e                      ; 0060fa34 | LAB_0060fa3e
        ;   XREF to: 0060fa3e (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 0060fa36
        ;   Label: LAB_0060fa36
    CALL dword ptr CS:[0x611504]        ; 0060fa37 | CloseHandle * CloseHandle
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0060fa3e
        ;   Label: LAB_0060fa3e
    PUSH EDX                            ; 0060fa42
    CALL dword ptr CS:[0x611504]        ; 0060fa43 | CloseHandle * CloseHandle
    MOV EAX,ESI                         ; 0060fa4a
    ADD ESP,0x38                        ; 0060fa4c
        ;   Label: LAB_0060fa4c
    POP EBP                             ; 0060fa4f
    POP ES                              ; 0060fa50
    POP EDI                             ; 0060fa51
    POP ESI                             ; 0060fa52
    POP EBX                             ; 0060fa53
    RET                                 ; 0060fa54

