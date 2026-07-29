; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_pickup_FUN_00414e30(CBattery *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00414e30
        ;   Label: core_battery.cpp_CBattery_pickup_FUN_00414e30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00414e34
    MOV dword ptr [EDX + 0x2cc],EAX     ; 00414e38
    RET                                 ; 00414e3e

