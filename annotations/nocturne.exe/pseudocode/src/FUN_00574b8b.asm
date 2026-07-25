; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574b8b(LPCRITICAL_SECTION param_1)
;
;
; Referenced Globals:
;   void* PTR_DeleteCriticalSection_005754a4 = 00175b34
;   void* PTR_InitializeCriticalSection_00575558 = 00175e76
;
; *****************************************************************************

section .text

    AND EAX,0x5754a4                    ; 00574b8b | PTR_DeleteCriticalSection_005754a4
        ;   Label: FUN_00574b8b
    JMP dword ptr [0x00575558]          ; 00574b90 | PTR_InitializeCriticalSection_00575558

