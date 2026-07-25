; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574a53(HWAVEOUT param_1,LPWAVEHDR param_2,UINT param_3)
;
;
; Referenced Globals:
;   void* PTR_waveOutClose_005753f0 = 00175858
;   void* PTR_waveOutWrite_00575408 = 001758ce
;
; *****************************************************************************

section .text

    AND EAX,0x5753f0                    ; 00574a53 | PTR_waveOutClose_005753f0
        ;   Label: FUN_00574a53
    JMP dword ptr [0x00575408]          ; 00574a58 | PTR_waveOutWrite_00575408

