; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_baron.cpp_FUN_00412b41(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 0048a0e2
;
; Referenced Globals:
;   TerminatedCString s_CBaronWeapon_00614eb8
;   int g_CBaronWeaponClassVersion = 0x1
;   CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance
;   CDemonActorType g_CBaronWeaponClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;
; *****************************************************************************

section .text

    LES EBX,[EAX]                       ; 00412b41
        ;   Label: core_baron.cpp_FUN_00412b41
    PUSH 0x82251c                       ; 00412b43 | g_CKeyFramedModelInstanceInstance
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00412b48
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00412b4d
    PUSH 0x3f95d40                      ; 00412b50 | g_CWeaponClassInfo
    PUSH 0x1                            ; 00412b55
    PUSH 0x66e478                       ; 00412b57 | g_CBaronWeaponClassVersion
    PUSH 0x413d00                       ; 00412b5c
    PUSH 0x614eb8                       ; 00412b61 | = "CBaronWeapon"
    PUSH 0x822698                       ; 00412b66 | g_CBaronWeaponClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00412b6b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00412b70
    RET                                 ; 00412b73

