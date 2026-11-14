; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stone_cpp_staticInit_FUN_005623d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bc9b0                       ; 005623d0
        ;   Label: core_stone.cpp_staticInit_FUN_005623d0
    PUSH 0x1                            ; 005623d5
    PUSH 0x61e2c8                       ; 005623d7
    PUSH 0x562400                       ; 005623dc
    PUSH 0x5eb178                       ; 005623e1
    PUSH 0x264bdc4                      ; 005623e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005623eb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005623f0
    RET                                 ; 005623f3

