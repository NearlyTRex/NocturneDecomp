; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_staticInit_FUN_005df7d0(void)
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

    PUSH 0x821ff8                       ; 005df7d0 | g_CDemonActorClassInfo
        ;   Label: core_trigger.cpp_staticInit_FUN_005df7d0
    PUSH 0xb                            ; 005df7d5
    PUSH 0x6843e4                       ; 005df7d7 | g_CTriggerClassVersion
    PUSH 0x5df800                       ; 005df7dc
    PUSH 0x6555dc                       ; 005df7e1 | = "CTrigger"
    PUSH 0x3f87458                      ; 005df7e6 | g_CTriggerClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005df7eb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005df7f0
    RET                                 ; 005df7f3

