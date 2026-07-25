; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044b740(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0044b740
        ;   Label: FUN_0044b740
    PUSH 0x4                            ; 0044b745
    PUSH 0x5ad4bc                       ; 0044b747
    PUSH 0x44b770                       ; 0044b74c
    PUSH 0x57bdf7                       ; 0044b751
    PUSH 0x14b8a1c                      ; 0044b756
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0044b75b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0044b760
    RET                                 ; 0044b763

