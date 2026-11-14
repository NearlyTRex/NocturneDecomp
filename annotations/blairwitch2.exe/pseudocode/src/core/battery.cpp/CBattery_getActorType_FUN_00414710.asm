; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_battery_cpp_CBattery_getActorType_FUN_00414710(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatteryClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc824                    ; 00414710 | g_CBatteryClassInfo
        ;   Label: core_battery.cpp_CBattery_getActorType_FUN_00414710
    RET                                 ; 00414715

