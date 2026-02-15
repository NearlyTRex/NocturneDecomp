; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_pickup_FUN_00417f40(CBattery *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00417f40
        ;   Label: core_battery.cpp_CBattery_pickup_FUN_00417f40
    MOV EAX,dword ptr [ESP + 0x8]       ; 00417f44
    MOV dword ptr [EDX + 0x2d4],EAX     ; 00417f48
    RET                                 ; 00417f4e

