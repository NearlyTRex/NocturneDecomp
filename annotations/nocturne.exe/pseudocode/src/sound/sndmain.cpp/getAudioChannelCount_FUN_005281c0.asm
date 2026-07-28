; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0(void)
;
;
; XREF[3]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d184c
;   sound_sndmain.cpp_setAudioBitDepth_FUN_005281d0 at 005281d6
;   sound_sndmain.cpp_setAudioSampleRate_FUN_00528210 at 00528215
;
; Referenced Globals:
;   undefined4 DAT_005bea68
;
; *****************************************************************************

section .text

    MOV EAX,[0x005bea68]                ; 005281c0 | DAT_005bea68
        ;   Label: sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0
    RET                                 ; 005281c5

