; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_vehicle.cpp_staticInit_FUN_005e78d0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CVehicle_00656dae
;   int g_CVehicleClassVersion = 0x3
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CVehicleClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 005e78d0 | g_CDemonActorClassInfo
        ;   Label: core_vehicle.cpp_staticInit_FUN_005e78d0
    PUSH 0x3                            ; 005e78d5
    PUSH 0x68447c                       ; 005e78d7 | g_CVehicleClassVersion
    PUSH 0x5e7900                       ; 005e78dc
    PUSH 0x656dae                       ; 005e78e1 | = "CVehicle"
    PUSH 0x3f87564                      ; 005e78e6 | g_CVehicleClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005e78eb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005e78f0
    RET                                 ; 005e78f3

