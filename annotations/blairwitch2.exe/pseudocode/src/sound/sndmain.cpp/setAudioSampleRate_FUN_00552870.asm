; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00552870(int sample_rate)
;
; Parameters:
; int              Stack[0x4]:4   sample_rate
;
; XREF[1]:
;   core_menu.cpp_FUN_004ed260 at 004edfc2
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005527d0
;   sound_sndmain.cpp_FUN_00552810
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00552870
        ;   Label: sound_sndmain.cpp_setAudioSampleRate_FUN_00552870
    PUSH EDX                            ; 00552874
    CALL sound_sndmain.cpp_FUN_00552810 ; 00552875
        ;   XREF to: 00552810 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552810()
    PUSH EAX                            ; 0055287a
    CALL sound_sndmain.cpp_FUN_005527d0 ; 0055287b
        ;   XREF to: 005527d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005527d0()
    PUSH EAX                            ; 00552880
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0 ; 00552881
        ;   XREF to: 005526f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 00552886
    RET                                 ; 00552889

