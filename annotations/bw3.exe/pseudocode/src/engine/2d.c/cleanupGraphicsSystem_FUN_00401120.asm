; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_cleanupGraphicsSystem_FUN_00401120(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004e4330 at 004e43a9
;   core_main.c_FUN_004e4c70 at 004e4ccd
;
; Called Functions:
;   wincore_wddvmem.cpp_FUN_00579a60
;
; *****************************************************************************

section .text

    CALL wincore_wddvmem.cpp_FUN_00579a60 ; 00401120
        ;   XREF to: 00579a60 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00579a60()
        ;   Label: engine_2d.c_cleanupGraphicsSystem_FUN_00401120
    RET                                 ; 00401125

