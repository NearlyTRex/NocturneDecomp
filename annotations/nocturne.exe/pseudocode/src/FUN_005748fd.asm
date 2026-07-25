; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005748fd(LPSECURITY_ATTRIBUTES param_1,BOOL param_2,LPCSTR param_3)
;
;
; Referenced Globals:
;   void* PTR_CreateMutexA_0057549c = 00175b14
;   void* PTR_WaitForSingleObject_005755e0 = 00176102
;
; *****************************************************************************

section .text

    AND EAX,0x5755e0                    ; 005748fd | PTR_WaitForSingleObject_005755e0
        ;   Label: FUN_005748fd
    JMP dword ptr [0x0057549c]          ; 00574902 | PTR_CreateMutexA_0057549c

