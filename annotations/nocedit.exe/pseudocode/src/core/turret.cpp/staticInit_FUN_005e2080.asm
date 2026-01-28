; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_turret_cpp_staticInit_FUN_005e2080(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTurret_006565a8
;   int g_CTurretClassVersion = 0x2
;   CDemonActorType g_CTurretClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 005e2080 | g_CWeaponClassInfo
        ;   Label: core_turret.cpp_staticInit_FUN_005e2080
    PUSH 0x2                            ; 005e2085
    PUSH 0x68443c                       ; 005e2087 | g_CTurretClassVersion
    PUSH 0x5e20b0                       ; 005e208c
    PUSH 0x6565a8                       ; 005e2091 | = "CTurret"
    PUSH 0x3f874a4                      ; 005e2096 | g_CTurretClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005e209b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005e20a0
    RET                                 ; 005e20a3

