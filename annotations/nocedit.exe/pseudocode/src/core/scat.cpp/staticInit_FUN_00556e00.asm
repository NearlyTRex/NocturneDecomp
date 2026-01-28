; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_scat_cpp_staticInit_FUN_00556e00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CScat_006411f4
;   int g_CScatClassVersion = 0x1
;   CDemonActorType g_CHeroClassInfo
;   CDemonActorType g_CScatClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2db87d4                      ; 00556e00 | g_CHeroClassInfo
        ;   Label: core_scat.cpp_staticInit_FUN_00556e00
    PUSH 0x1                            ; 00556e05
    PUSH 0x680cfc                       ; 00556e07 | g_CScatClassVersion
    PUSH 0x556e90                       ; 00556e0c
    PUSH 0x6411f4                       ; 00556e11 | = "CScat"
    PUSH 0x31061a4                      ; 00556e16 | g_CScatClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00556e1b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00556e20
    RET                                 ; 00556e23

