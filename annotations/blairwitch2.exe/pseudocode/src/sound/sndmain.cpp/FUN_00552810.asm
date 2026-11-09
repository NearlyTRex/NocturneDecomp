; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_00552810(void)
;
;
; XREF[4]:
;   core_menu.cpp_FUN_004ed260 at 004ed811
;   sound_snddx.cpp_FUN_00556550 at 005565d9
;   sound_sndmain.cpp_setAudioBitDepth_FUN_00552830 at 00552836
;   sound_sndmain.cpp_setAudioSampleRate_FUN_00552870 at 00552875
;
; Referenced Globals:
;   undefined4 DAT_0061bc9c
;
; Called Functions:
;   sound_sndmain.cpp_getAudioFormat_FUN_00552790
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00552810
        ;   Label: sound_sndmain.cpp_FUN_00552810
    PUSH 0x61bc9c                       ; 00552812 | DAT_0061bc9c
    PUSH 0x0                            ; 00552817
    CALL sound_sndmain.cpp_getAudioFormat_FUN_00552790 ; 00552819
        ;   XREF to: 00552790 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_00552790(int * bits_per_sample, int * channels, int * sample_rate)
    MOV EAX,[0x0061bc9c]                ; 0055281e | DAT_0061bc9c
    ADD ESP,0xc                         ; 00552823
    RET                                 ; 00552826

