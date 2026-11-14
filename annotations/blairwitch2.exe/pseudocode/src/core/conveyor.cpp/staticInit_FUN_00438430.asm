; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_conveyor_cpp_staticInit_FUN_00438430(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1e61474                      ; 00438430
        ;   Label: core_conveyor.cpp_staticInit_FUN_00438430
    PUSH 0x2                            ; 00438435
    PUSH 0x609f18                       ; 00438437
    PUSH 0x438460                       ; 0043843c
    PUSH 0x5cdf82                       ; 00438441
    PUSH 0x7c25c0                       ; 00438446
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0043844b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00438450
    RET                                 ; 00438453

