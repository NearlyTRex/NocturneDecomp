; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_staticInit_FUN_00485300(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00485300
        ;   Label: core_drip.cpp_staticInit_FUN_00485300
    PUSH 0x6                            ; 00485305
    PUSH 0x6144a8                       ; 00485307
    PUSH 0x485340                       ; 0048530c
    PUSH 0x5db566                       ; 00485311
    PUSH 0x1beedc8                      ; 00485316
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0048531b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00485320
    PUSH 0x1beee04                      ; 00485323
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00485328
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0048532d
    RET                                 ; 00485330

