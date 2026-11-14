; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_reset_FUN_0055adb0(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_menu.cpp_FUN_004ee1a0 at 004ee3c9
;   core_menu.cpp_showMainGameMenu_FUN_004ee3f0 at 004ee76c
;   core_sound.cpp_CSound_configure_FUN_0055ac50 at 0055ace0
;
; Called Functions:
;   sound_sndmain.cpp_freeAllSamples_FUN_00551c70
;   sound_sndmain.cpp_resetSoundDevice_FUN_005526b0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005526b0 ; 0055adb0
        ;   XREF to: 005526b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005526b0()
        ;   Label: core_sound.cpp_CSound_reset_FUN_0055adb0
    JMP 0x00551c70                      ; 0055adb5
        ;   XREF to: 00551c70 (UNCONDITIONAL_CALL)

