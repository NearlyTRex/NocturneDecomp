; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_battery_cpp_CBattery_getCarrier_FUN_0040f570(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040f570
        ;   Label: core_battery.cpp_CBattery_getCarrier_FUN_0040f570
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 0040f574
    LEA EAX,[EAX]                       ; 0040f57a

