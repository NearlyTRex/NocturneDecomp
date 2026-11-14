; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getAudioChannelCount_FUN_00575240(void)
;
;
; XREF[4]:
;   core_menu.cpp_FUN_0050ba70 at 0050c003
;   sound_snddx.cpp_FUN_00578f80 at 00579009
;   sound_sndmain.cpp_setAudioBitDepth_FUN_00575260 at 00575266
;   sound_sndmain.cpp_setAudioSampleRate_FUN_005752a0 at 005752a5
;
; Referenced Globals:
;   undefined4 DAT_006232ec
;
; Called Functions:
;   sound_sndmain.cpp_getAudioFormat_FUN_005751c0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00575240
        ;   Label: sound_sndmain.cpp_getAudioChannelCount_FUN_00575240
    PUSH 0x6232ec                       ; 00575242 | DAT_006232ec
    PUSH 0x0                            ; 00575247
    CALL sound_sndmain.cpp_getAudioFormat_FUN_005751c0 ; 00575249
        ;   XREF to: 005751c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_005751c0(int * bits_per_sample, int * channels, int * sample_rate)
    MOV EAX,[0x006232ec]                ; 0057524e | DAT_006232ec
    ADD ESP,0xc                         ; 00575253
    RET                                 ; 00575256

