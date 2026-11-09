; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_resetGraphicsSystem_FUN_00402ac0(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_setGameRes_FUN_004cf430 at 004cf4bc
;
; Called Functions:
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ac830
;
; *****************************************************************************

section .text

    CALL wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ac830 ; 00402ac0
        ;   XREF to: 005ac830 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ac830()
        ;   Label: engine_2d.c_resetGraphicsSystem_FUN_00402ac0
    RET                                 ; 00402ac5

