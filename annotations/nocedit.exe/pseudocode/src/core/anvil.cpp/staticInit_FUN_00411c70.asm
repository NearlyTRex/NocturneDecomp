; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_anvil.cpp_staticInit_FUN_00411c70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CAnvil_00614cf3
;   int g_CAnvilClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CAnvilClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00411c70 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_anvil.cpp_staticInit_FUN_00411c70
    PUSH 0x1                            ; 00411c75
    PUSH 0x66e3e8                       ; 00411c77 | int g_CAnvilClassVersion
    PUSH 0x411ca0                       ; 00411c7c
    PUSH 0x614cf3                       ; 00411c81 | = "CAnvil" | s_CAnvil_00614cf3 = CAnvil
    PUSH 0x8223e4                       ; 00411c86 | CDemonActorType g_CAnvilClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00411c8b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00411c90
    RET                                 ; 00411c93

