; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hpbox_cpp_staticInit_FUN_005ac740(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bc9b0                       ; 005ac740
        ;   Label: core_hpbox.cpp_staticInit_FUN_005ac740
    PUSH 0x1                            ; 005ac745
    PUSH 0x61ecdc                       ; 005ac747
    PUSH 0x5ac770                       ; 005ac74c
    PUSH 0x5f0e8b                       ; 005ac751
    PUSH 0x266895c                      ; 005ac756
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005ac75b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005ac760
    RET                                 ; 005ac763

