; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_pickup_FUN_0040f550(CBattery *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040f550
        ;   Label: core_battery.cpp_CBattery_pickup_FUN_0040f550
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040f554
    MOV dword ptr [EDX + 0x2d4],EAX     ; 0040f558
    RET                                 ; 0040f55e

