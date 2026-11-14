; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_staticInit_FUN_00447030(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 00447030
        ;   Label: core_dest.cpp_staticInit_FUN_00447030
    PUSH 0x4                            ; 00447035
    PUSH 0x60a024                       ; 00447037
    PUSH 0x447060                       ; 0044703c
    PUSH 0x5cea42                       ; 00447041
    PUSH 0x1510ddc                      ; 00447046
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0044704b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00447050
    RET                                 ; 00447053

