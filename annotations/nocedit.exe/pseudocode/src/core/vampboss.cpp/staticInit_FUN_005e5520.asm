; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_staticInit_FUN_005e5520(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CVampireBoss_00656aa3
;   int g_CVampireBossVersion = 0x4
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CVampireBossClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 005e5520 | g_CEnemyClassInfo
        ;   Label: core_vampboss.cpp_staticInit_FUN_005e5520
    PUSH 0x4                            ; 005e5525
    PUSH 0x684464                       ; 005e5527 | g_CVampireBossVersion
    PUSH 0x5e5550                       ; 005e552c
    PUSH 0x656aa3                       ; 005e5531 | = "CVampireBoss"
    PUSH 0x3f8751c                      ; 005e5536 | g_CVampireBossClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005e553b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005e5540
    RET                                 ; 005e5543

