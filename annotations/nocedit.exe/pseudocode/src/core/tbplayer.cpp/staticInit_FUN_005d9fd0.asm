; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_tbplayer.cpp_staticInit_FUN_005d9fd0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBassPlayer_00654b85
;   TerminatedCString s_CDrummer_00654b91
;   int g_CBassPlayerClassVersion = 0x1
;   int g_CDrummerClassVersion = 0x1
;   CDemonActorType g_CNPCClassInfo
;   CDemonActorType g_CBassPlayerClassInfo
;   CDemonActorType g_CDrummerClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2fd8ce0                      ; 005d9fd0 | CDemonActorType g_CNPCClassInfo
        ;   Label: core_tbplayer.cpp_staticInit_FUN_005d9fd0
    PUSH 0x1                            ; 005d9fd5
    PUSH 0x684268                       ; 005d9fd7 | int g_CBassPlayerClassVersion
    PUSH 0x5da020                       ; 005d9fdc
    PUSH 0x654b85                       ; 005d9fe1 | = "CBassPlayer" | s_CBassPlayer_00654b85 = CBassPlayer
    PUSH 0x3f6cc18                      ; 005d9fe6 | CDemonActorType g_CBassPlayerClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005d9feb | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005d9ff0
    PUSH 0x2fd8ce0                      ; 005d9ff3 | CDemonActorType g_CNPCClassInfo
    PUSH 0x1                            ; 005d9ff8
    PUSH 0x68426c                       ; 005d9ffa | int g_CDrummerClassVersion
    PUSH 0x5da280                       ; 005d9fff
    PUSH 0x654b91                       ; 005da004 | = "CDrummer" | s_CDrummer_00654b91 = CDrummer
    PUSH 0x3f6cc54                      ; 005da009 | CDemonActorType g_CDrummerClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005da00e | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005da013
    RET                                 ; 005da016

