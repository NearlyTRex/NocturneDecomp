; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_shotgun.cpp_staticInit_FUN_00587e70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CShotgun_00649adf
;   int g_CShotgunClassVersion = 0x1
;   CDemonActorType g_CShotgunClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 00587e70 | CDemonActorType g_CWeaponClassInfo
        ;   Label: core_shotgun.cpp_staticInit_FUN_00587e70
    PUSH 0x1                            ; 00587e75
    PUSH 0x681814                       ; 00587e77 | int g_CShotgunClassVersion
    PUSH 0x587ea0                       ; 00587e7c
    PUSH 0x649adf                       ; 00587e81 | = "CShotgun" | s_CShotgun_00649adf = CShotgun
    PUSH 0x3659770                      ; 00587e86 | CDemonActorType g_CShotgunClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00587e8b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00587e90
    RET                                 ; 00587e93

