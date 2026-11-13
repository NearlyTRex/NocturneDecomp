; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_barrier_cpp_staticInit_FUN_004107d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004107d0
        ;   Label: core_barrier.cpp_staticInit_FUN_004107d0
    PUSH 0x2                            ; 004107d5
    PUSH 0x610954                       ; 004107d7
    PUSH 0x410800                       ; 004107dc
    PUSH 0x5d357a                       ; 004107e1
    PUSH 0x7c36d4                       ; 004107e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004107eb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004107f0
    RET                                 ; 004107f3

