; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sentinel_cpp_staticInit_FUN_0052a6c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 0052a6c0
        ;   Label: core_sentinel.cpp_staticInit_FUN_0052a6c0
    PUSH 0x2                            ; 0052a6c5
    PUSH 0x61b550                       ; 0052a6c7
    PUSH 0x52a6f0                       ; 0052a6cc
    PUSH 0x5e5295                       ; 0052a6d1
    PUSH 0x1e6617c                      ; 0052a6d6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0052a6db
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0052a6e0
    RET                                 ; 0052a6e3

