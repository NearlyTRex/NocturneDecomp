; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_ammobox.cpp_staticInit_FUN_00411530(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CAmmoBox_00614ba3
;   undefined4 g_CAmmoBoxClassVersion
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CAmmoBoxClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00411530 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_ammobox.cpp_staticInit_FUN_00411530
    PUSH 0x4                            ; 00411535
    PUSH 0x66e3d4                       ; 00411537 | undefined4 g_CAmmoBoxClassVersion
    PUSH 0x411560                       ; 0041153c
    PUSH 0x614ba3                       ; 00411541 | = "CAmmoBox" | s_CAmmoBox_00614ba3 = CAmmoBox
    PUSH 0x8223a8                       ; 00411546 | CDemonActorType g_CAmmoBoxClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0041154b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00411550
    RET                                 ; 00411553

