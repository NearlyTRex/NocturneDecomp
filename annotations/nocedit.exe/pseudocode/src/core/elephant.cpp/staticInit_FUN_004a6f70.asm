; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_elephant_cpp_staticInit_FUN_004a6f70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CElephantGun_00623fa2
;   int g_CElephantGunClassVersion = 0x1
;   CDemonActorType g_CElephantGunClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 004a6f70 | g_CWeaponClassInfo
        ;   Label: core_elephant.cpp_staticInit_FUN_004a6f70
    PUSH 0x1                            ; 004a6f75
    PUSH 0x6792d4                       ; 004a6f77 | g_CElephantGunClassVersion
    PUSH 0x4a6fa0                       ; 004a6f7c
    PUSH 0x623fa2                       ; 004a6f81 | = "CElephantGun"
    PUSH 0x2cf2b20                      ; 004a6f86 | g_CElephantGunClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004a6f8b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a6f90
    RET                                 ; 004a6f93

