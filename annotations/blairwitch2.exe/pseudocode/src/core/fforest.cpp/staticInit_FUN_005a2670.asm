; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fforest_cpp_staticInit_FUN_005a2670(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005a2670
        ;   Label: core_fforest.cpp_staticInit_FUN_005a2670
    PUSH 0x1                            ; 005a2675
    PUSH 0x61eb0c                       ; 005a2677
    PUSH 0x5a26a0                       ; 005a267c
    PUSH 0x5eff6f                       ; 005a2681
    PUSH 0x2668514                      ; 005a2686
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a268b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a2690
    RET                                 ; 005a2693

