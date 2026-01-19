; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_melee.cpp_staticInit_FUN_0050e760(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CMelee_00635bbd
;   int g_CMeleeClassVersion = 0x7
;   CDemonActorType g_CMeleeClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 0050e760 | g_CWeaponClassInfo
        ;   Label: core_melee.cpp_staticInit_FUN_0050e760
    PUSH 0x7                            ; 0050e765
    PUSH 0x67d1c0                       ; 0050e767 | g_CMeleeClassVersion
    PUSH 0x50e790                       ; 0050e76c
    PUSH 0x635bbd                       ; 0050e771 | = "CMelee"
    PUSH 0x2f0d8f0                      ; 0050e776 | g_CMeleeClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0050e77b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0050e780
    RET                                 ; 0050e783

