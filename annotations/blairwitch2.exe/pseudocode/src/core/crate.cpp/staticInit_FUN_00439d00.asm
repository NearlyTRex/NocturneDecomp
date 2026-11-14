; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_staticInit_FUN_00439d00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 00439d00
        ;   Label: core_crate.cpp_staticInit_FUN_00439d00
    PUSH 0x2                            ; 00439d05
    PUSH 0x609f5c                       ; 00439d07
    PUSH 0x439d30                       ; 00439d0c
    PUSH 0x5ce1b3                       ; 00439d11
    PUSH 0x7c2638                       ; 00439d16
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00439d1b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00439d20
    RET                                 ; 00439d23

