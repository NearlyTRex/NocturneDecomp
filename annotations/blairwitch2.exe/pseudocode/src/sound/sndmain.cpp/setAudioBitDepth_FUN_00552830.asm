; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_00552830(int bit_depth)
;
; Parameters:
; int              Stack[0x4]:4   bit_depth
;
; XREF[1]:
;   core_menu.cpp_FUN_004ed260 at 004ee037
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005527f0
;   sound_sndmain.cpp_FUN_00552810
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_005527f0 ; 00552830
        ;   XREF to: 005527f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005527f0()
        ;   Label: sound_sndmain.cpp_setAudioBitDepth_FUN_00552830
    PUSH EAX                            ; 00552835
    CALL sound_sndmain.cpp_FUN_00552810 ; 00552836
        ;   XREF to: 00552810 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552810()
    PUSH EAX                            ; 0055283b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055283c
    PUSH EDX                            ; 00552840
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0 ; 00552841
        ;   XREF to: 005526f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 00552846
    RET                                 ; 00552849

