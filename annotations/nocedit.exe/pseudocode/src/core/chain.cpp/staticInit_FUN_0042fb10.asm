; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_chain_cpp_staticInit_FUN_0042fb10(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CChain_0061778a
;   int g_CChainClassVersion = 0x4
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CChainClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 0042fb10 | g_CDemonActorClassInfo
        ;   Label: core_chain.cpp_staticInit_FUN_0042fb10
    PUSH 0x4                            ; 0042fb15
    PUSH 0x66e7d0                       ; 0042fb17 | g_CChainClassVersion
    PUSH 0x42fb40                       ; 0042fb1c
    PUSH 0x61778a                       ; 0042fb21 | = "CChain"
    PUSH 0x823de4                       ; 0042fb26 | g_CChainClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0042fb2b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0042fb30
    RET                                 ; 0042fb33

