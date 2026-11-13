; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_staticInit_FUN_004154c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004154c0
        ;   Label: core_bodypart.cpp_staticInit_FUN_004154c0
    PUSH 0x5                            ; 004154c5
    PUSH 0x6098dc                       ; 004154c7
    PUSH 0x4156b0                       ; 004154cc
    PUSH 0x5cbd12                       ; 004154d1
    PUSH 0x7bc908                       ; 004154d6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004154db
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004154e0
    RET                                 ; 004154e3

