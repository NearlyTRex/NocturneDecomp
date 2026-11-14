; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stone_cpp_staticInit_FUN_00584e50(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c505c                       ; 00584e50
        ;   Label: core_stone.cpp_staticInit_FUN_00584e50
    PUSH 0x1                            ; 00584e55
    PUSH 0x625918                       ; 00584e57
    PUSH 0x584e80                       ; 00584e5c
    PUSH 0x5f637c                       ; 00584e61
    PUSH 0x2c83594                      ; 00584e66
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00584e6b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00584e70
    RET                                 ; 00584e73

