; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_health_cpp_staticInit_FUN_004ea2d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004ea2d0
        ;   Label: core_health.cpp_staticInit_FUN_004ea2d0
    PUSH 0x3                            ; 004ea2d5
    PUSH 0x61ef08                       ; 004ea2d7
    PUSH 0x4ea300                       ; 004ea2dc
    PUSH 0x5e45a5                       ; 004ea2e1
    PUSH 0x1d06a58                      ; 004ea2e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004ea2eb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ea2f0
    RET                                 ; 004ea2f3

