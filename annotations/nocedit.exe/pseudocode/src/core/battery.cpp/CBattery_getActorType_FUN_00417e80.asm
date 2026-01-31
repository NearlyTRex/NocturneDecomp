; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_battery_cpp_CBattery_getActorType_FUN_00417e80(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatteryClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x822824                    ; 00417e80 | g_CBatteryClassInfo
        ;   Label: core_battery.cpp_CBattery_getActorType_FUN_00417e80
    RET                                 ; 00417e85

