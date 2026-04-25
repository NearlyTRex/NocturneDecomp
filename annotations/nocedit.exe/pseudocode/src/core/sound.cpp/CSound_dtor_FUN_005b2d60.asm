; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_dtor_FUN_005b2d60(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_main.c_displayErrorAndQuit_FUN_00506f10 at 00507015
;   core_main.c_finalizeGameSystems_FUN_00508570 at 005087de
;
; Called Functions:
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0 ; 005b2d60
        ;   XREF to: 005aaeb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0()
        ;   Label: core_sound.cpp_CSound_dtor_FUN_005b2d60

