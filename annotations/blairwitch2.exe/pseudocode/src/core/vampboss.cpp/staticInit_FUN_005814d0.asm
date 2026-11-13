; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_staticInit_FUN_005814d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 005814d0
        ;   Label: core_vampboss.cpp_staticInit_FUN_005814d0
    PUSH 0x4                            ; 005814d5
    PUSH 0x61e4bc                       ; 005814d7
    PUSH 0x581500                       ; 005814dc
    PUSH 0x5ed984                       ; 005814e1
    PUSH 0x26536d0                      ; 005814e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005814eb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005814f0
    RET                                 ; 005814f3

