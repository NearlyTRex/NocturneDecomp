; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_zombie.cpp_staticInit_FUN_005f8c90(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CZombie_00658425
;   int g_CZombieClassVersion = 0xb
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CZombieClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 005f8c90 | CDemonActorType g_CEnemyClassInfo
        ;   Label: core_zombie.cpp_staticInit_FUN_005f8c90
    PUSH 0xb                            ; 005f8c95
    PUSH 0x6849b0                       ; 005f8c97 | int g_CZombieClassVersion
    PUSH 0x5f8fa0                       ; 005f8c9c
    PUSH 0x658425                       ; 005f8ca1 | = "CZombie" | s_CZombie_00658425 = CZombie
    PUSH 0x3f9ad20                      ; 005f8ca6 | CDemonActorType g_CZombieClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005f8cab | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005f8cb0
    RET                                 ; 005f8cb3

