; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_0057ab90(void)
;
;
; Referenced Globals:
;   int g_INT_02c82a1c
;   int g_INT_02c82a20
;   int g_INT_02c82a2c
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x02c82a1c]      ; 0057ab90 | g_INT_02c82a1c
        ;   Label: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_0057ab90
    MOV EDX,ECX                         ; 0057ab96
    MOV EAX,ECX                         ; 0057ab98
    SAR EDX,0x1f                        ; 0057ab9a
    SHL EDX,0x3                         ; 0057ab9d
    SBB EAX,EDX                         ; 0057aba0
    SAR EAX,0x3                         ; 0057aba2
    IMUL EAX,dword ptr [0x02c82a2c]     ; 0057aba5 | g_INT_02c82a2c
    IMUL EAX,dword ptr [0x02c82a20]     ; 0057abac | g_INT_02c82a20
    RET                                 ; 0057abb3

