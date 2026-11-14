; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_staticInit_FUN_004c9b40(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004c9b40
        ;   Label: core_glass.cpp_staticInit_FUN_004c9b40
    PUSH 0x6                            ; 004c9b45
    PUSH 0x5fecc4                       ; 004c9b47
    PUSH 0x4c9b70                       ; 004c9b4c
    PUSH 0x5c4438                       ; 004c9b51
    PUSH 0x1d22dcc                      ; 004c9b56
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004c9b5b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c9b60
    RET                                 ; 004c9b63

