; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_staticInit_FUN_00408320(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CDemonActor_00613548
;   int g_CDemonActorClassVersion = 0x7
;   CDemonActorType g_CDemonActorClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00408320
        ;   Label: core_actor.cpp_staticInit_FUN_00408320
    PUSH 0x7                            ; 00408322
    PUSH 0x66e170                       ; 00408324 | int g_CDemonActorClassVersion
    PUSH 0x0                            ; 00408329
    PUSH 0x613548                       ; 0040832b | = "CDemonActor" | s_CDemonActor_00613548 = CDemonActor
    PUSH 0x821ff8                       ; 00408330 | CDemonActorType g_CDemonActorClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00408335 | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0040833a
    RET                                 ; 0040833d

