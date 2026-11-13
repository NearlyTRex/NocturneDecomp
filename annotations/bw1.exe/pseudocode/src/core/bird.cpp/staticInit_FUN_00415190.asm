; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bird_cpp_staticInit_FUN_00415190(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c6344                       ; 00415190
        ;   Label: core_bird.cpp_staticInit_FUN_00415190
    PUSH 0x1                            ; 00415195
    PUSH 0x6109e0                       ; 00415197
    PUSH 0x4151c0                       ; 0041519c
    PUSH 0x5d3c8d                       ; 004151a1
    PUSH 0x7c3910                       ; 004151a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004151ab
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004151b0
    RET                                 ; 004151b3

