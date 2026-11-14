; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_staticInit_FUN_00595680(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 00595680
        ;   Label: core_zombie.cpp_staticInit_FUN_00595680
    PUSH 0xb                            ; 00595685
    PUSH 0x61e998                       ; 00595687
    PUSH 0x595a60                       ; 0059568c
    PUSH 0x5eedf2                       ; 00595691
    PUSH 0x266726c                      ; 00595696
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0059569b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005956a0
    RET                                 ; 005956a3

