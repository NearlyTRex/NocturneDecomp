; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_staticInit_FUN_00424f20(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 00424f20
        ;   Label: core_bugs.cpp_staticInit_FUN_00424f20
    PUSH 0x1                            ; 00424f25
    PUSH 0x610bb4                       ; 00424f27
    PUSH 0x424f50                       ; 00424f2c
    PUSH 0x5d4ff0                       ; 00424f31
    PUSH 0x7c60e4                       ; 00424f36
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00424f3b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00424f40
    RET                                 ; 00424f43

