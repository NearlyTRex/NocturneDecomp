; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_thread_c_InitializeThreadContext_FUN_0060ccf0(ThreadData *pThreadData)
;
; Parameters:
; ThreadData *     Stack[0x4]:4   pThreadData
;
; XREF[1]:
;   crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c at 0060a26d
;
; Referenced Globals:
;   GET_CURRENT_THREAD_ID_FUNC* g_GetCurrentThreadIdFunc = 00211e84
;
; Called Functions:
;   crt_memory.c___GetStackLimits_FUN_0060a6a0
;   GetCurrentThreadId
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ccf0
        ;   Label: crt_thread.c_InitializeThreadContext_FUN_0060ccf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060ccf1
    TEST EBX,EBX                        ; 0060ccf5
    JZ 0x0060cd18                       ; 0060ccf7
        ;   XREF to: 0060cd18 (CONDITIONAL_JUMP)  ; LAB_0060cd18
    PUSH 0x0                            ; 0060ccf9
    PUSH EBX                            ; 0060ccfb
    MOV dword ptr [EBX + 0xc],0x1       ; 0060ccfc
    CALL crt_memory.c___GetStackLimits_FUN_0060a6a0 ; 0060cd03
        ;   XREF to: 0060a6a0 (UNCONDITIONAL_CALL)  ; void crt_memory.c___GetStackLimits_FUN_0060a6a0(ThreadData * pStackBound, uint * pHeapBound)
    ADD ESP,0x8                         ; 0060cd08
    CALL dword ptr CS:[0x611584]        ; 0060cd0b | g_GetCurrentThreadIdFunc
    MOV dword ptr [EBX + 0xda],EAX      ; 0060cd12
    POP EBX                             ; 0060cd18
        ;   Label: LAB_0060cd18
    RET                                 ; 0060cd19

