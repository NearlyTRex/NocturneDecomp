; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_hero.cpp_staticInit_FUN_004f2120(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_0062ea66
;   TerminatedCString s_CHeroPlaceholder_0062ea6c
;   int g_CHeroClassVersion = 0xc
;   int g_CHeroPlaceholderClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CCharacterClassInfo
;   CDemonActorType g_CHeroClassInfo
;   CDemonActorType g_CHeroPlaceholderClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x823c14                       ; 004f2120 | g_CCharacterClassInfo
        ;   Label: core_hero.cpp_staticInit_FUN_004f2120
    PUSH 0xc                            ; 004f2125
    PUSH 0x67cc1c                       ; 004f2127 | g_CHeroClassVersion
    PUSH 0x0                            ; 004f212c
    PUSH 0x62ea66                       ; 004f212e | = "CHero"
    PUSH 0x2db87d4                      ; 004f2133 | g_CHeroClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004f2138
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f213d
    PUSH 0x821ff8                       ; 004f2140 | g_CDemonActorClassInfo
    PUSH 0x1                            ; 004f2145
    PUSH 0x67cc20                       ; 004f2147 | g_CHeroPlaceholderClassVersion
    PUSH 0x4f3bc0                       ; 004f214c
    PUSH 0x62ea6c                       ; 004f2151 | = "CHeroPlaceholder"
    PUSH 0x2db8810                      ; 004f2156 | g_CHeroPlaceholderClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004f215b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f2160
    RET                                 ; 004f2163

