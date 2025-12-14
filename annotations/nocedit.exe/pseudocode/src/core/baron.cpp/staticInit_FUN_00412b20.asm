; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_baron.cpp_staticInit_FUN_00412b20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBaron_00614eb1
;   undefined4 g_CBaronClassVersion
;   CDemonActorType g_CBaronClassInfo
;   CDemonActorType g_CHeroClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2db87d4                      ; 00412b20 | g_CHeroClassInfo
        ;   Label: core_baron.cpp_staticInit_FUN_00412b20
    PUSH 0x2                            ; 00412b25
    PUSH 0x66e45c                       ; 00412b27 | g_CBaronClassVersion
    PUSH 0x412b80                       ; 00412b2c
    PUSH 0x614eb1                       ; 00412b31 | = "CBaron"
    PUSH 0x8224e0                       ; 00412b36 | g_CBaronClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00412b3b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)

