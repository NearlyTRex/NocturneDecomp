; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weaver_cpp_staticInit_FUN_005a5e10(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x26685c8                      ; 005a5e10
        ;   Label: core_weaver.cpp_staticInit_FUN_005a5e10
    PUSH 0x1                            ; 005a5e15
    PUSH 0x61eb98                       ; 005a5e17
    PUSH 0x5a5e40                       ; 005a5e1c
    PUSH 0x5f0626                       ; 005a5e21
    PUSH 0x266867c                      ; 005a5e26
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a5e2b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a5e30
    RET                                 ; 005a5e33

