; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_dtor_FUN_0052dd80(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_main.c_displayErrorAndQuit_FUN_004c8440 at 004c84b1
;   core_main.c_finalizeGameSystems_FUN_004c90e0 at 004c934a
;
; Called Functions:
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00527e10
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_shutdownSoundSystem_FUN_00527e10 ; 0052dd80
        ;   XREF to: 00527e10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_shutdownSoundSystem_FUN_00527e10()
        ;   Label: core_sound.cpp_CSound_dtor_FUN_0052dd80
    RET                                 ; 0052dd85

