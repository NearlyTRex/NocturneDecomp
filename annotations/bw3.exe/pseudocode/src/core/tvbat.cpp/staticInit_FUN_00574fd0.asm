; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_staticInit_FUN_00574fd0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00574fd0
        ;   Label: core_tvbat.cpp_staticInit_FUN_00574fd0
    PUSH 0x5                            ; 00574fd5
    PUSH 0x606ae4                       ; 00574fd7
    PUSH 0x575000                       ; 00574fdc
    PUSH 0x5d6f17                       ; 00574fe1
    PUSH 0x2cfd8c4                      ; 00574fe6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00574feb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00574ff0
    RET                                 ; 00574ff3

