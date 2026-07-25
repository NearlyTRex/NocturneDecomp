; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574a3b(UINT_PTR param_1,LPWAVEOUTCAPSA param_2,UINT param_3)
;
;
; Referenced Globals:
;   void* PTR_waveOutGetDevCapsA_005753f4 = 00175868
;   void* PTR_ShowWindow_0057547c = 00175aa2
;
; *****************************************************************************

section .text

    AND EAX,0x57547c                    ; 00574a3b | PTR_ShowWindow_0057547c
        ;   Label: FUN_00574a3b
    JMP dword ptr [0x005753f4]          ; 00574a40 | PTR_waveOutGetDevCapsA_005753f4

