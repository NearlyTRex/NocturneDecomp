; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_005a96c0(int muted)
;
; Parameters:
; int              Stack[0x4]:4   muted
;
; XREF[4]:
;   core_game.cpp_CGame_processHotkeys_FUN_004dcee0 at 004dd030
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 005126de
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 0051322d
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac131
;
; Referenced Globals:
;   int g_SoundMuted
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a96c0
        ;   Label: sound_sndmain.cpp_setSoundMuted_FUN_005a96c0
    MOV [0x03f69274],EAX                ; 005a96c4 | g_SoundMuted
    TEST EAX,EAX                        ; 005a96c9
    JNZ 0x005ab130                      ; 005a96cb
        ;   XREF to: 005ab130 (CONDITIONAL_JUMP)
    RET                                 ; 005a96d1

