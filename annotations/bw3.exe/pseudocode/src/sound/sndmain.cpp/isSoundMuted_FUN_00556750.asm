; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSoundMuted_FUN_00556750(void)
;
;
; XREF[8]:
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004ba681
;   core_menu.cpp_FUN_004e94f0 at 004e9657
;   core_menu.cpp_showMainGameMenu_FUN_004ea4d0 at 004ea7f4
;   core_sound.cpp_CSound_configure_FUN_005607d0 at 0056084e
;   core_sound.cpp_playSfxInternal_FUN_0055f020 at 0055f02f
;   sound_sndmain.cpp_enableSoundSystem_FUN_00558050 at 00558062
;   sound_sndmain.cpp_readIni_FUN_00559220 at 0055940d
;   sound_sndmain.cpp_writeIni_FUN_00559520 at 00559643
;
; Referenced Globals:
;   undefined4 DAT_02cf3290
;
; *****************************************************************************

section .text

    MOV EAX,[0x02cf3290]                ; 00556750 | DAT_02cf3290
        ;   Label: sound_sndmain.cpp_isSoundMuted_FUN_00556750
    RET                                 ; 00556755

