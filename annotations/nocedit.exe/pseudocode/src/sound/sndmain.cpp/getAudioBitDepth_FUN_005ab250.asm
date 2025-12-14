; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250(void)
;
;
; XREF[4]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512344
;   sound_sndmain.cpp_logSoundError_FUN_005adba0 at 005add06
;   sound_sndmain.cpp_setAudioChannelCount_FUN_005ab2a0 at 005ab2ab
;   sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0 at 005ab2cb
;
; Referenced Globals:
;   int g_AudioBitsPerSample = 0x10
;
; *****************************************************************************

section .text

    MOV EAX,[0x00681b14]                ; 005ab250 | g_AudioBitsPerSample
        ;   Label: sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250
    RET                                 ; 005ab255

