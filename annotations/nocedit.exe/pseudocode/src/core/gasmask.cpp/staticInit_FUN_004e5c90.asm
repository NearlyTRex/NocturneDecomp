; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gasmask_cpp_staticInit_FUN_004e5c90(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGasMask_0062da8c
;   int g_CGasMaskClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CGasMaskClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 004e5c90 | g_CDemonActorClassInfo
        ;   Label: core_gasmask.cpp_staticInit_FUN_004e5c90
    PUSH 0x1                            ; 004e5c95
    PUSH 0x67b918                       ; 004e5c97 | g_CGasMaskClassVersion
    PUSH 0x4e5cc0                       ; 004e5c9c
    PUSH 0x62da8c                       ; 004e5ca1 | = "CGasMask"
    PUSH 0x2d8326c                      ; 004e5ca6 | g_CGasMaskClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004e5cab
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e5cb0
    RET                                 ; 004e5cb3

