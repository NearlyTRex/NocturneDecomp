; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0(void)
;
;
; XREF[8]:
;   core_game.cpp_CGame_processHotkeys_FUN_004dcee0 at 004dd021
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00511f03
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 0051321d
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b38ae
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b1fdf
;   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 at 005aaf02
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac105
;   sound_sndmain.cpp_writeIni_FUN_005ac220 at 005ac33f
;
; Referenced Globals:
;   int g_SoundEnabled
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f69274]                ; 005a96b0 | g_SoundEnabled
        ;   Label: sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0
    RET                                 ; 005a96b5

