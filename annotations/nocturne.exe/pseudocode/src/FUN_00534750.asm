; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534750(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00534750
        ;   Label: FUN_00534750
    PUSH 0x2                            ; 00534755
    PUSH 0x5c0fc4                       ; 00534757
    PUSH 0x534780                       ; 0053475c
    PUSH 0x595172                       ; 00534761
    PUSH 0x2dc9ea8                      ; 00534766
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0053476b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00534770
    RET                                 ; 00534773

