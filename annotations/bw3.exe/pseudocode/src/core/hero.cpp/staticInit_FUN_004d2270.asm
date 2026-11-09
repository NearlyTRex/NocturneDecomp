; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_staticInit_FUN_004d2270(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7e2cb4                       ; 004d2270
        ;   Label: core_hero.cpp_staticInit_FUN_004d2270
    PUSH 0xf                            ; 004d2275
    PUSH 0x5fffb8                       ; 004d2277
    PUSH 0x0                            ; 004d227c
    PUSH 0x5c4add                       ; 004d227e
    PUSH 0x1d5ba38                      ; 004d2283
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004d2288
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d228d
    PUSH 0x7df978                       ; 004d2290
    PUSH 0x2                            ; 004d2295
    PUSH 0x5fffbc                       ; 004d2297
    PUSH 0x4d4ab0                       ; 004d229c
    PUSH 0x5c4ae3                       ; 004d22a1
    PUSH 0x1d5ba74                      ; 004d22a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004d22ab
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d22b0
    RET                                 ; 004d22b3

