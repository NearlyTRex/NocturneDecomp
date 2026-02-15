; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0(int channel_count)
;
; Parameters:
; int              Stack[0x4]:4   channel_count
;
; XREF[1]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512c30
;
; Called Functions:
;   sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250
;   sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260 ; 005ab2a0
        ;   XREF to: 005ab260 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260()
        ;   Label: sound_sndmain.cpp_setAudioChannelCount_FUN_005ab2a0
    PUSH EAX                            ; 005ab2a5
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ab2a6
    PUSH EDX                            ; 005ab2aa
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250 ; 005ab2ab
        ;   XREF to: 005ab250 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250()
    PUSH EAX                            ; 005ab2b0
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 ; 005ab2b1
        ;   XREF to: 005ab170 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 005ab2b6
    RET                                 ; 005ab2b9

