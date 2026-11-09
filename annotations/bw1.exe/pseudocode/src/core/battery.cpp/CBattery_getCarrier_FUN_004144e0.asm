; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_battery_cpp_CBattery_getCarrier_FUN_004144e0(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004144e0
        ;   Label: core_battery.cpp_CBattery_getCarrier_FUN_004144e0
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 004144e4
    LEA EAX,[EAX]                       ; 004144ea

