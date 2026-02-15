; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878(void)
;
;
; XREF[1]:
;   crt_thread.c_threadStartupWrapper_FUN_0060f8c0 at 0060f94c
;
; Referenced Globals:
;   void* PTR_crt_thread.c_exit_thread_FUN_0060fa58_00685598 = 0060fa58
;
; Called Functions:
;   crt_thread.c_exit_thread_FUN_0060fa58
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00685598]         ; 0060e878 | PTR_crt_thread.c_exit_thread_FUN_0060fa58_00685598
        ;   Label: crt_unknown.c_SomethingThatCallsExitThreadAfterCommunicate_FUN_0060e878
    RET                                 ; 0060e87e

