; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gun_cpp_staticInit_FUN_004f0280(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGun_0062e783
;   int g_CGunClassVersion = 0x1
;   CDemonActorType g_CGunClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 004f0280 | g_CWeaponClassInfo
        ;   Label: core_gun.cpp_staticInit_FUN_004f0280
    PUSH 0x1                            ; 004f0285
    PUSH 0x67cbdc                       ; 004f0287 | g_CGunClassVersion
    PUSH 0x4f02b0                       ; 004f028c
    PUSH 0x62e783                       ; 004f0291 | = "CGun"
    PUSH 0x2db86c4                      ; 004f0296 | g_CGunClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004f029b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f02a0
    RET                                 ; 004f02a3

