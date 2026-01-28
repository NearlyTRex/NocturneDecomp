; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0(void)
;
;
; XREF[3]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512406
;   sound_sndmain.cpp_logSoundError_FUN_005adba0 at 005adce2
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 at 005aae8e
;
; Referenced Globals:
;   int g_CurrentSoundDevice = -0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x00681b24]                ; 005ab6c0 | g_CurrentSoundDevice
        ;   Label: sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
    RET                                 ; 005ab6c5

