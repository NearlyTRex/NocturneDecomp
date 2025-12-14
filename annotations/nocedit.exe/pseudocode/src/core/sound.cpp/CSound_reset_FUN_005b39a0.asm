; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_sound.cpp_CSound_reset_FUN_005b39a0(CSound * this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 005132c0
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512f13
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b38c0
;
; Called Functions:
;   sound_sndmain.cpp_freeAllSamples_FUN_005aa660
;   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 005b39a0
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
        ;   Label: core_sound.cpp_CSound_reset_FUN_005b39a0
    JMP 0x005aa660                      ; 005b39a5
        ;   XREF to: 005aa660 (UNCONDITIONAL_CALL)

