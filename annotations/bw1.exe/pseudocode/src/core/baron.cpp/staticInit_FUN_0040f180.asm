; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_staticInit_FUN_0040f180(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;
; *****************************************************************************

section .text

    PUSH 0x1d06ad8                      ; 0040f180
        ;   Label: core_baron.cpp_staticInit_FUN_0040f180
    PUSH 0x2                            ; 0040f185
    PUSH 0x610910                       ; 0040f187
    PUSH 0x40f1e0                       ; 0040f18c
    PUSH 0x5d336a                       ; 0040f191
    PUSH 0x7c34e0                       ; 0040f196
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0040f19b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040f1a0
    PUSH 0x7c351c                       ; 0040f1a3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 0040f1a8
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f1ad
    PUSH 0x2c99738                      ; 0040f1b0
    PUSH 0x1                            ; 0040f1b5
    PUSH 0x61092c                       ; 0040f1b7
    PUSH 0x410430                       ; 0040f1bc
    PUSH 0x5d3371                       ; 0040f1c1
    PUSH 0x7c3698                       ; 0040f1c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0040f1cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040f1d0
    RET                                 ; 0040f1d3

