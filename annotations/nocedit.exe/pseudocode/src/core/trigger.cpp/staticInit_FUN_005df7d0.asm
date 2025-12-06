; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_trigger.cpp_staticInit_FUN_005df7d0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTrigger_006555dc
;   int g_CTriggerClassVersion = 0xb
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CTriggerClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 005df7d0 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_trigger.cpp_staticInit_FUN_005df7d0
    PUSH 0xb                            ; 005df7d5
    PUSH 0x6843e4                       ; 005df7d7 | int g_CTriggerClassVersion
    PUSH 0x5df800                       ; 005df7dc
    PUSH 0x6555dc                       ; 005df7e1 | = "CTrigger" | s_CTrigger_006555dc = CTrigger
    PUSH 0x3f87458                      ; 005df7e6 | CDemonActorType g_CTriggerClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005df7eb | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005df7f0
    RET                                 ; 005df7f3

