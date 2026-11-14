; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_litecone_cpp_staticInit_FUN_004e3f60(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004e3f60
        ;   Label: core_litecone.cpp_staticInit_FUN_004e3f60
    PUSH 0x2                            ; 004e3f65
    PUSH 0x6002ec                       ; 004e3f67
    PUSH 0x4e3f90                       ; 004e3f6c
    PUSH 0x5c6b07                       ; 004e3f71
    PUSH 0x1d70c98                      ; 004e3f76
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004e3f7b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e3f80
    RET                                 ; 004e3f83

