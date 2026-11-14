; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_litecone_cpp_staticInit_FUN_004e4130(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004e4130
        ;   Label: core_litecone.cpp_staticInit_FUN_004e4130
    PUSH 0x2                            ; 004e4135
    PUSH 0x617e68                       ; 004e4137
    PUSH 0x4e4160                       ; 004e413c
    PUSH 0x5dc0fa                       ; 004e4141
    PUSH 0x1d03564                      ; 004e4146
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004e414b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e4150
    RET                                 ; 004e4153

