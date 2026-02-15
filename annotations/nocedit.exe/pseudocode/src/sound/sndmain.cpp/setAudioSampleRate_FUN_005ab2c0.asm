; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0(int sample_rate)
;
; Parameters:
; int              Stack[0x4]:4   sample_rate
;
; XREF[1]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512b6c
;
; Called Functions:
;   sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250
;   sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ab2c0
        ;   Label: sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0
    PUSH EDX                            ; 005ab2c4
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270 ; 005ab2c5
        ;   XREF to: 005ab270 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270()
    PUSH EAX                            ; 005ab2ca
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250 ; 005ab2cb
        ;   XREF to: 005ab250 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250()
    PUSH EAX                            ; 005ab2d0
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 ; 005ab2d1
        ;   XREF to: 005ab170 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 005ab2d6
    RET                                 ; 005ab2d9

