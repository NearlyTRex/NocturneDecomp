; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_staticInit_FUN_00568cd0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00568cd0
        ;   Label: core_teleport.cpp_staticInit_FUN_00568cd0
    PUSH 0x1                            ; 00568cd5
    PUSH 0x6068b4                       ; 00568cd7
    PUSH 0x568d20                       ; 00568cdc
    PUSH 0x5d5d02                       ; 00568ce1
    PUSH 0x2cf62a4                      ; 00568ce6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00568ceb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00568cf0
    PUSH 0x7df978                       ; 00568cf3
    PUSH 0x1                            ; 00568cf8
    PUSH 0x6068b8                       ; 00568cfa
    PUSH 0x568dd0                       ; 00568cff
    PUSH 0x5d5d10                       ; 00568d04
    PUSH 0x2cf62e0                      ; 00568d09
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00568d0e
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00568d13
    RET                                 ; 00568d16

