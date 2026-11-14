; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_staticInit_FUN_00448fb0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00448fb0
        ;   Label: core_crate.cpp_staticInit_FUN_00448fb0
    PUSH 0x2                            ; 00448fb5
    PUSH 0x6111a4                       ; 00448fb7
    PUSH 0x448fe0                       ; 00448fbc
    PUSH 0x5d731f                       ; 00448fc1
    PUSH 0x7dc6a0                       ; 00448fc6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00448fcb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00448fd0
    RET                                 ; 00448fd3

