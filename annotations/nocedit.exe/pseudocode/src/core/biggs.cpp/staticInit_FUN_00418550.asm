; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_staticInit_FUN_00418550(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBiggs_00615aa1
;   int g_CBiggsClassVersion = 0x1
;   CDemonActorType g_CBiggsClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 00418550 | g_CEnemyClassInfo
        ;   Label: core_biggs.cpp_staticInit_FUN_00418550
    PUSH 0x1                            ; 00418555
    PUSH 0x66e518                       ; 00418557 | g_CBiggsClassVersion
    PUSH 0x418580                       ; 0041855c
    PUSH 0x615aa1                       ; 00418561 | = "CBiggs"
    PUSH 0x8228cc                       ; 00418566 | g_CBiggsClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0041856b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00418570
    RET                                 ; 00418573

