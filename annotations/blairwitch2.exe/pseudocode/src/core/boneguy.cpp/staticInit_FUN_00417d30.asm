; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_staticInit_FUN_00417d30(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 00417d30
        ;   Label: core_boneguy.cpp_staticInit_FUN_00417d30
    PUSH 0x5                            ; 00417d35
    PUSH 0x609924                       ; 00417d37
    PUSH 0x417f20                       ; 00417d3c
    PUSH 0x5cbfba                       ; 00417d41
    PUSH 0x7bc970                       ; 00417d46
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00417d4b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00417d50
    RET                                 ; 00417d53

