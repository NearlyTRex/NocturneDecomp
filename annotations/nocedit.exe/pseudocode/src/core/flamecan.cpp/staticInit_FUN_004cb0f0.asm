; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_flamecan.cpp_staticInit_FUN_004cb0f0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFlameCan_0062a2a8
;   int g_CFlameCanClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CFlameCanClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 004cb0f0 | g_CDemonActorClassInfo
        ;   Label: core_flamecan.cpp_staticInit_FUN_004cb0f0
    PUSH 0x1                            ; 004cb0f5
    PUSH 0x67b4c4                       ; 004cb0f7 | g_CFlameCanClassVersion
    PUSH 0x4cb120                       ; 004cb0fc
    PUSH 0x62a2a8                       ; 004cb101 | = "CFlameCan"
    PUSH 0x2d7a700                      ; 004cb106 | g_CFlameCanClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004cb10b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004cb110
    RET                                 ; 004cb113

