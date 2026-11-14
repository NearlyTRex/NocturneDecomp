; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_reset_FUN_0057d800(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_menu.cpp_FUN_0050c990 at 0050cc60
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90 at 0050d016
;   core_sound.cpp_CSound_configure_FUN_0057d6a0 at 0057d730
;
; Called Functions:
;   sound_sndmain.cpp_freeAllSamples_FUN_005746a0
;   sound_sndmain.cpp_resetSoundDevice_FUN_005750e0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005750e0 ; 0057d800
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005750e0()
        ;   Label: core_sound.cpp_CSound_reset_FUN_0057d800
    JMP 0x005746a0                      ; 0057d805
        ;   XREF to: 005746a0 (UNCONDITIONAL_CALL)

