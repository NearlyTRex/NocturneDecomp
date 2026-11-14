; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_staticInit_FUN_0042ab80(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;
; *****************************************************************************

section .text

    PUSH 0x7e2b34                       ; 0042ab80
        ;   Label: core_charactr.cpp_staticInit_FUN_0042ab80
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 0042ab85
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042ab8a
    PUSH 0x7df978                       ; 0042ab8d
    PUSH 0xe                            ; 0042ab92
    PUSH 0x5f0f48                       ; 0042ab94
    PUSH 0x0                            ; 0042ab99
    PUSH 0x5b7f9e                       ; 0042ab9b
    PUSH 0x7e2cb4                       ; 0042aba0
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0042aba5
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0042abaa
    RET                                 ; 0042abad

