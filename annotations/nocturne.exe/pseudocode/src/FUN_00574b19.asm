; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574b19(HANDLE param_1,PINPUT_RECORD param_2,DWORD param_3,LPDWORD param_4)
;
;
; Referenced Globals:
;   void* PTR_GetConsoleMode_005754f0 = 00175c94
;   void* PTR_ReadConsoleInputA_00575578 = 00175f2c
;
; *****************************************************************************

section .text

    AND EAX,0x5754f0                    ; 00574b19 | PTR_GetConsoleMode_005754f0
        ;   Label: FUN_00574b19
    JMP dword ptr [0x00575578]          ; 00574b1e | PTR_ReadConsoleInputA_00575578

