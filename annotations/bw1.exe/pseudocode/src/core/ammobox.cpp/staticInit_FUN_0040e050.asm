; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammobox_cpp_staticInit_FUN_0040e050(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 0040e050
        ;   Label: core_ammobox.cpp_staticInit_FUN_0040e050
    PUSH 0x4                            ; 0040e055
    PUSH 0x610898                       ; 0040e057
    PUSH 0x40e080                       ; 0040e05c
    PUSH 0x5d31b3                       ; 0040e061
    PUSH 0x7c33a8                       ; 0040e066
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0040e06b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040e070
    RET                                 ; 0040e073

