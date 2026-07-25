; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043c7b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0043c7b0
        ;   Label: FUN_0043c7b0
    PUSH 0x2                            ; 0043c7b5
    PUSH 0x5ad3c4                       ; 0043c7b7
    PUSH 0x43c7e0                       ; 0043c7bc
    PUSH 0x57b41b                       ; 0043c7c1
    PUSH 0x77bd40                       ; 0043c7c6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0043c7cb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0043c7d0
    RET                                 ; 0043c7d3

