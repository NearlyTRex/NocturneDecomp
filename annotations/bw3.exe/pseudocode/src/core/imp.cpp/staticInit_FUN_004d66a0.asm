; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_staticInit_FUN_004d66a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 004d66a0
        ;   Label: core_imp.cpp_staticInit_FUN_004d66a0
    PUSH 0x1                            ; 004d66a5
    PUSH 0x600088                       ; 004d66a7
    PUSH 0x4d66d0                       ; 004d66ac
    PUSH 0x5c5450                       ; 004d66b1
    PUSH 0x1d5bc3c                      ; 004d66b6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004d66bb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d66c0
    RET                                 ; 004d66c3

