; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_battery.cpp_staticInit_FUN_00417e20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBattery_006159bc
;   int g_CBatteryClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CBatteryClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00417e20 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_battery.cpp_staticInit_FUN_00417e20
    PUSH 0x1                            ; 00417e25
    PUSH 0x66e4f0                       ; 00417e27 | int g_CBatteryClassVersion
    PUSH 0x417e50                       ; 00417e2c
    PUSH 0x6159bc                       ; 00417e31 | = "CBattery" | s_CBattery_006159bc = CBattery
    PUSH 0x822824                       ; 00417e36 | CDemonActorType g_CBatteryClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00417e3b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00417e40
    RET                                 ; 00417e43

