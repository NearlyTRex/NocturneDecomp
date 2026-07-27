; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_FUN_0040ef60(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_ammobox.cpp_FUN_0040f1a0 at 0040f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040ef60
        ;   Label: core_ammo.cpp_FUN_0040ef60
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040ef64
    MOV dword ptr [EDX + 0x30c],EAX     ; 0040ef68
    RET                                 ; 0040ef6e

