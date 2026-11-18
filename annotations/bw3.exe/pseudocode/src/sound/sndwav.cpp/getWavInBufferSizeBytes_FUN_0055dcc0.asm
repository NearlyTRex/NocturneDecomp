; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_0055dcc0(void)
;
;
; Referenced Globals:
;   int g_WaveInBitsPerSample
;   int g_WaveInChannels
;   int g_WaveInBufferSizeSamples
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x02cf5648]      ; 0055dcc0 | g_WaveInBitsPerSample
        ;   Label: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_0055dcc0
    MOV EDX,ECX                         ; 0055dcc6
    MOV EAX,ECX                         ; 0055dcc8
    SAR EDX,0x1f                        ; 0055dcca
    SHL EDX,0x3                         ; 0055dccd
    SBB EAX,EDX                         ; 0055dcd0
    SAR EAX,0x3                         ; 0055dcd2
    IMUL EAX,dword ptr [0x02cf5658]     ; 0055dcd5 | g_WaveInBufferSizeSamples
    IMUL EAX,dword ptr [0x02cf564c]     ; 0055dcdc | g_WaveInChannels
    RET                                 ; 0055dce3

