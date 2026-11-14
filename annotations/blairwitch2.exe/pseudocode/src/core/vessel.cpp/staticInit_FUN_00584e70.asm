; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_staticInit_FUN_00584e70(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 00584e70
        ;   Label: core_vessel.cpp_staticInit_FUN_00584e70
    PUSH 0x4                            ; 00584e75
    PUSH 0x61e4f8                       ; 00584e77
    PUSH 0x584ea0                       ; 00584e7c
    PUSH 0x5edda2                       ; 00584e81
    PUSH 0x2653754                      ; 00584e86
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00584e8b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00584e90
    RET                                 ; 00584e93

