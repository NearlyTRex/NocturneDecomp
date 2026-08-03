; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_battery_cpp_CBattery_getActorType_FUN_00414d70(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatteryActorType_00764674
;
; *****************************************************************************

section .text

    MOV EAX,0x764674                    ; 00414d70 | g_CBatteryActorType_00764674
        ;   Label: core_battery.cpp_CBattery_getActorType_FUN_00414d70
    RET                                 ; 00414d75

