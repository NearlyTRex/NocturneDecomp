; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005281d0(int bit_depth)
;
; Parameters:
; int              Stack[0x4]:4   bit_depth
;
; XREF[1]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d2071
;
; Called Functions:
;   sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0
;   sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0 ; 005281d0
        ;   XREF to: 005281b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0()
        ;   Label: sound_sndmain.cpp_setAudioBitDepth_FUN_005281d0
    PUSH EAX                            ; 005281d5
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0 ; 005281d6
        ;   XREF to: 005281c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0()
    PUSH EAX                            ; 005281db
    MOV EDX,dword ptr [ESP + 0xc]       ; 005281dc
    PUSH EDX                            ; 005281e0
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0 ; 005281e1
        ;   XREF to: 005280c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 005281e6
    RET                                 ; 005281e9

