; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_battery_cpp_FUN_00417f40(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00417f40
        ;   Label: core_battery.cpp_FUN_00417f40
    MOV EAX,dword ptr [ESP + 0x8]       ; 00417f44
    MOV dword ptr [EDX + 0x2d4],EAX     ; 00417f48
    RET                                 ; 00417f4e

