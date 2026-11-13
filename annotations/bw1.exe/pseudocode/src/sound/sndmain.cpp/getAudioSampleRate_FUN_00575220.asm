; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getAudioSampleRate_FUN_00575220(void)
;
;
; XREF[4]:
;   core_menu.cpp_FUN_0050ba70 at 0050bed3
;   core_sound.cpp_CSound_configure_FUN_0057d6a0 at 0057d7a9
;   sound_sndmain.cpp_setAudioBitDepth_FUN_00575260 at 00575260
;   sound_sndmain.cpp_setAudioChannelCount_FUN_00575280 at 00575280
;
; Referenced Globals:
;   undefined4 DAT_006232f0
;
; Called Functions:
;   sound_sndmain.cpp_getAudioFormat_FUN_005751c0
;
; *****************************************************************************

section .text

    PUSH 0x6232f0                       ; 00575220 | DAT_006232f0
        ;   Label: sound_sndmain.cpp_getAudioSampleRate_FUN_00575220
    PUSH 0x0                            ; 00575225
    PUSH 0x0                            ; 00575227
    CALL sound_sndmain.cpp_getAudioFormat_FUN_005751c0 ; 00575229
        ;   XREF to: 005751c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_005751c0(int * bits_per_sample, int * channels, int * sample_rate)
    MOV EAX,[0x006232f0]                ; 0057522e | DAT_006232f0
    ADD ESP,0xc                         ; 00575233
    RET                                 ; 00575236

