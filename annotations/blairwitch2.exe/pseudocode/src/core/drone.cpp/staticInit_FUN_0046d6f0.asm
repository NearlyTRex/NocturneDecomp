; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drone_cpp_staticInit_FUN_0046d6f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 0046d6f0
        ;   Label: core_drone.cpp_staticInit_FUN_0046d6f0
    PUSH 0x2                            ; 0046d6f5
    PUSH 0x60d1dc                       ; 0046d6f7
    PUSH 0x46d720                       ; 0046d6fc
    PUSH 0x5d1819                       ; 0046d701
    PUSH 0x1bd39c4                      ; 0046d706
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0046d70b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0046d710
    RET                                 ; 0046d713

