; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_barrier_cpp_staticInit_FUN_0040ea60(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0040ea60
        ;   Label: core_barrier.cpp_staticInit_FUN_0040ea60
    PUSH 0x2                            ; 0040ea65
    PUSH 0x5f0bc8                       ; 0040ea67
    PUSH 0x40ea90                       ; 0040ea6c
    PUSH 0x5b61d7                       ; 0040ea71
    PUSH 0x7dfe18                       ; 0040ea76
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0040ea7b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040ea80
    RET                                 ; 0040ea83

