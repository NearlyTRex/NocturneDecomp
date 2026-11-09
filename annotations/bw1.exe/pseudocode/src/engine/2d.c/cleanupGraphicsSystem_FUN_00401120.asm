; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_cleanupGraphicsSystem_FUN_00401120(void)
;
;
; XREF[2]:
;   core_main.c_FUN_005030e0 at 00503159
;   core_main.c_FUN_00503a30 at 00503a8d
;
; Called Functions:
;   wincore_wddvmem.cpp_FUN_005ac1b0
;
; *****************************************************************************

section .text

    CALL wincore_wddvmem.cpp_FUN_005ac1b0 ; 00401120
        ;   XREF to: 005ac1b0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005ac1b0()
        ;   Label: engine_2d.c_cleanupGraphicsSystem_FUN_00401120
    RET                                 ; 00401125

