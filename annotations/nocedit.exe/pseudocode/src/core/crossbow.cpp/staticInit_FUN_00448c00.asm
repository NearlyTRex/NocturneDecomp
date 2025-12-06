; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_crossbow.cpp_staticInit_FUN_00448c00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CCrossbow_00619b5a
;   int g_CCrossbowClassVersion = 0x1
;   CDemonActorType g_CCrossbowClassInfo
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 00448c00 | CDemonActorType g_CWeaponClassInfo
        ;   Label: core_crossbow.cpp_staticInit_FUN_00448c00
    PUSH 0x1                            ; 00448c05
    PUSH 0x66ec8c                       ; 00448c07 | int g_CCrossbowClassVersion
    PUSH 0x448c30                       ; 00448c0c
    PUSH 0x619b5a                       ; 00448c11 | = "CCrossbow" | s_CCrossbow_00619b5a = CCrossbow
    PUSH 0x887980                       ; 00448c16 | CDemonActorType g_CCrossbowClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00448c1b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00448c20
    RET                                 ; 00448c23

