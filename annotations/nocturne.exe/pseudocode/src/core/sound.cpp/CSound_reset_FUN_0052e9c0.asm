; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_reset_FUN_0052e9c0(void)
;
;
; XREF[3]:
;   core_menu.cpp_FUN_004d23d0 at 004d2705
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d23a3
;   core_sound.cpp_CSound_configure_FUN_0052e850 at 0052e8e0
;
; Called Functions:
;   sound_sndmain.cpp_freeAllSamples_FUN_00527c30
;   sound_sndmain.cpp_resetSoundDevice_FUN_00528080
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00528080 ; 0052e9c0
        ;   XREF to: 00528080 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_resetSoundDevice_FUN_00528080()
        ;   Label: core_sound.cpp_CSound_reset_FUN_0052e9c0
    JMP 0x00527c30                      ; 0052e9c5
        ;   XREF to: 00527c30 (UNCONDITIONAL_CALL)

