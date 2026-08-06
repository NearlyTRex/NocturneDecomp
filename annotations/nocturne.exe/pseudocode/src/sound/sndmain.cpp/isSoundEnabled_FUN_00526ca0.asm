; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0(void)
;
;
; XREF[8]:
;   core_game.cpp_CGame_FUN_0049f930 at 0049fa81
;   core_menu.cpp_FUN_004d23d0 at 004d26ad
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1393
;   core_sound.cpp_CSound_configure_FUN_0052e850 at 0052e8ce
;   core_sound.cpp_playSfxInternal_FUN_0052d120 at 0052d12f
;   sound_sndmain.cpp_enableSoundSystem_FUN_00527e40 at 00527e52
;   sound_sndmain.cpp_readIni_FUN_005289f0 at 00528b69
;   sound_sndmain.cpp_writeIni_FUN_00528c80 at 00528d9f
;
; Referenced Globals:
;   undefined4 DAT_02dc8324
;
; *****************************************************************************

section .text

    MOV EAX,[0x02dc8324]                ; 00526ca0 | DAT_02dc8324
        ;   Label: sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0
    RET                                 ; 00526ca5

