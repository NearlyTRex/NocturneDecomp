; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_smiley_cpp_staticInit_FUN_005a23c0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CSmiley_0064f14a
;   int g_CSmileyClassVersion = 0x1
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CSmileyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 005a23c0 | g_CEnemyClassInfo
        ;   Label: core_smiley.cpp_staticInit_FUN_005a23c0
    PUSH 0x1                            ; 005a23c5
    PUSH 0x681abc                       ; 005a23c7 | g_CSmileyClassVersion
    PUSH 0x5a23f0                       ; 005a23cc
    PUSH 0x64f14a                       ; 005a23d1 | = "CSmiley"
    PUSH 0x3f48fd0                      ; 005a23d6 | g_CSmileyClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005a23db
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a23e0
    RET                                 ; 005a23e3

