; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_tvbat.cpp_staticInit_FUN_005e3e50(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTVBat_00656882
;   int g_CTVBatClassVersion = 0x5
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CTVBatClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 005e3e50 | g_CEnemyClassInfo
        ;   Label: core_tvbat.cpp_staticInit_FUN_005e3e50
    PUSH 0x5                            ; 005e3e55
    PUSH 0x684450                       ; 005e3e57 | g_CTVBatClassVersion
    PUSH 0x5e3e80                       ; 005e3e5c
    PUSH 0x656882                       ; 005e3e61 | = "CTVBat"
    PUSH 0x3f874e0                      ; 005e3e66 | g_CTVBatClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005e3e6b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005e3e70
    RET                                 ; 005e3e73

