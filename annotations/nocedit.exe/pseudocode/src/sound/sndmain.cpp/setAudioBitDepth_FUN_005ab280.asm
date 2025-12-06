; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_setAudioBitDepth_FUN_005ab280(int bit_depth)
;
; Parameters:
; int              Stack[0x4]:4   bit_depth
;
; XREF[1]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512be1
;
; Called Functions:
;   sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
;   sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260 ; 005ab280 | int sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260()
        ;   Label: sound_sndmain.cpp_setAudioBitDepth_FUN_005ab280
        ;   XREF to: 005ab260 (UNCONDITIONAL_CALL)
    PUSH EAX                            ; 005ab285
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270 ; 005ab286 | int sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270()
        ;   XREF to: 005ab270 (UNCONDITIONAL_CALL)
    PUSH EAX                            ; 005ab28b
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ab28c
    PUSH EDX                            ; 005ab290
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 ; 005ab291 | int sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample, int channels, int sample_rate)
        ;   XREF to: 005ab170 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005ab296
    RET                                 ; 005ab299

