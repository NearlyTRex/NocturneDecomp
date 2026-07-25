; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043aff0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1e42894                      ; 0043aff0
        ;   Label: FUN_0043aff0
    PUSH 0x2                            ; 0043aff5
    PUSH 0x5ad380                       ; 0043aff7
    PUSH 0x43b020                       ; 0043affc
    PUSH 0x57b1ca                       ; 0043b001
    PUSH 0x77bcc8                       ; 0043b006
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0043b00b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0043b010
    RET                                 ; 0043b013

