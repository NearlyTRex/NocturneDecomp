; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spike_cpp_staticInit_FUN_00582f30(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00582f30
        ;   Label: core_spike.cpp_staticInit_FUN_00582f30
    PUSH 0x1                            ; 00582f35
    PUSH 0x6258e4                       ; 00582f37
    PUSH 0x582f60                       ; 00582f3c
    PUSH 0x5f61e8                       ; 00582f41
    PUSH 0x2c834d8                      ; 00582f46
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00582f4b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00582f50
    RET                                 ; 00582f53

