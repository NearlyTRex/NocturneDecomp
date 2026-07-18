; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_staticInit_FUN_00412b20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBaron_00614eb1
;   int g_CBaronClassVersion = 0x2
;   CDemonActorType g_CBaronClassInfo
;   CDemonActorType g_CHeroClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;
; *****************************************************************************

section .text

    PUSH 0x2db87d4                      ; 00412b20 | g_CHeroClassInfo
        ;   Label: core_baron.cpp_staticInit_FUN_00412b20
    PUSH 0x2                            ; 00412b25
    PUSH 0x66e45c                       ; 00412b27 | g_CBaronClassVersion
    PUSH 0x412b80                       ; 00412b2c
    PUSH 0x614eb1                       ; 00412b31 | = "CBaron"
    PUSH 0x8224e0                       ; 00412b36 | g_CBaronClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00412b3b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00412b40
    PUSH 0x82251c                       ; 00412b43
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00412b48
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00412b4d
    PUSH 0x3f95d40                      ; 00412b50
    PUSH 0x1                            ; 00412b55
    PUSH 0x66e478                       ; 00412b57
    PUSH 0x413d00                       ; 00412b5c
    PUSH 0x614eb8                       ; 00412b61
    PUSH 0x822698                       ; 00412b66
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00412b6b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00412b70
    RET                                 ; 00412b73

