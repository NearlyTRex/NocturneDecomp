; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574a5f(HWAVEOUT param_1,LPWAVEHDR param_2,UINT param_3)
;
;
; Referenced Globals:
;   void* PTR_waveOutPrepareHeader_005753fc = 0017588c
;   void* PTR_waveOutUnprepareHeader_00575404 = 001758b4
;
; *****************************************************************************

section .text

    AND EAX,0x5753fc                    ; 00574a5f | PTR_waveOutPrepareHeader_005753fc
        ;   Label: crt_unknown.c_FUN_00574a5f
    JMP dword ptr [0x00575404]          ; 00574a64 | PTR_waveOutUnprepareHeader_00575404

