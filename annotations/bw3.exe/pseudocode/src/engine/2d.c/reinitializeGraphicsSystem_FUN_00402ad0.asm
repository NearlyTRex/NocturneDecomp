; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00402ad0(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0 at 004b7ee4
;
; Called Functions:
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_0057a2f0
;
; *****************************************************************************

section .text

    CALL wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_0057a2f0 ; 00402ad0
        ;   XREF to: 0057a2f0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_0057a2f0()
        ;   Label: engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0
    RET                                 ; 00402ad5

