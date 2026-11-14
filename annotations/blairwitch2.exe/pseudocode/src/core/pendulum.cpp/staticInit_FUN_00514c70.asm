; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_staticInit_FUN_00514c70(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 00514c70
        ;   Label: core_pendulum.cpp_staticInit_FUN_00514c70
    PUSH 0x8                            ; 00514c75
    PUSH 0x61b3a4                       ; 00514c77
    PUSH 0x514ca0                       ; 00514c7c
    PUSH 0x5e19f2                       ; 00514c81
    PUSH 0x1e61438                      ; 00514c86
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00514c8b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00514c90
    RET                                 ; 00514c93

