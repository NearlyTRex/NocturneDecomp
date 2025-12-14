; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndwav.cpp_getWavOutBufferSizeBytes_FUN_005b0690(void)
;
;
; Referenced Globals:
;   int g_WaveOutBitsPerSample
;   int g_WaveOutChannels
;   int g_WaveOutBufferSize
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x03f6adb8]      ; 005b0690 | g_WaveOutBitsPerSample
        ;   Label: sound_sndwav.cpp_getWavOutBufferSizeBytes_FUN_005b0690
    MOV EDX,ECX                         ; 005b0696
    MOV EAX,ECX                         ; 005b0698
    SAR EDX,0x1f                        ; 005b069a
    SHL EDX,0x3                         ; 005b069d
    SBB EAX,EDX                         ; 005b06a0
    SAR EAX,0x3                         ; 005b06a2
    IMUL EAX,dword ptr [0x03f6adc4]     ; 005b06a5 | g_WaveOutBufferSize
    IMUL EAX,dword ptr [0x03f6adbc]     ; 005b06ac | g_WaveOutChannels
    RET                                 ; 005b06b3

