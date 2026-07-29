; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_battery_cpp_CBattery_getCarrier_FUN_00414e50(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00414e50
        ;   Label: core_battery.cpp_CBattery_getCarrier_FUN_00414e50
    MOV EAX,dword ptr [EAX + 0x2cc]     ; 00414e54
    LEA EAX,[EAX]                       ; 00414e5a

