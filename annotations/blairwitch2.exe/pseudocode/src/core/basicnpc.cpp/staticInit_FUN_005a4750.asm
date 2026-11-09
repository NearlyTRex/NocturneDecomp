; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_basicnpc_cpp_staticInit_FUN_005a4750(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005a4750
        ;   Label: core_basicnpc.cpp_staticInit_FUN_005a4750
    PUSH 0x1                            ; 005a4755
    PUSH 0x61eb58                       ; 005a4757
    PUSH 0x5a4780                       ; 005a475c
    PUSH 0x5f03ea                       ; 005a4761
    PUSH 0x26685c8                      ; 005a4766
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a476b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a4770
    RET                                 ; 005a4773

