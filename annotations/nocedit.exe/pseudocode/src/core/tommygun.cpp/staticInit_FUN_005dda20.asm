; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tommygun_cpp_staticInit_FUN_005dda20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTommyGun_00655481
;   int g_CTommyGunClassVersion = 0x1
;   CDemonActorType g_CTommyGunClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 005dda20 | g_CWeaponClassInfo
        ;   Label: core_tommygun.cpp_staticInit_FUN_005dda20
    PUSH 0x1                            ; 005dda25
    PUSH 0x68430c                       ; 005dda27 | g_CTommyGunClassVersion
    PUSH 0x5dda50                       ; 005dda2c
    PUSH 0x655481                       ; 005dda31 | = "CTommyGun"
    PUSH 0x3f873a4                      ; 005dda36 | g_CTommyGunClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005dda3b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005dda40
    RET                                 ; 005dda43

