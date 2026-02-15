; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_staticInit_FUN_004440d0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CZombieCow_00619455
;   int g_CZombieCowClassVersion = 0x2
;   CDemonActorType g_CZombieCowClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 004440d0 | g_CEnemyClassInfo
        ;   Label: core_cow.cpp_staticInit_FUN_004440d0
    PUSH 0x2                            ; 004440d5
    PUSH 0x66ec60                       ; 004440d7 | g_CZombieCowClassVersion
    PUSH 0x444100                       ; 004440dc
    PUSH 0x619455                       ; 004440e1 | = "CZombieCow"
    PUSH 0x83c19c                       ; 004440e6 | g_CZombieCowClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004440eb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004440f0
    RET                                 ; 004440f3

