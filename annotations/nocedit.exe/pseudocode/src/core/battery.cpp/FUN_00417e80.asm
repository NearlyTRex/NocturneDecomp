; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown CDemonActorType * core_battery_cpp_FUN_00417e80(void)
;
;
; Referenced Globals:
;   CDemonActorType g_CBatteryClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x822824                    ; 00417e80 | g_CBatteryClassInfo
        ;   Label: core_battery.cpp_FUN_00417e80
    RET                                 ; 00417e85

