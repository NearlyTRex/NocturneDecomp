; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_darkwolf_cpp_staticInit_FUN_00598700(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00598700
        ;   Label: core_darkwolf.cpp_staticInit_FUN_00598700
    PUSH 0x2                            ; 00598705
    PUSH 0x6073e8                       ; 00598707
    PUSH 0x598750                       ; 0059870c
    PUSH 0x5d97e2                       ; 00598711
    PUSH 0x2d24b20                      ; 00598716
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0059871b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00598720
    PUSH 0x2d24b20                      ; 00598723
    PUSH 0x2                            ; 00598728
    PUSH 0x6073ec                       ; 0059872a
    PUSH 0x598fb0                       ; 0059872f
    PUSH 0x5d97ec                       ; 00598734
    PUSH 0x2d24b5c                      ; 00598739
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0059873e
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00598743
    RET                                 ; 00598746

