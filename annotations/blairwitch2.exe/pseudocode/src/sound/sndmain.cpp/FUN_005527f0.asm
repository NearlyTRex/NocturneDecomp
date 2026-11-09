; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_005527f0(void)
;
;
; XREF[4]:
;   core_menu.cpp_FUN_004ed260 at 004ed6e1
;   core_sound.cpp_FUN_0055ac50 at 0055ad59
;   sound_sndmain.cpp_setAudioBitDepth_FUN_00552830 at 00552830
;   sound_sndmain.cpp_setAudioChannelCount_FUN_00552850 at 00552850
;
; Referenced Globals:
;   undefined4 DAT_0061bca0
;
; Called Functions:
;   sound_sndmain.cpp_getAudioFormat_FUN_00552790
;
; *****************************************************************************

section .text

    PUSH 0x61bca0                       ; 005527f0 | DAT_0061bca0
        ;   Label: sound_sndmain.cpp_FUN_005527f0
    PUSH 0x0                            ; 005527f5
    PUSH 0x0                            ; 005527f7
    CALL sound_sndmain.cpp_getAudioFormat_FUN_00552790 ; 005527f9
        ;   XREF to: 00552790 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_00552790(int * bits_per_sample, int * channels, int * sample_rate)
    MOV EAX,[0x0061bca0]                ; 005527fe | DAT_0061bca0
    ADD ESP,0xc                         ; 00552803
    RET                                 ; 00552806

