; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_00552850(int channel_count)
;
; Parameters:
; int              Stack[0x4]:4   channel_count
;
; XREF[1]:
;   core_menu.cpp_FUN_004ed260 at 004ee086
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005527d0
;   sound_sndmain.cpp_FUN_005527f0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_005527f0 ; 00552850
        ;   XREF to: 005527f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005527f0()
        ;   Label: sound_sndmain.cpp_setAudioChannelCount_FUN_00552850
    PUSH EAX                            ; 00552855
    MOV EDX,dword ptr [ESP + 0x8]       ; 00552856
    PUSH EDX                            ; 0055285a
    CALL sound_sndmain.cpp_FUN_005527d0 ; 0055285b
        ;   XREF to: 005527d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005527d0()
    PUSH EAX                            ; 00552860
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0 ; 00552861
        ;   XREF to: 005526f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 00552866
    RET                                 ; 00552869

