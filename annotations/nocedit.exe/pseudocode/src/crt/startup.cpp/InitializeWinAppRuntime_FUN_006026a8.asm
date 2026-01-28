; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(void *pParam)
;
;
; XREF[1]:
;   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 at 00609eb1
;
; Referenced Globals:
;   GetModuleHandleA* g_GetModuleHandleAFunc = 00211f6e
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f24 = 00602458
;   undefined4 DAT_00684ff4
;
; Called Functions:
;   crt_exception.c_installExceptionHandler_FUN_0060aba8
;   crt_init.c_ProcessInitTermHandlers_FUN_0060ac30
;   crt_memory.c_GetMemoryBounds_FUN_0060a6a0
;   crt_startup.c_initialize_runtime_FUN_0060245c
;   crt_sync.c_CriticalSectionStub_FUN_00602458
;   crt_thread.c_GetTLS_FUN_0060242c
;   GetModuleHandleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006026a8
        ;   Label: crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8
    PUSH 0x0                            ; 006026a9
    CALL dword ptr CS:[0x6115b4]        ; 006026ab | g_GetModuleHandleAFunc
    PUSH EAX                            ; 006026b2
    MOV EDX,dword ptr [ESP + 0x10]      ; 006026b3
    PUSH EDX                            ; 006026b7
    PUSH 0x0                            ; 006026b8
    CALL crt_startup.c_initialize_runtime_FUN_0060245c ; 006026ba
        ;   XREF to: 0060245c (UNCONDITIONAL_CALL)  ; void crt_startup.c_initialize_runtime_FUN_0060245c(HMODULE hModule, void * pThreadParam, int unused)
    ADD ESP,0xc                         ; 006026bf
    PUSH 0x684ff4                       ; 006026c2 | DAT_00684ff4
    CALL dword ptr [0x00684ee4]         ; 006026c7 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    PUSH EAX                            ; 006026cd
    CALL crt_memory.c_GetMemoryBounds_FUN_0060a6a0 ; 006026ce
        ;   XREF to: 0060a6a0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_GetMemoryBounds_FUN_0060a6a0(ThreadData * pStackBound, uint * pHeapBound)
    ADD ESP,0x8                         ; 006026d3
    MOV EBX,dword ptr [ESP + 0x8]       ; 006026d6
    PUSH EBX                            ; 006026da
    CALL crt_exception.c_installExceptionHandler_FUN_0060aba8 ; 006026db
        ;   XREF to: 0060aba8 (UNCONDITIONAL_CALL)  ; void crt_exception.c_installExceptionHandler_FUN_0060aba8(ExceptionFrame * pExceptionFrame)
    ADD ESP,0x4                         ; 006026e0
    MOV EAX,0x21                        ; 006026e3
    CALL crt_init.c_ProcessInitTermHandlers_FUN_0060ac30 ; 006026e8
        ;   XREF to: 0060ac30 (UNCONDITIONAL_CALL)  ; void crt_init.c_ProcessInitTermHandlers_FUN_0060ac30(int max_priority)
    CALL dword ptr [0x00684f24]         ; 006026ed | PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f24
    MOV EAX,0xff                        ; 006026f3
    CALL crt_init.c_ProcessInitTermHandlers_FUN_0060ac30 ; 006026f8
        ;   XREF to: 0060ac30 (UNCONDITIONAL_CALL)  ; void crt_init.c_ProcessInitTermHandlers_FUN_0060ac30(int max_priority)
    POP EBX                             ; 006026fd
    RET                                 ; 006026fe

