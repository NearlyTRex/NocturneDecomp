; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_staticInit_FUN_0048df80(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CDrip_006221ff
;   int g_CDripClassVersion = 0x6
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CDripClassInfo
;   CKeyFramedModelInstance DAT_02c9b170
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 0048df80 | g_CDemonActorClassInfo
        ;   Label: core_drip.cpp_staticInit_FUN_0048df80
    PUSH 0x6                            ; 0048df85
    PUSH 0x672334                       ; 0048df87 | g_CDripClassVersion
    PUSH 0x48dfc0                       ; 0048df8c
    PUSH 0x6221ff                       ; 0048df91 | = "CDrip"
    PUSH 0x2c9b134                      ; 0048df96 | g_CDripClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0048df9b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0048dfa0
    PUSH 0x2c9b170                      ; 0048dfa3 | DAT_02c9b170
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 0048dfa8
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0048dfad
    RET                                 ; 0048dfb0

