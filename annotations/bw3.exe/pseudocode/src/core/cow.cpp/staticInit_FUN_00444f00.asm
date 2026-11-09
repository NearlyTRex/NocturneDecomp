; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_staticInit_FUN_00444f00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00444f00
        ;   Label: core_cow.cpp_staticInit_FUN_00444f00
    PUSH 0x2                            ; 00444f05
    PUSH 0x5f1758                       ; 00444f07
    PUSH 0x444f30                       ; 00444f0c
    PUSH 0x5b98a5                       ; 00444f11
    PUSH 0x7f8f54                       ; 00444f16
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00444f1b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00444f20
    RET                                 ; 00444f23

