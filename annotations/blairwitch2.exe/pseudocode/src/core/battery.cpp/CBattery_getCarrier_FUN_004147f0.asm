; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_battery_cpp_CBattery_getCarrier_FUN_004147f0(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004147f0
        ;   Label: core_battery.cpp_CBattery_getCarrier_FUN_004147f0
    MOV EAX,dword ptr [EAX + 0x430]     ; 004147f4
    LEA EAX,[EAX]                       ; 004147fa

