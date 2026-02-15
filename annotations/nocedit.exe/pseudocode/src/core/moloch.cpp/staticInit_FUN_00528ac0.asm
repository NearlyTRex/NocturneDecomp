; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_staticInit_FUN_00528ac0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CMoloch_00639d2d
;   int g_CMolochClassVersion = 0x1
;   CDemonActorType g_CHeroClassInfo
;   CDemonActorType g_CMolochClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2db87d4                      ; 00528ac0 | g_CHeroClassInfo
        ;   Label: core_moloch.cpp_staticInit_FUN_00528ac0
    PUSH 0x1                            ; 00528ac5
    PUSH 0x67d704                       ; 00528ac7 | g_CMolochClassVersion
    PUSH 0x528af0                       ; 00528acc
    PUSH 0x639d2d                       ; 00528ad1 | = "CMoloch"
    PUSH 0x2f37f34                      ; 00528ad6 | g_CMolochClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00528adb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00528ae0
    RET                                 ; 00528ae3

