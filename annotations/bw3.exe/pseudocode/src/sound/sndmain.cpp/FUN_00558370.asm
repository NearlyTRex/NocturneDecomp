; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_00558370(void)
;
;
; XREF[3]:
;   core_menu.cpp_FUN_004e94f0 at 004e9a95
;   sound_sndmain.cpp_setAudioChannelCount_FUN_005583f0 at 005583fb
;   sound_sndmain.cpp_setAudioSampleRate_FUN_00558410 at 0055841b
;
; Referenced Globals:
;   undefined4 DAT_00604228
;
; Called Functions:
;   sound_sndmain.cpp_getAudioFormat_FUN_00558330
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00558370
        ;   Label: sound_sndmain.cpp_FUN_00558370
    PUSH 0x0                            ; 00558372
    PUSH 0x604228                       ; 00558374 | DAT_00604228
    CALL sound_sndmain.cpp_getAudioFormat_FUN_00558330 ; 00558379
        ;   XREF to: 00558330 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_00558330(int * bits_per_sample, int * channels, int * sample_rate)
    MOV EAX,[0x00604228]                ; 0055837e | DAT_00604228
    ADD ESP,0xc                         ; 00558383
    RET                                 ; 00558386

