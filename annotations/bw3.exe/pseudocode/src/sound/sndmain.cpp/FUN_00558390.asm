; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_00558390(void)
;
;
; XREF[4]:
;   core_menu.cpp_FUN_004e94f0 at 004e99dc
;   core_sound.cpp_FUN_005607d0 at 005608d9
;   sound_sndmain.cpp_setAudioBitDepth_FUN_005583d0 at 005583d0
;   sound_sndmain.cpp_setAudioChannelCount_FUN_005583f0 at 005583f0
;
; Referenced Globals:
;   undefined4 DAT_00604230
;
; Called Functions:
;   sound_sndmain.cpp_getAudioFormat_FUN_00558330
;
; *****************************************************************************

section .text

    PUSH 0x604230                       ; 00558390 | DAT_00604230
        ;   Label: sound_sndmain.cpp_FUN_00558390
    PUSH 0x0                            ; 00558395
    PUSH 0x0                            ; 00558397
    CALL sound_sndmain.cpp_getAudioFormat_FUN_00558330 ; 00558399
        ;   XREF to: 00558330 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_00558330(int * bits_per_sample, int * channels, int * sample_rate)
    MOV EAX,[0x00604230]                ; 0055839e | DAT_00604230
    ADD ESP,0xc                         ; 005583a3
    RET                                 ; 005583a6

