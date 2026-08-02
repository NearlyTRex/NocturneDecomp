; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005748f1(HANDLE param_1)
;
;
; Referenced Globals:
;   void* PTR_CreateThread_005754a0 = 00175b24
;   void* PTR_ReleaseMutex_00575580 = 00175f4c
;
; *****************************************************************************

section .text

    AND EAX,0x5754a0                    ; 005748f1 | PTR_CreateThread_005754a0
        ;   Label: crt_unknown.c_FUN_005748f1
    JMP dword ptr [0x00575580]          ; 005748f6 | PTR_ReleaseMutex_00575580

