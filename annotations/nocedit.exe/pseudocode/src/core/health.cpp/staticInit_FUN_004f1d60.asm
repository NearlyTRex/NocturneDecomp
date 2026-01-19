; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_health.cpp_staticInit_FUN_004f1d60(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHealthItem_0062e9d1
;   int g_CHealthItemClassVersion = 0x3
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CHealthItemClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 004f1d60 | g_CDemonActorClassInfo
        ;   Label: core_health.cpp_staticInit_FUN_004f1d60
    PUSH 0x3                            ; 004f1d65
    PUSH 0x67cc04                       ; 004f1d67 | g_CHealthItemClassVersion
    PUSH 0x4f1d90                       ; 004f1d6c
    PUSH 0x62e9d1                       ; 004f1d71 | = "CHealthItem"
    PUSH 0x2db8780                      ; 004f1d76 | g_CHealthItemClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004f1d7b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f1d80
    RET                                 ; 004f1d83

