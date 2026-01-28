; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_005b0c90(void)
;
;
; Referenced Globals:
;   int g_WaveInBitsPerSample
;   int g_WaveInChannels
;   int g_WaveInBufferSizeSamples
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x03f6af10]      ; 005b0c90 | g_WaveInBitsPerSample
        ;   Label: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_005b0c90
    MOV EDX,ECX                         ; 005b0c96
    MOV EAX,ECX                         ; 005b0c98
    SAR EDX,0x1f                        ; 005b0c9a
    SHL EDX,0x3                         ; 005b0c9d
    SBB EAX,EDX                         ; 005b0ca0
    SAR EAX,0x3                         ; 005b0ca2
    IMUL EAX,dword ptr [0x03f6af20]     ; 005b0ca5 | g_WaveInBufferSizeSamples
    IMUL EAX,dword ptr [0x03f6af14]     ; 005b0cac | g_WaveInChannels
    RET                                 ; 005b0cb3

