; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_staticInit_FUN_0046ce00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0046ce00
        ;   Label: core_drip.cpp_staticInit_FUN_0046ce00
    PUSH 0x6                            ; 0046ce05
    PUSH 0x60d1c8                       ; 0046ce07
    PUSH 0x46ce40                       ; 0046ce0c
    PUSH 0x5d176d                       ; 0046ce11
    PUSH 0x1bd380c                      ; 0046ce16
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0046ce1b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0046ce20
    PUSH 0x1bd3848                      ; 0046ce23
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0046ce28
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046ce2d
    RET                                 ; 0046ce30

