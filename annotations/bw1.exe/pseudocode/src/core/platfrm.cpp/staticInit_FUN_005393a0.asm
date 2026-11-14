; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_staticInit_FUN_005393a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 005393a0
        ;   Label: core_platfrm.cpp_staticInit_FUN_005393a0
    PUSH 0xb                            ; 005393a5
    PUSH 0x62283c                       ; 005393a7
    PUSH 0x5393d0                       ; 005393ac
    PUSH 0x5ed40b                       ; 005393b1
    PUSH 0x1e7d3e4                      ; 005393b6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005393bb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005393c0
    RET                                 ; 005393c3

