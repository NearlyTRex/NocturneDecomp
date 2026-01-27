; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_batcreat.cpp_staticInit_FUN_00415080(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBatCreature_00615449
;   int g_CBatCreatureClassVersion = 0x1
;   CDemonActorType g_CBatCreatureClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 00415080 | g_CEnemyClassInfo
        ;   Label: core_batcreat.cpp_staticInit_FUN_00415080
    PUSH 0x1                            ; 00415085
    PUSH 0x66e4c4                       ; 00415087 | g_CBatCreatureClassVersion
    PUSH 0x4150b0                       ; 0041508c
    PUSH 0x615449                       ; 00415091 | = "CBatCreature"
    PUSH 0x82277c                       ; 00415096 | g_CBatCreatureClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0041509b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004150a0
    RET                                 ; 004150a3

