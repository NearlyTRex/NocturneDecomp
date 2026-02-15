; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_staticInit_FUN_004f47d0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHostage_0062ee12
;   int g_CHostageClassVersion = 0xc
;   CDemonActorType g_CHostageClassInfo
;   CDemonActorType g_CNPCClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2fd8ce0                      ; 004f47d0 | g_CNPCClassInfo
        ;   Label: core_hostage.cpp_staticInit_FUN_004f47d0
    PUSH 0xc                            ; 004f47d5
    PUSH 0x67cc5c                       ; 004f47d7 | g_CHostageClassVersion
    PUSH 0x4f4800                       ; 004f47dc
    PUSH 0x62ee12                       ; 004f47e1 | = "CHostage"
    PUSH 0x2db888c                      ; 004f47e6 | g_CHostageClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004f47eb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f47f0
    RET                                 ; 004f47f3

