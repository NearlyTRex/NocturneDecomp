; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_staticInit_FUN_004ce000(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bdc5c                       ; 004ce000
        ;   Label: core_hero.cpp_staticInit_FUN_004ce000
    PUSH 0x11                           ; 004ce005
    PUSH 0x617a5c                       ; 004ce007
    PUSH 0x0                            ; 004ce00c
    PUSH 0x5d99fc                       ; 004ce00e
    PUSH 0x1cedf18                      ; 004ce013
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004ce018
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ce01d
    PUSH 0x7bbff8                       ; 004ce020
    PUSH 0x2                            ; 004ce025
    PUSH 0x617a60                       ; 004ce027
    PUSH 0x4d0910                       ; 004ce02c
    PUSH 0x5d9a02                       ; 004ce031
    PUSH 0x1cedf54                      ; 004ce036
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004ce03b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ce040
    RET                                 ; 004ce043

