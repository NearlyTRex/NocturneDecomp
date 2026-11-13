; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_staticInit_FUN_005848e0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 005848e0
        ;   Label: core_stairs.cpp_staticInit_FUN_005848e0
    PUSH 0x2                            ; 005848e5
    PUSH 0x625904                       ; 005848e7
    PUSH 0x584910                       ; 005848ec
    PUSH 0x5f6344                       ; 005848f1
    PUSH 0x2c83558                      ; 005848f6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005848fb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00584900
    RET                                 ; 00584903

