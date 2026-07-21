; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00528210(undefined4 param_1)
;
;
; XREF[1]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1ffc
;
; Called Functions:
;   sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0
;   sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00528210
        ;   Label: sound_sndmain.cpp_setAudioSampleRate_FUN_00528210
    PUSH EDX                            ; 00528214
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0 ; 00528215
        ;   XREF to: 005281c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0()
    PUSH EAX                            ; 0052821a
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0 ; 0052821b
        ;   XREF to: 005281a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0()
    PUSH EAX                            ; 00528220
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0 ; 00528221
        ;   XREF to: 005280c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0()
    ADD ESP,0xc                         ; 00528226
    RET                                 ; 00528229

