; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_staticInit_FUN_00424c40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBugs_00616cc3
;   int g_CBugsClassVersion = 0x1
;   CDemonActorType g_CBugsClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 00424c40 | g_CEnemyClassInfo
        ;   Label: core_bugs.cpp_staticInit_FUN_00424c40
    PUSH 0x1                            ; 00424c45
    PUSH 0x66e65c                       ; 00424c47 | g_CBugsClassVersion
    PUSH 0x424c70                       ; 00424c4c
    PUSH 0x616cc3                       ; 00424c51 | = "CBugs"
    PUSH 0x823a38                       ; 00424c56 | g_CBugsClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00424c5b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00424c60
    RET                                 ; 00424c63

