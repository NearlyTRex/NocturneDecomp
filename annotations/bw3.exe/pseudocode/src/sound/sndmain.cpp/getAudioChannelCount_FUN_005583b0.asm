; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getAudioChannelCount_FUN_005583b0(void)
;
;
; XREF[4]:
;   core_menu.cpp_FUN_004e94f0 at 004e9b0b
;   sound_snddx.cpp_FUN_0055c0f0 at 0055c179
;   sound_sndmain.cpp_setAudioBitDepth_FUN_005583d0 at 005583d6
;   sound_sndmain.cpp_setAudioSampleRate_FUN_00558410 at 00558415
;
; Referenced Globals:
;   undefined4 DAT_0060422c
;
; Called Functions:
;   sound_sndmain.cpp_getAudioFormat_FUN_00558330
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005583b0
        ;   Label: sound_sndmain.cpp_getAudioChannelCount_FUN_005583b0
    PUSH 0x60422c                       ; 005583b2 | DAT_0060422c
    PUSH 0x0                            ; 005583b7
    CALL sound_sndmain.cpp_getAudioFormat_FUN_00558330 ; 005583b9
        ;   XREF to: 00558330 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_00558330(int * bits_per_sample, int * channels, int * sample_rate)
    MOV EAX,[0x0060422c]                ; 005583be | DAT_0060422c
    ADD ESP,0xc                         ; 005583c3
    RET                                 ; 005583c6

