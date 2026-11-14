; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_staticInit_FUN_00535fc0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00535fc0
        ;   Label: core_pendulum.cpp_staticInit_FUN_00535fc0
    PUSH 0x8                            ; 00535fc5
    PUSH 0x622804                       ; 00535fc7
    PUSH 0x535ff0                       ; 00535fcc
    PUSH 0x5ecc4d                       ; 00535fd1
    PUSH 0x1e7d3a8                      ; 00535fd6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00535fdb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00535fe0
    RET                                 ; 00535fe3

