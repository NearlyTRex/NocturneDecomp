; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_villain_cpp_staticInit_FUN_005a5ae0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x26685c8                      ; 005a5ae0
        ;   Label: core_villain.cpp_staticInit_FUN_005a5ae0
    PUSH 0x1                            ; 005a5ae5
    PUSH 0x61eb84                       ; 005a5ae7
    PUSH 0x5a5b10                       ; 005a5aec
    PUSH 0x5f05e2                       ; 005a5af1
    PUSH 0x2668640                      ; 005a5af6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a5afb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a5b00
    RET                                 ; 005a5b03

