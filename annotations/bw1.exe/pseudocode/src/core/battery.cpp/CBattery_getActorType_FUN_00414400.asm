; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_battery_cpp_CBattery_getActorType_FUN_00414400(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatteryClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c3824                    ; 00414400 | g_CBatteryClassInfo
        ;   Label: core_battery.cpp_CBattery_getActorType_FUN_00414400
    RET                                 ; 00414405

