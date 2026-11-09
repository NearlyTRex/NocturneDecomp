; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_resetGraphicsSystem_FUN_00402ac0(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_setGameRes_FUN_004b7de0 at 004b7e6c
;
; Called Functions:
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_0057a0e0
;
; *****************************************************************************

section .text

    CALL wincore_wddvmem.cpp_resetGraphicsSystem_FUN_0057a0e0 ; 00402ac0
        ;   XREF to: 0057a0e0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_resetGraphicsSystem_FUN_0057a0e0()
        ;   Label: engine_2d.c_resetGraphicsSystem_FUN_00402ac0
    RET                                 ; 00402ac5

