; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_stairs.cpp_staticInit_FUN_005b9b00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CStairs_0065303a
;   int g_CStairsClassVersion = 0x2
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CStairsClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 005b9b00 | g_CDemonActorClassInfo
        ;   Label: core_stairs.cpp_staticInit_FUN_005b9b00
    PUSH 0x2                            ; 005b9b05
    PUSH 0x684190                       ; 005b9b07 | g_CStairsClassVersion
    PUSH 0x5b9b30                       ; 005b9b0c
    PUSH 0x65303a                       ; 005b9b11 | = "CStairs"
    PUSH 0x3f6ba24                      ; 005b9b16 | g_CStairsClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005b9b1b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005b9b20
    RET                                 ; 005b9b23

