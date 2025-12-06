; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_mimic.cpp_staticInit_FUN_0051f100(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CMimic_0063853b
;   int g_CMimicClassVersion = 0x3
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CMimicClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 0051f100 | CDemonActorType g_CEnemyClassInfo
        ;   Label: core_mimic.cpp_staticInit_FUN_0051f100
    PUSH 0x3                            ; 0051f105
    PUSH 0x67d510                       ; 0051f107 | int g_CMimicClassVersion
    PUSH 0x51f190                       ; 0051f10c
    PUSH 0x63853b                       ; 0051f111 | = "CMimic" | s_CMimic_0063853b = CMimic
    PUSH 0x2f3333c                      ; 0051f116 | CDemonActorType g_CMimicClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0051f11b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0051f120
    RET                                 ; 0051f123

