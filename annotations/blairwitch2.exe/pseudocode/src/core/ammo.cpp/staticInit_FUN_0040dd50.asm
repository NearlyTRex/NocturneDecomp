; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_staticInit_FUN_0040dd50(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005cb0be
;   int g_CAmmoClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CAmmoClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0040dd50 | g_CDemonActorClassInfo
        ;   Label: core_ammo.cpp_staticInit_FUN_0040dd50
    PUSH 0x1                            ; 0040dd55
    PUSH 0x609780                       ; 0040dd57 | g_CAmmoClassVersion
    PUSH 0x40dd80                       ; 0040dd5c
    PUSH 0x5cb0be                       ; 0040dd61 | = "CAmmo"
    PUSH 0x7bc36c                       ; 0040dd66 | g_CAmmoClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0040dd6b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040dd70
    RET                                 ; 0040dd73

