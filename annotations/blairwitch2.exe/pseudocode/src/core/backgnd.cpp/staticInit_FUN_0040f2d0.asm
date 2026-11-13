; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_backgnd_cpp_staticInit_FUN_0040f2d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0040f2d0
        ;   Label: core_backgnd.cpp_staticInit_FUN_0040f2d0
    PUSH 0x3                            ; 0040f2d5
    PUSH 0x6097f0                       ; 0040f2d7
    PUSH 0x40f300                       ; 0040f2dc
    PUSH 0x5cb3b0                       ; 0040f2e1
    PUSH 0x7bc45c                       ; 0040f2e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0040f2eb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040f2f0
    RET                                 ; 0040f2f3

