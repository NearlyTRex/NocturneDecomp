; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_schngeis_cpp_staticInit_FUN_005a2f50(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005a2f50
        ;   Label: core_schngeis.cpp_staticInit_FUN_005a2f50
    PUSH 0x2                            ; 005a2f55
    PUSH 0x61eb24                       ; 005a2f57
    PUSH 0x5a2f80                       ; 005a2f5c
    PUSH 0x5f0056                       ; 005a2f61
    PUSH 0x2668550                      ; 005a2f66
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a2f6b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a2f70
    RET                                 ; 005a2f73

