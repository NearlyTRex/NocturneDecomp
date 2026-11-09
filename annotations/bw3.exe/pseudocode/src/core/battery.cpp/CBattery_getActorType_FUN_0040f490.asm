; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_battery_cpp_CBattery_getActorType_FUN_0040f490(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatteryClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dfe90                    ; 0040f490 | g_CBatteryClassInfo
        ;   Label: core_battery.cpp_CBattery_getActorType_FUN_0040f490
    RET                                 ; 0040f495

