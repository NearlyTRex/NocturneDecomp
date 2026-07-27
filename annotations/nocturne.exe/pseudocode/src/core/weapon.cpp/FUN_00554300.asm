; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weapon_cpp_FUN_00554300(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00554300
        ;   Label: core_weapon.cpp_FUN_00554300
    MOV EAX,dword ptr [ESP + 0x8]       ; 00554304
    MOV dword ptr [EDX + 0x2fc],EAX     ; 00554308
    RET                                 ; 0055430e

