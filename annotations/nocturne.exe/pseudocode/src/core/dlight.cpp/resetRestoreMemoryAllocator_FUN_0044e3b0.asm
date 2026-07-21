; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0(void)
;
;
; XREF[3]:
;   FUN_0050ad20 at 0050ad90
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 005084ea
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 005089d0
;
; Referenced Globals:
;   undefined4 DAT_01ab99ec
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0044e3b0
        ;   Label: core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0044e3b0
    MOV dword ptr [0x01ab99ec],EDX      ; 0044e3b2 | DAT_01ab99ec
    RET                                 ; 0044e3b8

