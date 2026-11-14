; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_staticInit_FUN_00486780(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 00486780
        ;   Label: core_emitter.cpp_staticInit_FUN_00486780
    PUSH 0xe                            ; 00486785
    PUSH 0x61418c                       ; 00486787
    PUSH 0x4867b0                       ; 0048678c
    PUSH 0x5d2b8e                       ; 00486791
    PUSH 0x1c2646c                      ; 00486796
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0048679b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004867a0
    RET                                 ; 004867a3

