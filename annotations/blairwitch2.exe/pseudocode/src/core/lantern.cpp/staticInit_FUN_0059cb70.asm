; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lantern_cpp_staticInit_FUN_0059cb70(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 0059cb70
        ;   Label: core_lantern.cpp_staticInit_FUN_0059cb70
    PUSH 0x1                            ; 0059cb75
    PUSH 0x61ea8c                       ; 0059cb77
    PUSH 0x59cba0                       ; 0059cb7c
    PUSH 0x5ef799                       ; 0059cb81
    PUSH 0x2668168                      ; 0059cb86
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0059cb8b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0059cb90
    RET                                 ; 0059cb93

