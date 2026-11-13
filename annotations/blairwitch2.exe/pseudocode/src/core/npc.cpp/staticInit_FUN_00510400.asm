; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_staticInit_FUN_00510400(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bdc5c                       ; 00510400
        ;   Label: core_npc.cpp_staticInit_FUN_00510400
    PUSH 0x6                            ; 00510405
    PUSH 0x61b2b4                       ; 00510407
    PUSH 0x510430                       ; 0051040c
    PUSH 0x5e14b4                       ; 00510411
    PUSH 0x1d65404                      ; 00510416
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0051041b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00510420
    RET                                 ; 00510423

