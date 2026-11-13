; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_staticInit_FUN_005094f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 005094f0
        ;   Label: core_melee.cpp_staticInit_FUN_005094f0
    PUSH 0x7                            ; 005094f5
    PUSH 0x61f43c                       ; 005094f7
    PUSH 0x509520                       ; 005094fc
    PUSH 0x5e785e                       ; 00509501
    PUSH 0x1d1e2a4                      ; 00509506
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0050950b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00509510
    RET                                 ; 00509513

