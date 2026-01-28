; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gargoyle_cpp_staticInit_FUN_004e4470(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGargoyle_0062d7b7
;   int g_CGargoyleClassVersion = 0x2
;   CDemonActorType g_CEnemyClassInfo
;   CDemonActorType g_CGargoyleClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 004e4470 | g_CEnemyClassInfo
        ;   Label: core_gargoyle.cpp_staticInit_FUN_004e4470
    PUSH 0x2                            ; 004e4475
    PUSH 0x67b900                       ; 004e4477 | g_CGargoyleClassVersion
    PUSH 0x4e44a0                       ; 004e447c
    PUSH 0x62d7b7                       ; 004e4481 | = "CGargoyle"
    PUSH 0x2d83230                      ; 004e4486 | g_CGargoyleClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004e448b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e4490
    RET                                 ; 004e4493

