; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndwav.cpp_staticInit_FUN_005b0670(void)
;
;
; Referenced Globals:
;   CSoundDeviceBasic_vtable g_CWavInDeviceVTable
;   CSoundDeviceFull_vtable g_CWavOutDeviceVTable
;   CWavOutDevice g_CWavOutDeviceInstance
;   CWavInDevice g_CWavInDeviceInstance
;
; *****************************************************************************

section .text

    MOV ECX,0x663264                    ; 005b0670 | CSoundDeviceBasic_vtable g_CWavInDeviceVTable
        ;   Label: sound_sndwav.cpp_staticInit_FUN_005b0670
    MOV EDX,0x663284                    ; 005b0675 | CSoundDeviceFull_vtable g_CWavOutDeviceVTable
    MOV dword ptr [0x03f6af44],ECX      ; 005b067a | CWavInDevice g_CWavInDeviceInstance
    MOV dword ptr [0x03f6af40],EDX      ; 005b0680 | CWavOutDevice g_CWavOutDeviceInstance
    RET                                 ; 005b0686

