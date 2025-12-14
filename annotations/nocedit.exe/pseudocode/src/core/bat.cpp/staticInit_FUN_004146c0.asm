; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_bat.cpp_staticInit_FUN_004146c0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBat_006152c6
;   undefined4 g_CBatClassVersion
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CBatClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 004146c0 | g_CDemonActorClassInfo
        ;   Label: core_bat.cpp_staticInit_FUN_004146c0
    PUSH 0x4                            ; 004146c5
    PUSH 0x66e4b4                       ; 004146c7 | g_CBatClassVersion
    PUSH 0x414790                       ; 004146cc
    PUSH 0x6152c6                       ; 004146d1 | = "CBat"
    PUSH 0x822710                       ; 004146d6 | g_CBatClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004146db
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004146e0
    RET                                 ; 004146e3

