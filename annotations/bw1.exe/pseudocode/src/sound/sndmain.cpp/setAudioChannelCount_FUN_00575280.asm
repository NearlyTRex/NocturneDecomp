; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_00575280(int channel_count)
;
; Parameters:
; int              Stack[0x4]:4   channel_count
;
; XREF[1]:
;   core_menu.cpp_FUN_0050ba70 at 0050c875
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00575200
;   sound_sndmain.cpp_FUN_00575220
;   sound_sndmain.cpp_setSoundOutputMode_FUN_00575120
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_00575220 ; 00575280
        ;   XREF to: 00575220 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00575220()
        ;   Label: sound_sndmain.cpp_setAudioChannelCount_FUN_00575280
    PUSH EAX                            ; 00575285
    MOV EDX,dword ptr [ESP + 0x8]       ; 00575286
    PUSH EDX                            ; 0057528a
    CALL sound_sndmain.cpp_FUN_00575200 ; 0057528b
        ;   XREF to: 00575200 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00575200()
    PUSH EAX                            ; 00575290
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00575120 ; 00575291
        ;   XREF to: 00575120 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00575120(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 00575296
    RET                                 ; 00575299

