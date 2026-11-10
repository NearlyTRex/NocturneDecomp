; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00402ad0(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b60c0 at 004b60c4
;
; Called Functions:
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_00588ff0
;
; *****************************************************************************

section .text

    CALL wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_00588ff0 ; 00402ad0
        ;   XREF to: 00588ff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_00588ff0()
        ;   Label: engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0
    RET                                 ; 00402ad5

