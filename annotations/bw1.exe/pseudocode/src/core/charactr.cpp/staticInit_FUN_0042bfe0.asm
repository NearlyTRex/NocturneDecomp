; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_staticInit_FUN_0042bfe0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;
; *****************************************************************************

section .text

    PUSH 0x7c61c4                       ; 0042bfe0
        ;   Label: core_charactr.cpp_staticInit_FUN_0042bfe0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 0042bfe5
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042bfea
    PUSH 0x7c2ff8                       ; 0042bfed
    PUSH 0xb                            ; 0042bff2
    PUSH 0x610cc8                       ; 0042bff4
    PUSH 0x0                            ; 0042bff9
    PUSH 0x5d56af                       ; 0042bffb
    PUSH 0x7c6344                       ; 0042c000
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0042c005
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0042c00a
    RET                                 ; 0042c00d

