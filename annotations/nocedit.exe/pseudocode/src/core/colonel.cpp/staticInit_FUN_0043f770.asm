; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_colonel_cpp_staticInit_FUN_0043f770(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CColonel_00618b71
;   int g_CColonelClassVersion = 0x1
;   CDemonActorType g_CColonelClassInfo
;   CDemonActorType g_CHeroClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2db87d4                      ; 0043f770 | g_CHeroClassInfo
        ;   Label: core_colonel.cpp_staticInit_FUN_0043f770
    PUSH 0x1                            ; 0043f775
    PUSH 0x66e8bc                       ; 0043f777 | g_CColonelClassVersion
    PUSH 0x43f7a0                       ; 0043f77c
    PUSH 0x618b71                       ; 0043f781 | = "CColonel"
    PUSH 0x83b168                       ; 0043f786 | g_CColonelClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0043f78b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0043f790
    RET                                 ; 0043f793

