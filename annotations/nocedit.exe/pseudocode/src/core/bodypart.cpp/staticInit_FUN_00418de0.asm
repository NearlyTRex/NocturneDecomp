; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_bodypart.cpp_staticInit_FUN_00418de0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBodyPart_00615b6c
;   undefined4 g_CBodyPartClassVersion
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CBodyPartClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00418de0 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_bodypart.cpp_staticInit_FUN_00418de0
    PUSH 0x5                            ; 00418de5
    PUSH 0x66e52c                       ; 00418de7 | undefined4 g_CBodyPartClassVersion
    PUSH 0x418fd0                       ; 00418dec
    PUSH 0x615b6c                       ; 00418df1 | = "CBodyPart" | s_CBodyPart_00615b6c = CBodyPart
    PUSH 0x822908                       ; 00418df6 | CDemonActorType g_CBodyPartClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00418dfb | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00418e00
    RET                                 ; 00418e03

