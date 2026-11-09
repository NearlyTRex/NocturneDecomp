; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_staticInit_FUN_00594df0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00594df0
        ;   Label: core_teleport.cpp_staticInit_FUN_00594df0
    PUSH 0x1                            ; 00594df5
    PUSH 0x6259bc                       ; 00594df7
    PUSH 0x594e40                       ; 00594dfc
    PUSH 0x5f76a6                       ; 00594e01
    PUSH 0x2c83808                      ; 00594e06
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00594e0b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00594e10
    PUSH 0x7c2ff8                       ; 00594e13
    PUSH 0x1                            ; 00594e18
    PUSH 0x6259c0                       ; 00594e1a
    PUSH 0x594ef0                       ; 00594e1f
    PUSH 0x5f76b4                       ; 00594e24
    PUSH 0x2c83844                      ; 00594e29
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00594e2e
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00594e33
    RET                                 ; 00594e36

