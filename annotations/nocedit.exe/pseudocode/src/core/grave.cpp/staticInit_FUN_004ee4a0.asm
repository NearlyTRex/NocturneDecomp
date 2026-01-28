; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_grave_cpp_staticInit_FUN_004ee4a0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGrave_0062e468
;   int g_CGraveClassVersion = 0x4
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CGraveClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 004ee4a0 | g_CDemonActorClassInfo
        ;   Label: core_grave.cpp_staticInit_FUN_004ee4a0
    PUSH 0x4                            ; 004ee4a5
    PUSH 0x67cba4                       ; 004ee4a7 | g_CGraveClassVersion
    PUSH 0x4ee4d0                       ; 004ee4ac
    PUSH 0x62e468                       ; 004ee4b1 | = "CGrave"
    PUSH 0x2db862c                      ; 004ee4b6 | g_CGraveClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004ee4bb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ee4c0
    RET                                 ; 004ee4c3

