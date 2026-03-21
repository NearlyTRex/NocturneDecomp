; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_thread_c_exit_thread_FUN_0060fa58(void)
;
;
; Referenced Globals:
;   EXIT_THREAD_FUNC* g_ExitThreadFunc = 00211d20
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f28 = 00602458
;   int g_EmergencyExitFlag
;
; Called Functions:
;   crt_exception.c_RemoveExceptionHandler_FUN_0060abf4
;   crt_sync.c_CriticalSectionStub_FUN_00602458
;   crt_tls.c_cleanup_thread_tls_data_FUN_0060a334
;   ExitThread
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00684f28]         ; 0060fa58 | PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f28
        ;   Label: crt_thread.c_exit_thread_FUN_0060fa58
    CALL crt_exception.c_RemoveExceptionHandler_FUN_0060abf4 ; 0060fa5e
        ;   XREF to: 0060abf4 (UNCONDITIONAL_CALL)  ; void crt_exception.c_RemoveExceptionHandler_FUN_0060abf4()
    CMP dword ptr [0x03f9b220],0x0      ; 0060fa63 | g_EmergencyExitFlag
    JNZ 0x0060fa76                      ; 0060fa6a
        ;   XREF to: 0060fa76 (CONDITIONAL_JUMP)  ; LAB_0060fa76
    PUSH 0x1                            ; 0060fa6c
    CALL crt_tls.c_cleanup_thread_tls_data_FUN_0060a334 ; 0060fa6e
        ;   XREF to: 0060a334 (UNCONDITIONAL_CALL)  ; void crt_tls.c_cleanup_thread_tls_data_FUN_0060a334(int shutdownMode)
    ADD ESP,0x4                         ; 0060fa73
    PUSH 0x0                            ; 0060fa76
        ;   Label: LAB_0060fa76
    CALL dword ptr CS:[0x611538]        ; 0060fa78 | g_ExitThreadFunc

