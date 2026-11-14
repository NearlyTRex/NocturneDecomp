; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0045c470(void)
;
;
; XREF[3]:
;   core_set.cpp_CDemonSet_clearLights_FUN_00537520 at 00537590
;   core_set.cpp_CDemonSet_initScene_FUN_00534420 at 0053444a
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534970
;
; Referenced Globals:
;   undefined4 DAT_01b49bdc
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0045c470
        ;   Label: core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0045c470
    MOV dword ptr [0x01b49bdc],EDX      ; 0045c472 | DAT_01b49bdc
    RET                                 ; 0045c478

