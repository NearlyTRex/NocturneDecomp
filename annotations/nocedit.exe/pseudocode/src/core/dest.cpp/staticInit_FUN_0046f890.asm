; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dest.cpp_staticInit_FUN_0046f890(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CActorDestination_0061e37a
;   int g_CActorDestinationClassVersion = 0x4
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CActorDestinationClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 0046f890 | g_CDemonActorClassInfo
        ;   Label: core_dest.cpp_staticInit_FUN_0046f890
    PUSH 0x4                            ; 0046f895
    PUSH 0x66ef3c                       ; 0046f897 | g_CActorDestinationClassVersion
    PUSH 0x46f8c0                       ; 0046f89c
    PUSH 0x61e37a                       ; 0046f8a1 | = "CActorDestination"
    PUSH 0x20a483c                      ; 0046f8a6 | g_CActorDestinationClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0046f8ab
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0046f8b0
    RET                                 ; 0046f8b3

