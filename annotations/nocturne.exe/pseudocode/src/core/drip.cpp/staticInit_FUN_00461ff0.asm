; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_staticInit_FUN_00461ff0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CDrip_0057ddd8
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00461ff0
        ;   Label: core_drip.cpp_staticInit_FUN_00461ff0
    PUSH 0x6                            ; 00461ff5
    PUSH 0x5b064c                       ; 00461ff7
    PUSH 0x462030                       ; 00461ffc
    PUSH 0x57ddd8                       ; 00462001 | = "CDrip"
    PUSH 0x1b7b2f4                      ; 00462006
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0046200b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00462010
    PUSH 0x1b7b330                      ; 00462013
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00462018
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0046201d
    RET                                 ; 00462020

