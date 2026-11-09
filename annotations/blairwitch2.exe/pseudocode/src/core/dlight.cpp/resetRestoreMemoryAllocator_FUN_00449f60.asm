; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00449f60(void)
;
;
; XREF[3]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052ded0
;   core_set.cpp_FUN_0052d980 at 0052d9aa
;   core_set.cpp_FUN_005308e0 at 00530950
;
; Referenced Globals:
;   undefined4 DAT_01b11db0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00449f60
        ;   Label: core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00449f60
    MOV dword ptr [0x01b11db0],EDX      ; 00449f62 | DAT_01b11db0
    RET                                 ; 00449f68

