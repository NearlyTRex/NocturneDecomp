; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_beast_cpp_staticInit_FUN_00414690(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 00414690
        ;   Label: core_beast.cpp_staticInit_FUN_00414690
    PUSH 0x1                            ; 00414695
    PUSH 0x6109b8                       ; 00414697
    PUSH 0x4146c0                       ; 0041469c
    PUSH 0x5d3bd2                       ; 004146a1
    PUSH 0x7c3860                       ; 004146a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004146ab
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004146b0
    RET                                 ; 004146b3

