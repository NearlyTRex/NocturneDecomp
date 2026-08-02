; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574a47(HWAVEOUT param_1)
;
;
; Referenced Globals:
;   void* PTR_waveOutOpen_005753f8 = 0017587e
;   void* PTR_waveOutReset_00575400 = 001758a4
;
; *****************************************************************************

section .text

    AND EAX,0x5753f8                    ; 00574a47 | PTR_waveOutOpen_005753f8
        ;   Label: crt_unknown.c_FUN_00574a47
    JMP dword ptr [0x00575400]          ; 00574a4c | PTR_waveOutReset_00575400

