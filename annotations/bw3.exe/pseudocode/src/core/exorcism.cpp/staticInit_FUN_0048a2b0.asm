; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_exorcism_cpp_staticInit_FUN_0048a2b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 0048a2b0
        ;   Label: core_exorcism.cpp_staticInit_FUN_0048a2b0
    PUSH 0x1                            ; 0048a2b5
    PUSH 0x5fba48                       ; 0048a2b7
    PUSH 0x48a2e0                       ; 0048a2bc
    PUSH 0x5bdd1e                       ; 0048a2c1
    PUSH 0x1c6e320                      ; 0048a2c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0048a2cb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0048a2d0
    RET                                 ; 0048a2d3

