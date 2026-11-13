; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_minecar_cpp_staticInit_FUN_00510d90(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1e7d3e4                      ; 00510d90
        ;   Label: core_minecar.cpp_staticInit_FUN_00510d90
    PUSH 0x1                            ; 00510d95
    PUSH 0x61f5b4                       ; 00510d97
    PUSH 0x510dc0                       ; 00510d9c
    PUSH 0x5e8b5a                       ; 00510da1
    PUSH 0x1d22474                      ; 00510da6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00510dab
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00510db0
    RET                                 ; 00510db3

