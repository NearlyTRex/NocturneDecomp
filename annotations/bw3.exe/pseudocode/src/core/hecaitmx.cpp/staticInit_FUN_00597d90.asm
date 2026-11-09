; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hecaitmx_cpp_staticInit_FUN_00597d90(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00597d90
        ;   Label: core_hecaitmx.cpp_staticInit_FUN_00597d90
    PUSH 0x1                            ; 00597d95
    PUSH 0x6073d0                       ; 00597d97
    PUSH 0x597dc0                       ; 00597d9c
    PUSH 0x5d96ef                       ; 00597da1
    PUSH 0x2d24ae4                      ; 00597da6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00597dab
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00597db0
    RET                                 ; 00597db3

