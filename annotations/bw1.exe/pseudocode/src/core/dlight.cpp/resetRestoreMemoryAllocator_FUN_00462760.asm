; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00462760(void)
;
;
; XREF[3]:
;   core_set.cpp_CDemonSet_clearLights_FUN_00551b90 at 00551c00
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054ec8a
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f1b0
;
; Referenced Globals:
;   undefined4 DAT_01b2d370
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00462760
        ;   Label: core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00462760
    MOV dword ptr [0x01b2d370],EDX      ; 00462762 | DAT_01b2d370
    RET                                 ; 00462768

