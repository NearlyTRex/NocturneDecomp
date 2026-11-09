; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_staticInit_FUN_004928a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004928a0
        ;   Label: core_filmreel.cpp_staticInit_FUN_004928a0
    PUSH 0x2                            ; 004928a5
    PUSH 0x614c48                       ; 004928a7
    PUSH 0x4928f0                       ; 004928ac
    PUSH 0x5d5245                       ; 004928b1
    PUSH 0x1c3de3c                      ; 004928b6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004928bb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004928c0
    PUSH 0x1510ddc                      ; 004928c3
    PUSH 0x2                            ; 004928c8
    PUSH 0x614c4c                       ; 004928ca
    PUSH 0x492be0                       ; 004928cf
    PUSH 0x5d524f                       ; 004928d4
    PUSH 0x1c3de78                      ; 004928d9
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004928de
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004928e3
    RET                                 ; 004928e6

