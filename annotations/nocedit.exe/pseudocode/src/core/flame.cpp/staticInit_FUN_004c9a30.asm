; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_flame.cpp_staticInit_FUN_004c9a30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFlame_0062a0d6
;   int g_CFlameClassVersion = 0x7
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CFlameClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 004c9a30 | g_CDemonActorClassInfo
        ;   Label: core_flame.cpp_staticInit_FUN_004c9a30
    PUSH 0x7                            ; 004c9a35
    PUSH 0x67b4c0                       ; 004c9a37 | g_CFlameClassVersion
    PUSH 0x4c9a60                       ; 004c9a3c
    PUSH 0x62a0d6                       ; 004c9a41 | = "CFlame"
    PUSH 0x2d7a6c4                      ; 004c9a46 | g_CFlameClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004c9a4b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c9a50
    RET                                 ; 004c9a53

