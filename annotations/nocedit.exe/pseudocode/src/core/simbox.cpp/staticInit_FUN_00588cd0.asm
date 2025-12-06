; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_simbox.cpp_staticInit_FUN_00588cd0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CSimBox_00649bd2
;   int g_CSimBoxClassVersion = 0x3
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CSimBoxClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00588cd0 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_simbox.cpp_staticInit_FUN_00588cd0
    PUSH 0x3                            ; 00588cd5
    PUSH 0x68183c                       ; 00588cd7 | int g_CSimBoxClassVersion
    PUSH 0x588d00                       ; 00588cdc
    PUSH 0x649bd2                       ; 00588ce1 | = "CSimBox" | s_CSimBox_00649bd2 = CSimBox
    PUSH 0x36597e8                      ; 00588ce6 | CDemonActorType g_CSimBoxClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00588ceb | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00588cf0
    RET                                 ; 00588cf3

