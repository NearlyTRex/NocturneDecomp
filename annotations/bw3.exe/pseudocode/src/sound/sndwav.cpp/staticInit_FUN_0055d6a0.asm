; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndwav_cpp_staticInit_FUN_0055d6a0(void)
;
;
; Referenced Globals:
;   CWavOutDevice g_CWavOutDeviceInstance
;   CWavInDevice g_CWavInDeviceInstance
;
; *****************************************************************************

section .text

    MOV ECX,0x5e4938                    ; 0055d6a0
        ;   Label: sound_sndwav.cpp_staticInit_FUN_0055d6a0
    MOV EDX,0x5e4950                    ; 0055d6a5
    MOV dword ptr [0x02cf567c],ECX      ; 0055d6aa | g_CWavInDeviceInstance
    MOV dword ptr [0x02cf5678],EDX      ; 0055d6b0 | g_CWavOutDeviceInstance
    RET                                 ; 0055d6b6

