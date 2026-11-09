; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_cleanupGraphicsSystem_FUN_00401120(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004e4500 at 004e4579
;   core_main.c_FUN_004e4e20 at 004e4e7d
;
; Called Functions:
;   wincore_wddvmem.cpp_FUN_00588900
;
; *****************************************************************************

section .text

    CALL wincore_wddvmem.cpp_FUN_00588900 ; 00401120
        ;   XREF to: 00588900 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00588900()
        ;   Label: engine_2d.c_cleanupGraphicsSystem_FUN_00401120
    RET                                 ; 00401125

