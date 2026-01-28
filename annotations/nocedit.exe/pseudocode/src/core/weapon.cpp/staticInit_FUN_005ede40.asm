; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_weapon_cpp_staticInit_FUN_005ede40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CWeapon_00657aa9
;   int g_CWeaponClassVersion = 0x7
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 005ede40 | g_CDemonActorClassInfo
        ;   Label: core_weapon.cpp_staticInit_FUN_005ede40
    PUSH 0x7                            ; 005ede45
    PUSH 0x6848d4                       ; 005ede47 | g_CWeaponClassVersion
    PUSH 0x0                            ; 005ede4c
    PUSH 0x657aa9                       ; 005ede4e | = "CWeapon"
    PUSH 0x3f95d40                      ; 005ede53 | g_CWeaponClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005ede58
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005ede5d
    RET                                 ; 005ede60

