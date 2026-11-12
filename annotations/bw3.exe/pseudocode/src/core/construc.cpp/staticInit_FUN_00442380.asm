; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_construc_cpp_staticInit_FUN_00442380(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00442380
        ;   Label: core_construc.cpp_staticInit_FUN_00442380
    PUSH 0x3                            ; 00442385
    PUSH 0x5f16c0                       ; 00442387
    PUSH 0x4423f0                       ; 0044238c
    PUSH 0x5b93e5                       ; 00442391
    PUSH 0x7f8ea0                       ; 00442396
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0044239b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004423a0
    PUSH 0x7f8ea0                       ; 004423a3
    PUSH 0x1                            ; 004423a8
    PUSH 0x5f170c                       ; 004423aa
    PUSH 0x444520                       ; 004423af
    PUSH 0x5b93f0                       ; 004423b4
    PUSH 0x7f8edc                       ; 004423b9
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004423be
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004423c3
    PUSH 0x7f8ea0                       ; 004423c6
    PUSH 0x1                            ; 004423cb
    PUSH 0x5f1710                       ; 004423cd
    PUSH 0x4445d0                       ; 004423d2
    PUSH 0x5b9400                       ; 004423d7
    PUSH 0x7f8f18                       ; 004423dc
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004423e1
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004423e6
    RET                                 ; 004423e9

