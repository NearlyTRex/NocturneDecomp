; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * __cdecl core_battery_cpp_CBattery_getCarrier_FUN_00417f60(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00417f60
        ;   Label: core_battery.cpp_CBattery_getCarrier_FUN_00417f60
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 00417f64
    LEA EAX,[EAX]                       ; 00417f6a

