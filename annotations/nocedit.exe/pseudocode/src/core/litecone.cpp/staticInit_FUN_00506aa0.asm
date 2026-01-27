; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_litecone.cpp_staticInit_FUN_00506aa0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CLightCone_00631536
;   int g_CLightConeClassVersion = 0x2
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CLightConeClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00506aa0 | g_CDemonActorClassInfo
        ;   Label: core_litecone.cpp_staticInit_FUN_00506aa0
    PUSH 0x2                            ; 00506aa5
    PUSH 0x67cff0                       ; 00506aa7 | g_CLightConeClassVersion
    PUSH 0x506ad0                       ; 00506aac
    PUSH 0x631536                       ; 00506ab1 | = "CLightCone"
    PUSH 0x2dd30f4                      ; 00506ab6 | g_CLightConeClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00506abb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00506ac0
    RET                                 ; 00506ac3

