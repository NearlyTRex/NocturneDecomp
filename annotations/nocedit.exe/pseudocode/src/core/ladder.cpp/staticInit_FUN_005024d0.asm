; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ladder_cpp_staticInit_FUN_005024d0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CLadder_00630df0
;   int g_CLadderClassVersion = 0x2
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CLadderClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 005024d0 | g_CDemonActorClassInfo
        ;   Label: core_ladder.cpp_staticInit_FUN_005024d0
    PUSH 0x2                            ; 005024d5
    PUSH 0x67cf48                       ; 005024d7 | g_CLadderClassVersion
    PUSH 0x502500                       ; 005024dc
    PUSH 0x630df0                       ; 005024e1 | = "CLadder"
    PUSH 0x2dcd7d8                      ; 005024e6 | g_CLadderClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005024eb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005024f0
    RET                                 ; 005024f3

