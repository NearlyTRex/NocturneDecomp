; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_staticInit_FUN_005762f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 005762f0
        ;   Label: core_vessel.cpp_staticInit_FUN_005762f0
    PUSH 0x4                            ; 005762f5
    PUSH 0x606af8                       ; 005762f7
    PUSH 0x576320                       ; 005762fc
    PUSH 0x5d7067                       ; 00576301
    PUSH 0x2cfd90c                      ; 00576306
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0057630b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00576310
    RET                                 ; 00576313

