; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_battery_cpp_staticInit_FUN_0040f440(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0040f440
        ;   Label: core_battery.cpp_staticInit_FUN_0040f440
    PUSH 0x1                            ; 0040f445
    PUSH 0x5f0bec                       ; 0040f447
    PUSH 0x40f470                       ; 0040f44c
    PUSH 0x5b62d6                       ; 0040f451
    PUSH 0x7dfe90                       ; 0040f456
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0040f45b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040f460
    RET                                 ; 0040f463

