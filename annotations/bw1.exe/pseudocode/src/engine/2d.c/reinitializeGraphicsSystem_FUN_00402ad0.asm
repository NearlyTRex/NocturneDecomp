; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00402ad0(void)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004cf530 at 004cf534
;
; Called Functions:
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005aca40
;
; *****************************************************************************

section .text

    CALL wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005aca40 ; 00402ad0
        ;   XREF to: 005aca40 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005aca40()
        ;   Label: engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0
    RET                                 ; 00402ad5

