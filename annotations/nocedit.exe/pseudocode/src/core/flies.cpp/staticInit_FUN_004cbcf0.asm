; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_flies.cpp_staticInit_FUN_004cbcf0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFlies_0062a3d6
;   int g_CFliesClassVersion = 0x3
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CFliesClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 004cbcf0 | g_CDemonActorClassInfo
        ;   Label: core_flies.cpp_staticInit_FUN_004cbcf0
    PUSH 0x3                            ; 004cbcf5
    PUSH 0x67b510                       ; 004cbcf7 | g_CFliesClassVersion
    PUSH 0x4cbd20                       ; 004cbcfc
    PUSH 0x62a3d6                       ; 004cbd01 | = "CFlies"
    PUSH 0x2d7a7c4                      ; 004cbd06 | g_CFliesClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004cbd0b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004cbd10
    RET                                 ; 004cbd13

