; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_staticInit_FUN_00561e90(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 00561e90
        ;   Label: core_stairs.cpp_staticInit_FUN_00561e90
    PUSH 0x2                            ; 00561e95
    PUSH 0x61e2b4                       ; 00561e97
    PUSH 0x561ec0                       ; 00561e9c
    PUSH 0x5eb140                       ; 00561ea1
    PUSH 0x264bd88                      ; 00561ea6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00561eab
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00561eb0
    RET                                 ; 00561eb3

