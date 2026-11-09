; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_battery_cpp_staticInit_FUN_004143b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004143b0
        ;   Label: core_battery.cpp_staticInit_FUN_004143b0
    PUSH 0x1                            ; 004143b5
    PUSH 0x6109a4                       ; 004143b7
    PUSH 0x4143e0                       ; 004143bc
    PUSH 0x5d3b91                       ; 004143c1
    PUSH 0x7c3824                       ; 004143c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004143cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004143d0
    RET                                 ; 004143d3

