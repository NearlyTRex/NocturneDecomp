; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_backgnd.cpp_staticInit_FUN_00412740(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBackgroundActor_00614e2e
;   int g_CBackgroundActorClassVersion = 0x2
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CBackgroundActorClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00412740 | g_CDemonActorClassInfo
        ;   Label: core_backgnd.cpp_staticInit_FUN_00412740
    PUSH 0x2                            ; 00412745
    PUSH 0x66e440                       ; 00412747 | g_CBackgroundActorClassVersion
    PUSH 0x412770                       ; 0041274c
    PUSH 0x614e2e                       ; 00412751 | = "CBackgroundActor"
    PUSH 0x82245c                       ; 00412756 | g_CBackgroundActorClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0041275b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00412760
    RET                                 ; 00412763

