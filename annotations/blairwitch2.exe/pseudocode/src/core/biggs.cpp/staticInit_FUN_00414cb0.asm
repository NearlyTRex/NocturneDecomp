; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_staticInit_FUN_00414cb0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 00414cb0
        ;   Label: core_biggs.cpp_staticInit_FUN_00414cb0
    PUSH 0x1                            ; 00414cb5
    PUSH 0x6098c8                       ; 00414cb7
    PUSH 0x414ce0                       ; 00414cbc
    PUSH 0x5cbc85                       ; 00414cc1
    PUSH 0x7bc8cc                       ; 00414cc6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00414ccb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00414cd0
    RET                                 ; 00414cd3

