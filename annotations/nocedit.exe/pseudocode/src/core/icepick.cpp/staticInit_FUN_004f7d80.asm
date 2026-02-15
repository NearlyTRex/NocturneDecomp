; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_staticInit_FUN_004f7d80(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CIcePick_0062f58b
;   int g_CIcePickClassVersion = 0x1
;   CDemonActorType g_CHeroClassInfo
;   CDemonActorType g_CIcePickClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2db87d4                      ; 004f7d80 | g_CHeroClassInfo
        ;   Label: core_icepick.cpp_staticInit_FUN_004f7d80
    PUSH 0x1                            ; 004f7d85
    PUSH 0x67cca8                       ; 004f7d87 | g_CIcePickClassVersion
    PUSH 0x4f7db0                       ; 004f7d8c
    PUSH 0x62f58b                       ; 004f7d91 | = "CIcePick"
    PUSH 0x2db89b8                      ; 004f7d96 | g_CIcePickClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004f7d9b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f7da0
    RET                                 ; 004f7da3

