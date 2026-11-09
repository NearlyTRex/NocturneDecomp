; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_staticInit_FUN_0040db60(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005d3039
;   int g_CAmmoClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CAmmoClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 0040db60 | g_CDemonActorClassInfo
        ;   Label: core_ammo.cpp_staticInit_FUN_0040db60
    PUSH 0x1                            ; 0040db65
    PUSH 0x610884                       ; 0040db67 | g_CAmmoClassVersion
    PUSH 0x40db90                       ; 0040db6c
    PUSH 0x5d3039                       ; 0040db71 | = "CAmmo"
    PUSH 0x7c336c                       ; 0040db76 | g_CAmmoClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0040db7b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040db80
    RET                                 ; 0040db83

