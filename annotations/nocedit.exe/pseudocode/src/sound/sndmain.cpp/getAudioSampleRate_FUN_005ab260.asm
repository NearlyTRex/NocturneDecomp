; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260(void)
;
;
; XREF[5]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 0051228c
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b3951
;   sound_sndmain.cpp_logSoundError_FUN_005adba0 at 005add2e
;   sound_sndmain.cpp_setAudioBitDepth_FUN_005ab280 at 005ab280
;   sound_sndmain.cpp_setAudioChannelCount_FUN_005ab2a0 at 005ab2a0
;
; Referenced Globals:
;   int g_AudioSampleRate = 0x5622
;
; *****************************************************************************

section .text

    MOV EAX,[0x00681b1c]                ; 005ab260 | g_AudioSampleRate
        ;   Label: sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
    RET                                 ; 005ab265

