; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
;
; XREF[9]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 005127e2
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b3883
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2e7f
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b323b
;   core_sound.cpp_syncChannel3WithChannel0_FUN_005b2d70 at 005b2d8f
;   sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_005af750 at 005af7ea
;   sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00 at 005a6f42
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac1ad
;   sound_sndmain.cpp_writeIni_FUN_005ac220 at 005ac3ab
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650a32
;   TerminatedCString s_getSfxChannelVol_invalid_00650a47
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   float[32] g_SfxChannelVolumes
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9d90
        ;   Label: sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9d91
    TEST EBX,EBX                        ; 005a9d95
    JL 0x005a9da9                       ; 005a9d97
        ;   XREF to: 005a9da9 (CONDITIONAL_JUMP)  ; LAB_005a9da9
    CMP EBX,0x20                        ; 005a9d99
    JGE 0x005a9da9                      ; 005a9d9c
        ;   XREF to: 005a9da9 (CONDITIONAL_JUMP)  ; LAB_005a9da9
    MOV EBX,dword ptr [EBX*0x4 + 0x3f688a8] ; 005a9d9e | g_SfxChannelVolumes
    MOV EAX,EBX                         ; 005a9da5
    POP EBX                             ; 005a9da7
    RET                                 ; 005a9da8
    PUSH EBX                            ; 005a9da9
        ;   Label: LAB_005a9da9
    MOV EDX,0x650a32                    ; 005a9daa | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xf96                       ; 005a9daf
    PUSH 0x650a47                       ; 005a9db4 | = "getSfxChannelVol - invalid channel in..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005a9db9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005a9dbf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a9dc5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a9dca
    MOV EBX,dword ptr [EBX*0x4 + 0x3f688a8] ; 005a9dcd | g_SfxChannelVolumes
    MOV EAX,EBX                         ; 005a9dd4
    POP EBX                             ; 005a9dd6
    RET                                 ; 005a9dd7

