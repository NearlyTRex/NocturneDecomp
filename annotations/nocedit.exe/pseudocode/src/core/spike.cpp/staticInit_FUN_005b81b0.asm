; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_spike_cpp_staticInit_FUN_005b81b0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CSpike_00652dc8
;   int g_CSpikeClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CSpikeClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 005b81b0 | g_CDemonActorClassInfo
        ;   Label: core_spike.cpp_staticInit_FUN_005b81b0
    PUSH 0x1                            ; 005b81b5
    PUSH 0x684158                       ; 005b81b7 | g_CSpikeClassVersion
    PUSH 0x5b81e0                       ; 005b81bc
    PUSH 0x652dc8                       ; 005b81c1 | = "CSpike"
    PUSH 0x3f6b9a4                      ; 005b81c6 | g_CSpikeClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005b81cb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005b81d0
    RET                                 ; 005b81d3

