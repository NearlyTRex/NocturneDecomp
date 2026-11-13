; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_staticInit_FUN_004fd2d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004fd2d0
        ;   Label: core_ladder.cpp_staticInit_FUN_004fd2d0
    PUSH 0x2                            ; 004fd2d5
    PUSH 0x61f2a8                       ; 004fd2d7
    PUSH 0x4fd300                       ; 004fd2dc
    PUSH 0x5e6b5b                       ; 004fd2e1
    PUSH 0x1d1bca4                      ; 004fd2e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004fd2eb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004fd2f0
    RET                                 ; 004fd2f3

