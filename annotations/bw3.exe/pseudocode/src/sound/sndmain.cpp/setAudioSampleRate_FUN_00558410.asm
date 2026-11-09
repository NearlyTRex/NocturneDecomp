; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00558410(int sample_rate)
;
; Parameters:
; int              Stack[0x4]:4   sample_rate
;
; XREF[1]:
;   core_menu.cpp_FUN_004e94f0 at 004ea147
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00558370
;   sound_sndmain.cpp_FUN_005583b0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_00558290
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00558410
        ;   Label: sound_sndmain.cpp_setAudioSampleRate_FUN_00558410
    PUSH EDX                            ; 00558414
    CALL sound_sndmain.cpp_FUN_005583b0 ; 00558415
        ;   XREF to: 005583b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005583b0()
    PUSH EAX                            ; 0055841a
    CALL sound_sndmain.cpp_FUN_00558370 ; 0055841b
        ;   XREF to: 00558370 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00558370()
    PUSH EAX                            ; 00558420
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00558290 ; 00558421
        ;   XREF to: 00558290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00558290(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 00558426
    RET                                 ; 00558429

