; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_staticInit_FUN_00427d80(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CCharacter_00616ec2
;   int g_CCharacterClassVersion = 0x6
;   CDemonActorType g_CDemonActorClassInfo
;   CKeyFramedModelInstance DAT_00823a98
;   CDemonActorType g_CCharacterClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;
; *****************************************************************************

section .text

    PUSH 0x823a98                       ; 00427d80 | CKeyFramedModelInstance DAT_00823a98
        ;   Label: core_charactr.cpp_staticInit_FUN_00427d80
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00427d85 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00427d8a
    PUSH 0x821ff8                       ; 00427d8d | CDemonActorType g_CDemonActorClassInfo
    PUSH 0x6                            ; 00427d92
    PUSH 0x66e770                       ; 00427d94 | int g_CCharacterClassVersion
    PUSH 0x0                            ; 00427d99
    PUSH 0x616ec2                       ; 00427d9b | = "CCharacter" | s_CCharacter_00616ec2 = CCharacter
    PUSH 0x823c14                       ; 00427da0 | CDemonActorType g_CCharacterClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00427da5 | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00427daa
    RET                                 ; 00427dad

