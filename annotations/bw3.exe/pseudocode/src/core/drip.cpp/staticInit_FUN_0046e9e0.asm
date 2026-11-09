; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_staticInit_FUN_0046e9e0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0046e9e0
        ;   Label: core_drip.cpp_staticInit_FUN_0046e9e0
    PUSH 0x6                            ; 0046e9e5
    PUSH 0x5f4a44                       ; 0046e9e7
    PUSH 0x46ea20                       ; 0046e9ec
    PUSH 0x5bc6fd                       ; 0046e9f1
    PUSH 0x1c0b3a0                      ; 0046e9f6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0046e9fb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0046ea00
    PUSH 0x1c0b3dc                      ; 0046ea03
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 0046ea08
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046ea0d
    RET                                 ; 0046ea10

