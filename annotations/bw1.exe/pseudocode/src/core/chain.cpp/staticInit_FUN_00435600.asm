; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_staticInit_FUN_00435600(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00435600
        ;   Label: core_chain.cpp_staticInit_FUN_00435600
    PUSH 0x4                            ; 00435605
    PUSH 0x610d10                       ; 00435607
    PUSH 0x435630                       ; 0043560c
    PUSH 0x5d5fef                       ; 00435611
    PUSH 0x7c6514                       ; 00435616
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0043561b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00435620
    RET                                 ; 00435623

