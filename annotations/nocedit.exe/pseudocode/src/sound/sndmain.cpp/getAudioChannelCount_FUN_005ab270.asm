; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270(void)
;
;
; XREF[4]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 0051252a
;   sound_sndmain.cpp_logSoundError_FUN_005adba0 at 005add1a
;   sound_sndmain.cpp_setAudioBitDepth_FUN_005ab280 at 005ab286
;   sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0 at 005ab2c5
;
; Referenced Globals:
;   int g_AudioChannelCount = 0x2
;
; *****************************************************************************

section .text

    MOV EAX,[0x00681b18]                ; 005ab270 | int g_AudioChannelCount
        ;   Label: sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
    RET                                 ; 005ab275

