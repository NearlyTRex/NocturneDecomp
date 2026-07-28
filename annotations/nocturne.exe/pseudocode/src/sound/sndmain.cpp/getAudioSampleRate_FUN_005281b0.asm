; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0(void)
;
;
; XREF[4]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d171c
;   core_sound.cpp_CSound_configure_FUN_0052e850 at 0052e971
;   sound_sndmain.cpp_setAudioBitDepth_FUN_005281d0 at 005281d0
;   sound_sndmain.cpp_setAudioChannelCount_FUN_005281f0 at 005281f0
;
; Referenced Globals:
;   undefined4 DAT_005bea6c
;
; *****************************************************************************

section .text

    MOV EAX,[0x005bea6c]                ; 005281b0 | DAT_005bea6c
        ;   Label: sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0
    RET                                 ; 005281b5

