; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_staticInit_FUN_004146c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004146c0
        ;   Label: core_battery.cpp_staticInit_FUN_004146c0
    PUSH 0x1                            ; 004146c5
    PUSH 0x6098a0                       ; 004146c7
    PUSH 0x4146f0                       ; 004146cc
    PUSH 0x5cbc16                       ; 004146d1
    PUSH 0x7bc824                       ; 004146d6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004146db
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004146e0
    RET                                 ; 004146e3

