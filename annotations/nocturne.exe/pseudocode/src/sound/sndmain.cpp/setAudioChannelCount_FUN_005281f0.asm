; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005281f0(undefined4 param_1)
;
;
; XREF[1]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d20c0
;
; Called Functions:
;   sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0
;   sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0 ; 005281f0
        ;   XREF to: 005281b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0()
        ;   Label: sound_sndmain.cpp_setAudioChannelCount_FUN_005281f0
    PUSH EAX                            ; 005281f5
    MOV EDX,dword ptr [ESP + 0x8]       ; 005281f6
    PUSH EDX                            ; 005281fa
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0 ; 005281fb
        ;   XREF to: 005281a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0()
    PUSH EAX                            ; 00528200
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0 ; 00528201
        ;   XREF to: 005280c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0()
    ADD ESP,0xc                         ; 00528206
    RET                                 ; 00528209

