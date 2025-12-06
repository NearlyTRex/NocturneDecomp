; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_mobster.cpp_staticInit_FUN_00525070(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CMobster_00639686
;   undefined4 g_CMobsterClassVersion
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CMobsterClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 00525070 | CDemonActorType g_CEnemyClassInfo
        ;   Label: core_mobster.cpp_staticInit_FUN_00525070
    PUSH 0x7                            ; 00525075
    PUSH 0x67d6e4                       ; 00525077 | undefined4 g_CMobsterClassVersion
    PUSH 0x5251c0                       ; 0052507c
    PUSH 0x639686                       ; 00525081 | = "CMobster" | s_CMobster_00639686 = CMobster
    PUSH 0x2f37ef8                      ; 00525086 | CDemonActorType g_CMobsterClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0052508b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00525090
    RET                                 ; 00525093

