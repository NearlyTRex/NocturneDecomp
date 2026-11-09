; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSoundMuted_FUN_005735f0(void)
;
;
; XREF[8]:
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80 at 004d1bc2
;   core_menu.cpp_FUN_0050ba70 at 0050bb4a
;   core_menu.cpp_FUN_0050cc90 at 0050cfb1
;   core_sound.cpp_FUN_0057bef0 at 0057beff
;   core_sound.cpp_FUN_0057d6a0 at 0057d71e
;   sound_sndmain.cpp_FUN_005760b0 at 0057629d
;   sound_sndmain.cpp_FUN_005763b0 at 005764d3
;   sound_sndmain.cpp_enableSoundSystem_FUN_00574ee0 at 00574ef2
;
; Referenced Globals:
;   undefined4 DAT_02c8065c
;
; *****************************************************************************

section .text

    MOV EAX,[0x02c8065c]                ; 005735f0 | DAT_02c8065c
        ;   Label: sound_sndmain.cpp_isSoundMuted_FUN_005735f0
    RET                                 ; 005735f5

