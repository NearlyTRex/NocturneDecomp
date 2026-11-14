; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mattnntt_cpp_staticInit_FUN_00591b40(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00591b40
        ;   Label: core_mattnntt.cpp_staticInit_FUN_00591b40
    PUSH 0x1                            ; 00591b45
    PUSH 0x607374                       ; 00591b47
    PUSH 0x591b70                       ; 00591b4c
    PUSH 0x5d8f1b                       ; 00591b51
    PUSH 0x2d24a18                      ; 00591b56
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00591b5b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00591b60
    RET                                 ; 00591b63

