; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_staticInit_FUN_005012e0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1cedf18                      ; 005012e0
        ;   Label: core_moloch.cpp_staticInit_FUN_005012e0
    PUSH 0x1                            ; 005012e5
    PUSH 0x6182f8                       ; 005012e7
    PUSH 0x501310                       ; 005012ec
    PUSH 0x5df171                       ; 005012f1
    PUSH 0x1d1c77c                      ; 005012f6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005012fb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00501300
    RET                                 ; 00501303

