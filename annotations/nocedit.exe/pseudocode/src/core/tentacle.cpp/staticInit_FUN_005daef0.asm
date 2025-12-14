; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_tentacle.cpp_staticInit_FUN_005daef0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTentacle_00654d94
;   undefined4 g_CTentacleClassVersion
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CTentacleClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 005daef0 | g_CEnemyClassInfo
        ;   Label: core_tentacle.cpp_staticInit_FUN_005daef0
    PUSH 0x2                            ; 005daef5
    PUSH 0x6842c8                       ; 005daef7 | g_CTentacleClassVersion
    PUSH 0x5daf20                       ; 005daefc
    PUSH 0x654d94                       ; 005daf01 | = "CTentacle"
    PUSH 0x3f6cd18                      ; 005daf06 | g_CTentacleClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005daf0b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005daf10
    RET                                 ; 005daf13

