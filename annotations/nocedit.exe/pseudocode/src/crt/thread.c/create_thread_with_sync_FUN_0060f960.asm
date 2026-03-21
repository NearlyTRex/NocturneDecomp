; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE __cdecl crt_thread_c_create_thread_with_sync_FUN_0060f960(LPVOID thread_param,SIZE_T stack_size_hint,LPVOID sync_param,HANDLE *out_thread_handle)
;
; Parameters:
; LPVOID           Stack[0x4]:4   thread_param
; SIZE_T           Stack[0x8]:4   stack_size_hint
; LPVOID           Stack[0xc]:4   sync_param
; HANDLE *         Stack[0x10]:4   out_thread_handle
; Local Variables:
; char[4048]       Stack[-0x1034]:4048  acStackY_1034
; char             Stack[-0x4c]:1  cStack_4c
; char             Stack[-0x4b]:1  cStack_4b
; char             Stack[-0x4a]:1  cStack_4a
; char             Stack[-0x49]:1  cStack_49
; undefined4       Stack[-0x48]:4  uStack_48
; char[24]         Stack[-0x44]:24  acStack_44
; LPVOID           Stack[-0x2c]:4  local_2c
; LPVOID           Stack[-0x28]:4  local_28
; HANDLE           Stack[-0x24]:4  pvStack_24
; HANDLE           Stack[-0x20]:4  pvStack_20
; undefined4 *     Stack[-0x1c]:4  puStack_1c
; DWORD            Stack[-0x18]:4  DStack_18
;
; Referenced Globals:
;   CLOSE_HANDLE_FUNC* g_CloseHandleFunc = 00211c38
;   CREATE_EVENT_A_FUNC* g_CreateEventAFunc = 00211c5a
;   CREATE_THREAD_FUNC* g_CreateThreadFunc = 00211c9a
;   GET_CURRENT_THREAD_ID_FUNC* g_GetCurrentThreadIdFunc = 00211e84
;   GET_CURRENT_THREAD_FUNC* g_GetCurrentThreadFunc = 00211e9a
;   WAIT_FOR_SINGLE_OBJECT_FUNC* g_WaitForSingleObjectFunc = 002122c4
;   TerminatedCString s_bgnthd_00659784
;   undefined4 DAT_00659788
;   undefined4 DAT_0065978c
;   DWORD g_TLSIndex = 0xffffffff
;
; Called Functions:
;   CloseHandle
;   CreateEventA
;   crt_stdio.c_IntegerToString_FUN_00607d18
;   crt_tls.c_allocate_tls_index_FUN_0060a27c
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4
;   GetCurrentThread
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
    CMP dword ptr [0x00684ee0],-0x1     ; 0060f96c | g_TLSIndex
    JNZ 0x0060f987                      ; 0060f973
        ;   XREF to: 0060f987 (CONDITIONAL_JUMP)  ; LAB_0060f987
    CALL crt_tls.c_allocate_tls_index_FUN_0060a27c ; 0060f975
        ;   XREF to: 0060a27c (UNCONDITIONAL_CALL)  ; BOOL crt_tls.c_allocate_tls_index_FUN_0060a27c()
    TEST EAX,EAX                        ; 0060f97a
    JZ 0x0060fa4c                       ; 0060f97c
        ;   XREF to: 0060fa4c (CONDITIONAL_JUMP)  ; LAB_0060fa4c
    CALL crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 ; 0060f982
        ;   XREF to: 0060a3b4 (UNCONDITIONAL_CALL)  ; void crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4()
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
    CALL dword ptr CS:[0x611588]        ; 0060f9a6 | g_GetCurrentThreadFunc
    PUSH 0x10                           ; 0060f9ad
    MOV dword ptr [ESP + 0x2c],EAX      ; 0060f9af
    MOV AX,DS                           ; 0060f9b3
    XOR ECX,ECX                         ; 0060f9b5
    MOV ES,AX                           ; 0060f9b7
    LEA EAX,[ESP + 0xc]                 ; 0060f9b9
    MOV ESI,0x659784                    ; 0060f9bd | = "__bgnthd"
    MOV dword ptr [ESP + 0x34],ECX      ; 0060f9c2
    PUSH EAX                            ; 0060f9c6
    MOVSD ES:EDI,ESI                    ; 0060f9c7 | = "__bgnthd"
    MOVSD ES:EDI,ESI                    ; 0060f9c8 | DAT_00659788
    MOVSB ES:EDI,ESI                    ; 0060f9c9 | DAT_0065978c
    CALL dword ptr CS:[0x611584]        ; 0060f9ca | g_GetCurrentThreadIdFunc
    PUSH EAX                            ; 0060f9d1
    CALL crt_stdio.c_IntegerToString_FUN_00607d18 ; 0060f9d2
        ;   XREF to: 00607d18 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_IntegerToString_FUN_00607d18(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 0060f9d7
    MOV EAX,ESP                         ; 0060f9da
    PUSH EAX                            ; 0060f9dc
    PUSH 0x0                            ; 0060f9dd
    PUSH 0x0                            ; 0060f9df
    PUSH 0x0                            ; 0060f9e1
    CALL dword ptr CS:[0x61150c]        ; 0060f9e3 | g_CreateEventAFunc
    MOV dword ptr [ESP + 0x2c],EAX      ; 0060f9ea
    LEA EAX,[ESP + 0x34]                ; 0060f9ee
    PUSH EAX                            ; 0060f9f2
    PUSH 0x0                            ; 0060f9f3
    LEA EAX,[ESP + 0x28]                ; 0060f9f5
    PUSH EAX                            ; 0060f9f9
    PUSH 0x60f8c0                       ; 0060f9fa
    PUSH EBX                            ; 0060f9ff
    PUSH 0x0                            ; 0060fa00
    CALL dword ptr CS:[0x61151c]        ; 0060fa02 | g_CreateThreadFunc
    MOV EBX,EAX                         ; 0060fa09
    MOV ESI,EAX                         ; 0060fa0b
    TEST EAX,EAX                        ; 0060fa0d
    JNZ 0x0060fa1b                      ; 0060fa0f
        ;   XREF to: 0060fa1b (CONDITIONAL_JUMP)  ; LAB_0060fa1b
    MOV dword ptr [ESP + 0x34],0xffffffff ; 0060fa11
    JMP 0x0060fa3e                      ; 0060fa19
        ;   XREF to: 0060fa3e (UNCONDITIONAL_JUMP)  ; LAB_0060fa3e
    PUSH -0x1                           ; 0060fa1b
        ;   Label: LAB_0060fa1b
    MOV EDI,dword ptr [ESP + 0x30]      ; 0060fa1d
    PUSH EDI                            ; 0060fa21
    CALL dword ptr CS:[0x61166c]        ; 0060fa22 | g_WaitForSingleObjectFunc
    MOV EBP,dword ptr [ESP + 0x30]      ; 0060fa29
    TEST EBP,EBP                        ; 0060fa2d
    JZ 0x0060fa36                       ; 0060fa2f
        ;   XREF to: 0060fa36 (CONDITIONAL_JUMP)  ; LAB_0060fa36
    MOV dword ptr [EBP],EBX             ; 0060fa31
    JMP 0x0060fa3e                      ; 0060fa34
        ;   XREF to: 0060fa3e (UNCONDITIONAL_JUMP)  ; LAB_0060fa3e
    PUSH EBX                            ; 0060fa36
        ;   Label: LAB_0060fa36
    CALL dword ptr CS:[0x611504]        ; 0060fa37 | g_CloseHandleFunc
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0060fa3e
        ;   Label: LAB_0060fa3e
    PUSH EDX                            ; 0060fa42
    CALL dword ptr CS:[0x611504]        ; 0060fa43 | g_CloseHandleFunc
    MOV EAX,ESI                         ; 0060fa4a
    ADD ESP,0x38                        ; 0060fa4c
        ;   Label: LAB_0060fa4c
    POP EBP                             ; 0060fa4f
    POP ES                              ; 0060fa50
    POP EDI                             ; 0060fa51
    POP ESI                             ; 0060fa52
    POP EBX                             ; 0060fa53
    RET                                 ; 0060fa54

