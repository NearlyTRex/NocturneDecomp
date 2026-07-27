; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_battery_cpp_FUN_00414e30(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00414e30
        ;   Label: core_battery.cpp_FUN_00414e30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00414e34
    MOV dword ptr [EDX + 0x2cc],EAX     ; 00414e38
    RET                                 ; 00414e3e

