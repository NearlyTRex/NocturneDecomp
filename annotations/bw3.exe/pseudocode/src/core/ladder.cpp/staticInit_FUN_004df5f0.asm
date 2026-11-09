; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ladder_cpp_staticInit_FUN_004df5f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004df5f0
        ;   Label: core_ladder.cpp_staticInit_FUN_004df5f0
    PUSH 0x2                            ; 004df5f5
    PUSH 0x600288                       ; 004df5f7
    PUSH 0x4df620                       ; 004df5fc
    PUSH 0x5c683d                       ; 004df601
    PUSH 0x1d70a7c                      ; 004df606
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004df60b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004df610
    RET                                 ; 004df613

