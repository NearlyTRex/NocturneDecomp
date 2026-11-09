; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_00575200(void)
;
;
; XREF[3]:
;   core_menu.cpp_FUN_0050ba70 at 0050bf8b
;   sound_sndmain.cpp_setAudioChannelCount_FUN_00575280 at 0057528b
;   sound_sndmain.cpp_setAudioSampleRate_FUN_005752a0 at 005752ab
;
; Referenced Globals:
;   undefined4 DAT_006232e8
;
; Called Functions:
;   sound_sndmain.cpp_getAudioFormat_FUN_005751c0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00575200
        ;   Label: sound_sndmain.cpp_FUN_00575200
    PUSH 0x0                            ; 00575202
    PUSH 0x6232e8                       ; 00575204 | DAT_006232e8
    CALL sound_sndmain.cpp_getAudioFormat_FUN_005751c0 ; 00575209
        ;   XREF to: 005751c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_005751c0(int * bits_per_sample, int * channels, int * sample_rate)
    MOV EAX,[0x006232e8]                ; 0057520e | DAT_006232e8
    ADD ESP,0xc                         ; 00575213
    RET                                 ; 00575216

