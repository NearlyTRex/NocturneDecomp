; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_styler_cpp_staticInit_FUN_0059d6f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 0059d6f0
        ;   Label: core_styler.cpp_staticInit_FUN_0059d6f0
    PUSH 0x2                            ; 0059d6f5
    PUSH 0x607478                       ; 0059d6f7
    PUSH 0x59d720                       ; 0059d6fc
    PUSH 0x5d9e99                       ; 0059d701
    PUSH 0x2d24cb8                      ; 0059d706
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0059d70b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0059d710
    RET                                 ; 0059d713

