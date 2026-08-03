; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister crt_startup_cpp_InitializeWinAppRuntime_FUN_00567458(void *pParam)
;
;
; XREF[1]:
;   crt_startup.cpp_WinMainBootstrap_FUN_0056df10 at 0056df51
;
; Referenced Globals:
;   void* PTR_GetModuleHandleA_0057552c = 00175dbc
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00567208_005c1afc = 00567208
;   undefined4 DAT_005c1cec
;
; Called Functions:
;   crt_exception.c_installExceptionHandler_FUN_0056eed8
;   crt_init.c_ProcessInitTermHandlers_FUN_0056ef60
;   crt_memory.c___GetStackLimits_FUN_0056e9d0
;   crt_startup.c_initialize_runtime_FUN_0056720c
;   crt_sync.c_CriticalSectionStub_FUN_00567208
;   crt_thread.c_GetTLS_FUN_005671dc
;   GetModuleHandleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567458
        ;   Label: crt_startup.cpp_InitializeWinAppRuntime_FUN_00567458
    PUSH 0x0                            ; 00567459
    CALL dword ptr CS:[0x57552c]        ; 0056745b | PTR_GetModuleHandleA_0057552c
    PUSH EAX                            ; 00567462
    MOV EDX,dword ptr [ESP + 0x10]      ; 00567463
    PUSH EDX                            ; 00567467
    PUSH 0x0                            ; 00567468
    CALL crt_startup.c_initialize_runtime_FUN_0056720c ; 0056746a
        ;   XREF to: 0056720c (UNCONDITIONAL_CALL)  ; void crt_startup.c_initialize_runtime_FUN_0056720c(HMODULE hModule, void * pThreadParam, int unused)
    ADD ESP,0xc                         ; 0056746f
    PUSH 0x5c1cec                       ; 00567472 | DAT_005c1cec
    CALL dword ptr [0x005c1abc]         ; 00567477 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
    PUSH EAX                            ; 0056747d
    CALL crt_memory.c___GetStackLimits_FUN_0056e9d0 ; 0056747e
        ;   XREF to: 0056e9d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c___GetStackLimits_FUN_0056e9d0(ThreadData * pStackBound, uint * pHeapBound)
    ADD ESP,0x8                         ; 00567483
    MOV EBX,dword ptr [ESP + 0x8]       ; 00567486
    PUSH EBX                            ; 0056748a
    CALL crt_exception.c_installExceptionHandler_FUN_0056eed8 ; 0056748b
        ;   XREF to: 0056eed8 (UNCONDITIONAL_CALL)  ; undefined1 crt_exception.c_installExceptionHandler_FUN_0056eed8()
    ADD ESP,0x4                         ; 00567490
    MOV EAX,0x21                        ; 00567493
    CALL crt_init.c_ProcessInitTermHandlers_FUN_0056ef60 ; 00567498
        ;   XREF to: 0056ef60 (UNCONDITIONAL_CALL)  ; void crt_init.c_ProcessInitTermHandlers_FUN_0056ef60(int max_priority)
    CALL dword ptr [0x005c1afc]         ; 0056749d | PTR_crt_sync.c_CriticalSectionStub_FUN_00567208_005c1afc
    MOV EAX,0xff                        ; 005674a3
    CALL crt_init.c_ProcessInitTermHandlers_FUN_0056ef60 ; 005674a8
        ;   XREF to: 0056ef60 (UNCONDITIONAL_CALL)  ; void crt_init.c_ProcessInitTermHandlers_FUN_0056ef60(int max_priority)
    POP EBX                             ; 005674ad
    RET                                 ; 005674ae

