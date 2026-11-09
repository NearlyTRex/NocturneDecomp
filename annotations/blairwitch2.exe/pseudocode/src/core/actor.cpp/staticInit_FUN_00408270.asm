; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_staticInit_FUN_00408270(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00408270
        ;   Label: core_actor.cpp_staticInit_FUN_00408270
    PUSH 0x7                            ; 00408272
    PUSH 0x609588                       ; 00408274
    PUSH 0x0                            ; 00408279
    PUSH 0x5ca41e                       ; 0040827b
    PUSH 0x7bbff8                       ; 00408280
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00408285
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040828a
    RET                                 ; 0040828d

