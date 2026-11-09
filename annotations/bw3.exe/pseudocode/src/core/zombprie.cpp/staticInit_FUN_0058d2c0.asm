; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombprie_cpp_staticInit_FUN_0058d2c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 0058d2c0
        ;   Label: core_zombprie.cpp_staticInit_FUN_0058d2c0
    PUSH 0x7                            ; 0058d2c5
    PUSH 0x607344                       ; 0058d2c7
    PUSH 0x58d4b0                       ; 0058d2cc
    PUSH 0x5d89d8                       ; 0058d2d1
    PUSH 0x2d249a0                      ; 0058d2d6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0058d2db
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0058d2e0
    RET                                 ; 0058d2e3

