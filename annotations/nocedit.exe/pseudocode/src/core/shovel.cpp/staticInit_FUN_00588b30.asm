; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_shovel_cpp_staticInit_FUN_00588b30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CShovel_00649b7f
;   int g_CShovelClassVersion = 0x1
;   CDemonActorType g_CShovelClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 00588b30 | g_CWeaponClassInfo
        ;   Label: core_shovel.cpp_staticInit_FUN_00588b30
    PUSH 0x1                            ; 00588b35
    PUSH 0x681828                       ; 00588b37 | g_CShovelClassVersion
    PUSH 0x588b60                       ; 00588b3c
    PUSH 0x649b7f                       ; 00588b41 | = "CShovel"
    PUSH 0x36597ac                      ; 00588b46 | g_CShovelClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00588b4b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00588b50
    RET                                 ; 00588b53

