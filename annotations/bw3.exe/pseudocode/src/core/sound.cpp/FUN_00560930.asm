; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_FUN_00560930(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_menu.cpp_FUN_004ea280 at 004ea49d
;   core_menu.cpp_FUN_004ea4d0 at 004ea859
;   core_sound.cpp_FUN_005607d0 at 00560860
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00557800
;   sound_sndmain.cpp_resetSoundDevice_FUN_00558250
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00558250 ; 00560930
        ;   XREF to: 00558250 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_00558250()
        ;   Label: core_sound.cpp_FUN_00560930
    JMP 0x00557800                      ; 00560935
        ;   XREF to: 00557800 (UNCONDITIONAL_CALL)

