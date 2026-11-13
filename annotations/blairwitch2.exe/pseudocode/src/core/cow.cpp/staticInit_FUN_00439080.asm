; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_staticInit_FUN_00439080(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 00439080
        ;   Label: core_cow.cpp_staticInit_FUN_00439080
    PUSH 0x2                            ; 00439085
    PUSH 0x609f44                       ; 00439087
    PUSH 0x4390b0                       ; 0043908c
    PUSH 0x5ce082                       ; 00439091
    PUSH 0x7c25fc                       ; 00439096
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0043909b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004390a0
    RET                                 ; 004390a3

