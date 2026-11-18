; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndwav_cpp_staticInit_FUN_0057a570(void)
;
;
; Referenced Globals:
;   CWavOutDevice g_CWavOutDeviceInstance
;   CWavInDevice g_CWavInDeviceInstance
;
; *****************************************************************************

section .text

    MOV ECX,0x605bf8                    ; 0057a570
        ;   Label: sound_sndwav.cpp_staticInit_FUN_0057a570
    MOV EDX,0x605c10                    ; 0057a575
    MOV dword ptr [0x02c82a50],ECX      ; 0057a57a | g_CWavInDeviceInstance
    MOV dword ptr [0x02c82a4c],EDX      ; 0057a580 | g_CWavOutDeviceInstance
    RET                                 ; 0057a586

