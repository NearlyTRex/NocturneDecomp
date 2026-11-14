; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_staticInit_FUN_00445b70(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00445b70
        ;   Label: core_crate.cpp_staticInit_FUN_00445b70
    PUSH 0x2                            ; 00445b75
    PUSH 0x5f1770                       ; 00445b77
    PUSH 0x445ba0                       ; 00445b7c
    PUSH 0x5b99d6                       ; 00445b81
    PUSH 0x7f8f90                       ; 00445b86
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00445b8b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00445b90
    RET                                 ; 00445b93

