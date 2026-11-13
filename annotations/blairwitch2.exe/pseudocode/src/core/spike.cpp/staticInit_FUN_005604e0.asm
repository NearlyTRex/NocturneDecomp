; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spike_cpp_staticInit_FUN_005604e0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 005604e0
        ;   Label: core_spike.cpp_staticInit_FUN_005604e0
    PUSH 0x1                            ; 005604e5
    PUSH 0x61e294                       ; 005604e7
    PUSH 0x560510                       ; 005604ec
    PUSH 0x5eafe4                       ; 005604f1
    PUSH 0x264bd08                      ; 005604f6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005604fb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00560500
    RET                                 ; 00560503

