; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_staticInit_FUN_004a7c30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CEmitter_0062404a
;   int g_CEmitterClassVersion = 0x7
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CEmitterClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 004a7c30 | g_CDemonActorClassInfo
        ;   Label: core_emitter.cpp_staticInit_FUN_004a7c30
    PUSH 0x7                            ; 004a7c35
    PUSH 0x679354                       ; 004a7c37 | g_CEmitterClassVersion
    PUSH 0x4a7c60                       ; 004a7c3c
    PUSH 0x62404a                       ; 004a7c41 | = "CEmitter"
    PUSH 0x2cf2b7c                      ; 004a7c46 | g_CEmitterClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004a7c4b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a7c50
    RET                                 ; 004a7c53

