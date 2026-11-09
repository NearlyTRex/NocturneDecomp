; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_barrier_cpp_staticInit_FUN_00410c50(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 00410c50
        ;   Label: core_barrier.cpp_staticInit_FUN_00410c50
    PUSH 0x2                            ; 00410c55
    PUSH 0x609850                       ; 00410c57
    PUSH 0x410c80                       ; 00410c5c
    PUSH 0x5cb60f                       ; 00410c61
    PUSH 0x7bc6d4                       ; 00410c66
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00410c6b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00410c70
    RET                                 ; 00410c73

