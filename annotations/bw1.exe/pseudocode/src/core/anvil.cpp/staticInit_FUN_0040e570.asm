; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_anvil_cpp_staticInit_FUN_0040e570(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 0040e570
        ;   Label: core_anvil.cpp_staticInit_FUN_0040e570
    PUSH 0x1                            ; 0040e575
    PUSH 0x6108ac                       ; 0040e577
    PUSH 0x40e5a0                       ; 0040e57c
    PUSH 0x5d3257                       ; 0040e581
    PUSH 0x7c33e4                       ; 0040e586
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0040e58b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040e590
    RET                                 ; 0040e593

