; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_belling_cpp_staticInit_FUN_005a8f20(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x26685c8                      ; 005a8f20
        ;   Label: core_belling.cpp_staticInit_FUN_005a8f20
    PUSH 0x1                            ; 005a8f25
    PUSH 0x61ec7c                       ; 005a8f27
    PUSH 0x5a8f50                       ; 005a8f2c
    PUSH 0x5f0867                       ; 005a8f31
    PUSH 0x2668830                      ; 005a8f36
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a8f3b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a8f40
    RET                                 ; 005a8f43

