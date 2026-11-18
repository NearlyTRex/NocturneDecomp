; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_staticInit_FUN_00554ac0(void)
;
;
; Referenced Globals:
;   CDirectSoundDevice g_CDirectSoundDeviceInstance
;
; *****************************************************************************

section .text

    MOV dword ptr [0x0264b06c],0x5fbcbc ; 00554ac0 | g_CDirectSoundDeviceInstance
        ;   Label: sound_sndmain.cpp_staticInit_FUN_00554ac0
    RET                                 ; 00554aca

