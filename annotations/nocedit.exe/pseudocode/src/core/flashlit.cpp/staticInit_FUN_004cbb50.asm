; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flashlit_cpp_staticInit_FUN_004cbb50(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFlashlight_0062a3a8
;   int g_CFlashlightClassVersion = 0x1
;   CDemonActorType g_CFlashlightClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 004cbb50 | g_CWeaponClassInfo
        ;   Label: core_flashlit.cpp_staticInit_FUN_004cbb50
    PUSH 0x1                            ; 004cbb55
    PUSH 0x67b4f8                       ; 004cbb57 | g_CFlashlightClassVersion
    PUSH 0x4cbb80                       ; 004cbb5c
    PUSH 0x62a3a8                       ; 004cbb61 | = "CFlashlight"
    PUSH 0x2d7a778                      ; 004cbb66 | g_CFlashlightClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004cbb6b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004cbb70
    RET                                 ; 004cbb73

