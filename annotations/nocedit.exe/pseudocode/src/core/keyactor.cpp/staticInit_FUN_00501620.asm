; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_keyactor.cpp_staticInit_FUN_00501620(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CKeyActor_00630c15
;   undefined4 g_CKeyActorClassVersion
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CKeyActorClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00501620 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_keyactor.cpp_staticInit_FUN_00501620
    PUSH 0x3                            ; 00501625
    PUSH 0x67cf2c                       ; 00501627 | undefined4 g_CKeyActorClassVersion
    PUSH 0x501650                       ; 0050162c
    PUSH 0x630c15                       ; 00501631 | = "CKeyActor" | s_CKeyActor_00630c15 = CKeyActor
    PUSH 0x2dcd798                      ; 00501636 | CDemonActorType g_CKeyActorClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0050163b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00501640
    RET                                 ; 00501643

