; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574b7f(void)
;
;
; Referenced Globals:
;   void* PTR_EnterCriticalSection_005754b0 = 00175b72
;   void* PTR_GetCurrentThreadId_00575500 = 00175ce8
;
; *****************************************************************************

section .text

    AND EAX,0x5754b0                    ; 00574b7f | PTR_EnterCriticalSection_005754b0
        ;   Label: FUN_00574b7f
    JMP dword ptr [0x00575500]          ; 00574b84 | PTR_GetCurrentThreadId_00575500

