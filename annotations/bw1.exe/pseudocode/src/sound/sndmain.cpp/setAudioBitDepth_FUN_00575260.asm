; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_00575260(int bit_depth)
;
; Parameters:
; int              Stack[0x4]:4   bit_depth
;
; XREF[1]:
;   core_menu.cpp_FUN_0050ba70 at 0050c826
;
; Called Functions:
;   sound_sndmain.cpp_getAudioChannelCount_FUN_00575240
;   sound_sndmain.cpp_getAudioSampleRate_FUN_00575220
;   sound_sndmain.cpp_setSoundOutputMode_FUN_00575120
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_00575220 ; 00575260
        ;   XREF to: 00575220 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_00575220()
        ;   Label: sound_sndmain.cpp_setAudioBitDepth_FUN_00575260
    PUSH EAX                            ; 00575265
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_00575240 ; 00575266
        ;   XREF to: 00575240 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_00575240()
    PUSH EAX                            ; 0057526b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057526c
    PUSH EDX                            ; 00575270
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00575120 ; 00575271
        ;   XREF to: 00575120 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00575120(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 00575276
    RET                                 ; 00575279

