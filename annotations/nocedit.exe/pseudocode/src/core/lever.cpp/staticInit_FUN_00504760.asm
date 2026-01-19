; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_lever.cpp_staticInit_FUN_00504760(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CLever_00631058
;   int g_CLeverClassVersion = 0x8
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CLeverClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00504760 | g_CDemonActorClassInfo
        ;   Label: core_lever.cpp_staticInit_FUN_00504760
    PUSH 0x8                            ; 00504765
    PUSH 0x67cfb4                       ; 00504767 | g_CLeverClassVersion
    PUSH 0x504790                       ; 0050476c
    PUSH 0x631058                       ; 00504771 | = "CLever"
    PUSH 0x2dd3058                      ; 00504776 | g_CLeverClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0050477b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00504780
    RET                                 ; 00504783

