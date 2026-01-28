; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dlight_cpp_resetRestoreMemoryAllocator_FUN_004729c0(void)
;
;
; XREF[3]:
;   core_set.cpp_CDemonSet_FUN_0056d2d0 at 0056d350
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056aa3a
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056af30
;
; Referenced Globals:
;   uint g_ShadowRestoreAllocator
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004729c0
        ;   Label: core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
    MOV dword ptr [0x026a580c],EDX      ; 004729c2 | g_ShadowRestoreAllocator
    RET                                 ; 004729c8

