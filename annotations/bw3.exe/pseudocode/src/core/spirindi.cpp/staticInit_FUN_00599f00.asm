; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spirindi_cpp_staticInit_FUN_00599f00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1dd6a44                      ; 00599f00
        ;   Label: core_spirindi.cpp_staticInit_FUN_00599f00
    PUSH 0x1                            ; 00599f05
    PUSH 0x607430                       ; 00599f07
    PUSH 0x599f30                       ; 00599f0c
    PUSH 0x5d9a19                       ; 00599f11
    PUSH 0x2d24bd4                      ; 00599f16
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00599f1b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00599f20
    RET                                 ; 00599f23

