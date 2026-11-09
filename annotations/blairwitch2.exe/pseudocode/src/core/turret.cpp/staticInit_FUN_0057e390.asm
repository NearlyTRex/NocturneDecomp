; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_staticInit_FUN_0057e390(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 0057e390
        ;   Label: core_turret.cpp_staticInit_FUN_0057e390
    PUSH 0x2                            ; 0057e395
    PUSH 0x61e494                       ; 0057e397
    PUSH 0x57e3c0                       ; 0057e39c
    PUSH 0x5ed64c                       ; 0057e3a1
    PUSH 0x2653658                      ; 0057e3a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0057e3ab
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0057e3b0
    RET                                 ; 0057e3b3

