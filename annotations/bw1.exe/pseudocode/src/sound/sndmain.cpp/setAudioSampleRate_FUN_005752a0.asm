; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_005752a0(int sample_rate)
;
; Parameters:
; int              Stack[0x4]:4   sample_rate
;
; XREF[1]:
;   core_menu.cpp_FUN_0050ba70 at 0050c7b1
;
; Called Functions:
;   sound_sndmain.cpp_getAudioBitDepth_FUN_00575200
;   sound_sndmain.cpp_getAudioChannelCount_FUN_00575240
;   sound_sndmain.cpp_setSoundOutputMode_FUN_00575120
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005752a0
        ;   Label: sound_sndmain.cpp_setAudioSampleRate_FUN_005752a0
    PUSH EDX                            ; 005752a4
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_00575240 ; 005752a5
        ;   XREF to: 00575240 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_00575240()
    PUSH EAX                            ; 005752aa
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_00575200 ; 005752ab
        ;   XREF to: 00575200 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioBitDepth_FUN_00575200()
    PUSH EAX                            ; 005752b0
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00575120 ; 005752b1
        ;   XREF to: 00575120 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00575120(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 005752b6
    RET                                 ; 005752b9

