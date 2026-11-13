; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_staticInit_FUN_0040dda0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005b6089
;   TerminatedCString s_CAmmo_Mana_005b608f
;   TerminatedCString s_CAmmo_ManaLarge_005b609a
;   TerminatedCString s_CAmmo_Bullet_005b60aa
;   int g_CAmmoClassVersion = 0x1
;   undefined4 DAT_005f0b58
;   undefined4 DAT_005f0b5c
;   undefined4 DAT_005f0b60
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CAmmoClassInfo
;   undefined4 DAT_007dfd28
;   undefined4 DAT_007dfd64
;   undefined4 DAT_007dfda0
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0040dda0 | g_CDemonActorClassInfo
        ;   Label: core_ammo.cpp_staticInit_FUN_0040dda0
    PUSH 0x1                            ; 0040dda5
    PUSH 0x5f0b54                       ; 0040dda7 | g_CAmmoClassVersion
    PUSH 0x40de30                       ; 0040ddac
    PUSH 0x5b6089                       ; 0040ddb1 | = "CAmmo"
    PUSH 0x7dfcec                       ; 0040ddb6 | g_CAmmoClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0040ddbb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040ddc0
    PUSH 0x7dfcec                       ; 0040ddc3 | g_CAmmoClassInfo
    PUSH 0x1                            ; 0040ddc8
    PUSH 0x5f0b58                       ; 0040ddca | DAT_005f0b58
    PUSH 0x40e0c0                       ; 0040ddcf
    PUSH 0x5b608f                       ; 0040ddd4 | = "CAmmo_Mana"
    PUSH 0x7dfd28                       ; 0040ddd9 | DAT_007dfd28
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0040ddde
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040dde3
    PUSH 0x7dfcec                       ; 0040dde6 | g_CAmmoClassInfo
    PUSH 0x1                            ; 0040ddeb
    PUSH 0x5f0b5c                       ; 0040dded | DAT_005f0b5c
    PUSH 0x40e230                       ; 0040ddf2
    PUSH 0x5b609a                       ; 0040ddf7 | = "CAmmo_ManaLarge"
    PUSH 0x7dfd64                       ; 0040ddfc | DAT_007dfd64
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0040de01
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040de06
    PUSH 0x7dfcec                       ; 0040de09 | g_CAmmoClassInfo
    PUSH 0x1                            ; 0040de0e
    PUSH 0x5f0b60                       ; 0040de10 | DAT_005f0b60
    PUSH 0x40e3a0                       ; 0040de15
    PUSH 0x5b60aa                       ; 0040de1a | = "CAmmo_Bullet"
    PUSH 0x7dfda0                       ; 0040de1f | DAT_007dfda0
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0040de24
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040de29
    RET                                 ; 0040de2c

