; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_pickup_FUN_004144c0(CBattery *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004144c0
        ;   Label: core_battery.cpp_CBattery_pickup_FUN_004144c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004144c4
    MOV dword ptr [EDX + 0x2d4],EAX     ; 004144c8
    RET                                 ; 004144ce

