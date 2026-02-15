; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sentinel_cpp_staticInit_FUN_00567d40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CSentinel_006456fa
;   int g_CSentinelClassVersion = 0x2
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CSentinelClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 00567d40 | g_CEnemyClassInfo
        ;   Label: core_sentinel.cpp_staticInit_FUN_00567d40
    PUSH 0x2                            ; 00567d45
    PUSH 0x681070                       ; 00567d47 | g_CSentinelClassVersion
    PUSH 0x567d70                       ; 00567d4c
    PUSH 0x6456fa                       ; 00567d51 | = "CSentinel"
    PUSH 0x311423c                      ; 00567d56 | g_CSentinelClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00567d5b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00567d60
    RET                                 ; 00567d63

