; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_staticInit_FUN_004080e0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 004080e0
        ;   Label: core_actor.cpp_staticInit_FUN_004080e0
    PUSH 0x7                            ; 004080e2
    PUSH 0x5f0988                       ; 004080e4
    PUSH 0x0                            ; 004080e9
    PUSH 0x5b53c1                       ; 004080eb
    PUSH 0x7df978                       ; 004080f0
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004080f5
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004080fa
    RET                                 ; 004080fd

