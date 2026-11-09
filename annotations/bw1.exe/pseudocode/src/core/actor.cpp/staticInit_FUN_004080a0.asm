; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_staticInit_FUN_004080a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 004080a0
        ;   Label: core_actor.cpp_staticInit_FUN_004080a0
    PUSH 0x7                            ; 004080a2
    PUSH 0x6106b8                       ; 004080a4
    PUSH 0x0                            ; 004080a9
    PUSH 0x5d2389                       ; 004080ab
    PUSH 0x7c2ff8                       ; 004080b0
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004080b5
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004080ba
    RET                                 ; 004080bd

