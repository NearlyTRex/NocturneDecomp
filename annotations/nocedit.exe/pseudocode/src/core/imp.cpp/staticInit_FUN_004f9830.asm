; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_imp.cpp_staticInit_FUN_004f9830(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CImp_0062f81e
;   int g_CImpClassVersion = 0x1
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CImpClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 004f9830 | CDemonActorType g_CEnemyClassInfo
        ;   Label: core_imp.cpp_staticInit_FUN_004f9830
    PUSH 0x1                            ; 004f9835
    PUSH 0x67ccbc                       ; 004f9837 | int g_CImpClassVersion
    PUSH 0x4f9860                       ; 004f983c
    PUSH 0x62f81e                       ; 004f9841 | = "CImp" | s_CImp_0062f81e = CImp
    PUSH 0x2db8a24                      ; 004f9846 | CDemonActorType g_CImpClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004f984b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004f9850
    RET                                 ; 004f9853

