; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
;
; XREF[9]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ac549
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e4109
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 005128a1
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2e62
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b321d
;   core_sound.cpp_syncChannel3WithChannel0_FUN_005b2d70 at 005b2d75
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac15d
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a8f23
;   sound_sndmain.cpp_writeIni_FUN_005ac220 at 005ac37a
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650aee
;   TerminatedCString s_isSfxChannelEnabled_inva_00650b03
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int[32] g_SfxChannelEnabled
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9ea0
        ;   Label: sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9ea1
    TEST EBX,EBX                        ; 005a9ea5
    JL 0x005a9eb7                       ; 005a9ea7
        ;   XREF to: 005a9eb7 (CONDITIONAL_JUMP)  ; LAB_005a9eb7
    CMP EBX,0x20                        ; 005a9ea9
    JGE 0x005a9eb7                      ; 005a9eac
        ;   XREF to: 005a9eb7 (CONDITIONAL_JUMP)  ; LAB_005a9eb7
    MOV EAX,dword ptr [EBX*0x4 + 0x3f68928] ; 005a9eae | g_SfxChannelEnabled
    POP EBX                             ; 005a9eb5
    RET                                 ; 005a9eb6
    PUSH EBX                            ; 005a9eb7
        ;   Label: LAB_005a9eb7
    MOV EDX,0x650aee                    ; 005a9eb8 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xfb0                       ; 005a9ebd
    PUSH 0x650b03                       ; 005a9ec2 | = "isSfxChannelEnabled - invalid channel..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005a9ec7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005a9ecd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a9ed3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a9ed8
    MOV EAX,dword ptr [EBX*0x4 + 0x3f68928] ; 005a9edb | g_SfxChannelEnabled
    POP EBX                             ; 005a9ee2
    RET                                 ; 005a9ee3

