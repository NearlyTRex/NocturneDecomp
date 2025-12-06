; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_snddx.cpp_staticInit_FUN_005ade60(void)
;
;
; Referenced Globals:
;   CSoundDeviceFull_vtable g_CDirectSoundDeviceVTable
;   CDirectSoundDevice g_CDirectSoundDeviceInstance
;
; *****************************************************************************

section .text

    MOV dword ptr [0x03f6ad30],0x663204 ; 005ade60 | CDirectSoundDevice g_CDirectSoundDeviceInstance | CSoundDeviceFull_vtable g_CDirectSoundDeviceVTable
        ;   Label: sound_snddx.cpp_staticInit_FUN_005ade60
    RET                                 ; 005ade6a

