; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_pickup_FUN_004147d0(CBattery *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004147d0
        ;   Label: core_battery.cpp_CBattery_pickup_FUN_004147d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004147d4
    MOV dword ptr [EDX + 0x430],EAX     ; 004147d8
    RET                                 ; 004147de

