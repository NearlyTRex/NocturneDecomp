; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getAudioBitDepth_FUN_005527d0(void)
;
;
; XREF[3]:
;   core_menu.cpp_FUN_004ed260 at 004ed799
;   sound_sndmain.cpp_setAudioChannelCount_FUN_00552850 at 0055285b
;   sound_sndmain.cpp_setAudioSampleRate_FUN_00552870 at 0055287b
;
; Referenced Globals:
;   undefined4 DAT_0061bc98
;
; Called Functions:
;   sound_sndmain.cpp_getAudioFormat_FUN_00552790
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005527d0
        ;   Label: sound_sndmain.cpp_getAudioBitDepth_FUN_005527d0
    PUSH 0x0                            ; 005527d2
    PUSH 0x61bc98                       ; 005527d4 | DAT_0061bc98
    CALL sound_sndmain.cpp_getAudioFormat_FUN_00552790 ; 005527d9
        ;   XREF to: 00552790 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_00552790(int * bits_per_sample, int * channels, int * sample_rate)
    MOV EAX,[0x0061bc98]                ; 005527de | DAT_0061bc98
    ADD ESP,0xc                         ; 005527e3
    RET                                 ; 005527e6

