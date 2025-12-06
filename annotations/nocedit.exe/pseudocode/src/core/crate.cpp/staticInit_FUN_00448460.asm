; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_crate.cpp_staticInit_FUN_00448460(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CCrate_00619ada
;   int g_CCrateClassVersion = 0x2
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CCrateClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00448460 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_crate.cpp_staticInit_FUN_00448460
    PUSH 0x2                            ; 00448465
    PUSH 0x66ec78                       ; 00448467 | int g_CCrateClassVersion
    PUSH 0x448490                       ; 0044846c
    PUSH 0x619ada                       ; 00448471 | = "CCrate" | s_CCrate_00619ada = CCrate
    PUSH 0x887944                       ; 00448476 | CDemonActorType g_CCrateClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0044847b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00448480
    RET                                 ; 00448483

