; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005583f0(int channel_count)
;
; Parameters:
; int              Stack[0x4]:4   channel_count
;
; XREF[1]:
;   core_menu.cpp_FUN_004e94f0 at 004ea21b
;
; Called Functions:
;   sound_sndmain.cpp_getAudioBitDepth_FUN_00558370
;   sound_sndmain.cpp_getAudioSampleRate_FUN_00558390
;   sound_sndmain.cpp_setSoundOutputMode_FUN_00558290
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_00558390 ; 005583f0
        ;   XREF to: 00558390 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_00558390()
        ;   Label: sound_sndmain.cpp_setAudioChannelCount_FUN_005583f0
    PUSH EAX                            ; 005583f5
    MOV EDX,dword ptr [ESP + 0x8]       ; 005583f6
    PUSH EDX                            ; 005583fa
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_00558370 ; 005583fb
        ;   XREF to: 00558370 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioBitDepth_FUN_00558370()
    PUSH EAX                            ; 00558400
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00558290 ; 00558401
        ;   XREF to: 00558290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00558290(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 00558406
    RET                                 ; 00558409

