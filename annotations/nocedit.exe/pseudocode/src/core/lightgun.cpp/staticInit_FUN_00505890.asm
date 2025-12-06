; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_lightgun.cpp_staticInit_FUN_00505890(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CLightGun_00631436
;   int g_CLightGunClassVersion = 0x1
;   CDemonActorType g_CLightGunClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 00505890 | CDemonActorType g_CWeaponClassInfo
        ;   Label: core_lightgun.cpp_staticInit_FUN_00505890
    PUSH 0x1                            ; 00505895
    PUSH 0x67cfd8                       ; 00505897 | int g_CLightGunClassVersion
    PUSH 0x5058c0                       ; 0050589c
    PUSH 0x631436                       ; 005058a1 | = "CLightGun" | s_CLightGun_00631436 = CLightGun
    PUSH 0x2dd30b8                      ; 005058a6 | CDemonActorType g_CLightGunClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005058ab | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005058b0
    RET                                 ; 005058b3

