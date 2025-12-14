; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_glass.cpp_staticInit_FUN_004e8fd0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGlass_0062df49
;   int g_CGlassClassVersion = 0x6
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CGlassClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 004e8fd0 | g_CDemonActorClassInfo
        ;   Label: core_glass.cpp_staticInit_FUN_004e8fd0
    PUSH 0x6                            ; 004e8fd5
    PUSH 0x67b944                       ; 004e8fd7 | g_CGlassClassVersion
    PUSH 0x4e9000                       ; 004e8fdc
    PUSH 0x62df49                       ; 004e8fe1 | = "CGlass"
    PUSH 0x2d83328                      ; 004e8fe6 | g_CGlassClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004e8feb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e8ff0
    RET                                 ; 004e8ff3

