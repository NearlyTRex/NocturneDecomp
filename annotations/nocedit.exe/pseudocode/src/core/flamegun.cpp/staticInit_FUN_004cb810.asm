; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_flamegun.cpp_staticInit_FUN_004cb810(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFlameThrower_0062a36b
;   int g_CFlameThrowerClassVersion = 0x1
;   CDemonActorType g_CFlameThrowerClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 004cb810 | g_CWeaponClassInfo
        ;   Label: core_flamegun.cpp_staticInit_FUN_004cb810
    PUSH 0x1                            ; 004cb815
    PUSH 0x67b4dc                       ; 004cb817 | g_CFlameThrowerClassVersion
    PUSH 0x4cb840                       ; 004cb81c
    PUSH 0x62a36b                       ; 004cb821 | = "CFlameThrower"
    PUSH 0x2d7a73c                      ; 004cb826 | g_CFlameThrowerClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004cb82b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004cb830
    RET                                 ; 004cb833

