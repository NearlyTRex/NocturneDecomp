; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_succubus_cpp_staticInit_FUN_005c6a10(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CSuccubus_00653fb9
;   int g_CSuccubusClassVersion = 0x1
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CSuccubusClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 005c6a10 | g_CEnemyClassInfo
        ;   Label: core_succubus.cpp_staticInit_FUN_005c6a10
    PUSH 0x1                            ; 005c6a15
    PUSH 0x6841d4                       ; 005c6a17 | g_CSuccubusClassVersion
    PUSH 0x5c6a40                       ; 005c6a1c
    PUSH 0x653fb9                       ; 005c6a21 | = "CSuccubus"
    PUSH 0x3f6bb98                      ; 005c6a26 | g_CSuccubusClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005c6a2b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005c6a30
    RET                                 ; 005c6a33

