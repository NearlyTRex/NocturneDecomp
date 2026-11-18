; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_00558160(void)
;
;
; Referenced Globals:
;   int g_WaveInBitsPerSample
;   int g_WaveInChannels
;   int g_WaveInBufferSizeSamples
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x0264b24c]      ; 00558160 | g_WaveInBitsPerSample
        ;   Label: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_00558160
    MOV EDX,ECX                         ; 00558166
    MOV EAX,ECX                         ; 00558168
    SAR EDX,0x1f                        ; 0055816a
    SHL EDX,0x3                         ; 0055816d
    SBB EAX,EDX                         ; 00558170
    SAR EAX,0x3                         ; 00558172
    IMUL EAX,dword ptr [0x0264b25c]     ; 00558175 | g_WaveInBufferSizeSamples
    IMUL EAX,dword ptr [0x0264b250]     ; 0055817c | g_WaveInChannels
    RET                                 ; 00558183

