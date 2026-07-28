; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0(void)
;
;
; XREF[3]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d17d4
;   sound_sndmain.cpp_setAudioChannelCount_FUN_005281f0 at 005281fb
;   sound_sndmain.cpp_setAudioSampleRate_FUN_00528210 at 0052821b
;
; Referenced Globals:
;   undefined4 DAT_005bea64
;
; *****************************************************************************

section .text

    MOV EAX,[0x005bea64]                ; 005281a0 | DAT_005bea64
        ;   Label: sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0
    RET                                 ; 005281a5

