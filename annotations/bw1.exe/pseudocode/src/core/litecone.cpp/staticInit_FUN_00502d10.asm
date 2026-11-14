; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_litecone_cpp_staticInit_FUN_00502d10(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00502d10
        ;   Label: core_litecone.cpp_staticInit_FUN_00502d10
    PUSH 0x2                            ; 00502d15
    PUSH 0x61f350                       ; 00502d17
    PUSH 0x502d40                       ; 00502d1c
    PUSH 0x5e7042                       ; 00502d21
    PUSH 0x1d1c2bc                      ; 00502d26
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00502d2b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00502d30
    RET                                 ; 00502d33

