; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_staticInit_FUN_00414d20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBattery_00578d57
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00414d20
        ;   Label: core_battery.cpp_staticInit_FUN_00414d20
    PUSH 0x1                            ; 00414d25
    PUSH 0x5acfd0                       ; 00414d27
    PUSH 0x414d50                       ; 00414d2c
    PUSH 0x578d57                       ; 00414d31 | = "CBattery"
    PUSH 0x764674                       ; 00414d36
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00414d3b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00414d40
    RET                                 ; 00414d43

