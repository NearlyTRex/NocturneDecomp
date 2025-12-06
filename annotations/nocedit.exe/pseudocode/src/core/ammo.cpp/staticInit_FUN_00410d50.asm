; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_ammo.cpp_staticInit_FUN_00410d50(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_0061491d
;   int g_CAmmoClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CAmmoClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00410d50 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_ammo.cpp_staticInit_FUN_00410d50
    PUSH 0x1                            ; 00410d55
    PUSH 0x66e3c0                       ; 00410d57 | int g_CAmmoClassVersion
    PUSH 0x410d80                       ; 00410d5c
    PUSH 0x61491d                       ; 00410d61 | = "CAmmo" | s_CAmmo_0061491d = CAmmo
    PUSH 0x82236c                       ; 00410d66 | CDemonActorType g_CAmmoClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00410d6b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00410d70
    RET                                 ; 00410d73

