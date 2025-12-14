; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_hotdemon.cpp_staticInit_FUN_004f6c30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHotDemon_0062f338
;   int g_CHotDemonClassVersion = 0x1
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CHotDemonClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 004f6c30 | g_CEnemyClassInfo
        ;   Label: core_hotdemon.cpp_staticInit_FUN_004f6c30
    PUSH 0x1                            ; 004f6c35
    PUSH 0x67cc70                       ; 004f6c37 | g_CHotDemonClassVersion
    PUSH 0x4f6c60                       ; 004f6c3c
    PUSH 0x62f338                       ; 004f6c41 | = "CHotDemon"
    PUSH 0x2db88f8                      ; 004f6c46 | g_CHotDemonClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004f6c4b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f6c50
    RET                                 ; 004f6c53

