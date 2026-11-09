; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005583d0(int bit_depth)
;
; Parameters:
; int              Stack[0x4]:4   bit_depth
;
; XREF[1]:
;   core_menu.cpp_FUN_004e94f0 at 004ea1c4
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00558390
;   sound_sndmain.cpp_FUN_005583b0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_00558290
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_00558390 ; 005583d0
        ;   XREF to: 00558390 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00558390()
        ;   Label: sound_sndmain.cpp_setAudioBitDepth_FUN_005583d0
    PUSH EAX                            ; 005583d5
    CALL sound_sndmain.cpp_FUN_005583b0 ; 005583d6
        ;   XREF to: 005583b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005583b0()
    PUSH EAX                            ; 005583db
    MOV EDX,dword ptr [ESP + 0xc]       ; 005583dc
    PUSH EDX                            ; 005583e0
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00558290 ; 005583e1
        ;   XREF to: 00558290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00558290(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 005583e6
    RET                                 ; 005583e9

