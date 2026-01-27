; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_larva.cpp_staticInit_FUN_00502f20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CLarva_00630ec3
;   int g_CLarvaClassVersion = 0x2
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CLarvaClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 00502f20 | g_CEnemyClassInfo
        ;   Label: core_larva.cpp_staticInit_FUN_00502f20
    PUSH 0x2                            ; 00502f25
    PUSH 0x67cf5c                       ; 00502f27 | g_CLarvaClassVersion
    PUSH 0x502f50                       ; 00502f2c
    PUSH 0x630ec3                       ; 00502f31 | = "CLarva"
    PUSH 0x2dcd814                      ; 00502f36 | g_CLarvaClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00502f3b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00502f40
    RET                                 ; 00502f43

