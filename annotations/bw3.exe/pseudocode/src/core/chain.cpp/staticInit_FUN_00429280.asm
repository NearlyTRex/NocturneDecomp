; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_staticInit_FUN_00429280(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00429280
        ;   Label: core_chain.cpp_staticInit_FUN_00429280
    PUSH 0x4                            ; 00429285
    PUSH 0x5f0efc                       ; 00429287
    PUSH 0x4292b0                       ; 0042928c
    PUSH 0x5b7ecf                       ; 00429291
    PUSH 0x7e2a94                       ; 00429296
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0042929b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004292a0
    RET                                 ; 004292a3

