; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_startup_cpp_GetOrCreateThreadData_FUN_0060a23c(void *pThreadData)
;
; Parameters:
; void *           Stack[0x8]:4   pThreadData
;
; XREF[2]:
;   crt_startup.c_initialize_runtime_FUN_0060245c at 0060246f
;   crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8 at 0060a2ed
;
; Referenced Globals:
;   DWORD g_RuntimeBufferSize = 0xf4
;
; Called Functions:
;   crt_memory.c_calloc_FUN_0060ca90
;   crt_thread.c_InitializeThreadContext_FUN_0060ccf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a23c
        ;   Label: crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060a23d
    TEST EBX,EBX                        ; 0060a241
    JNZ 0x0060a26c                      ; 0060a243
        ;   XREF to: 0060a26c (CONDITIONAL_JUMP)  ; LAB_0060a26c
    MOV EDX,dword ptr [0x006854f8]      ; 0060a245 | g_RuntimeBufferSize
    PUSH EDX                            ; 0060a24b
    PUSH 0x1                            ; 0060a24c
    CALL crt_memory.c_calloc_FUN_0060ca90 ; 0060a24e
        ;   XREF to: 0060ca90 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_calloc_FUN_0060ca90(ulong count, ulong size)
    ADD ESP,0x8                         ; 0060a253
    MOV EBX,EAX                         ; 0060a256
    TEST EAX,EAX                        ; 0060a258
    JZ 0x0060a26c                       ; 0060a25a
        ;   XREF to: 0060a26c (CONDITIONAL_JUMP)  ; LAB_0060a26c
    MOV EDX,dword ptr [0x006854f8]      ; 0060a25c | g_RuntimeBufferSize
    MOV byte ptr [EAX + 0x52],0x1       ; 0060a262
    MOV dword ptr [EAX + 0xf0],EDX      ; 0060a266
    PUSH EBX                            ; 0060a26c
        ;   Label: LAB_0060a26c
    CALL crt_thread.c_InitializeThreadContext_FUN_0060ccf0 ; 0060a26d
        ;   XREF to: 0060ccf0 (UNCONDITIONAL_CALL)  ; void crt_thread.c_InitializeThreadContext_FUN_0060ccf0(ThreadData * pThreadData)
    ADD ESP,0x4                         ; 0060a272
    MOV EAX,EBX                         ; 0060a275
    POP EBX                             ; 0060a277
    RET                                 ; 0060a278

