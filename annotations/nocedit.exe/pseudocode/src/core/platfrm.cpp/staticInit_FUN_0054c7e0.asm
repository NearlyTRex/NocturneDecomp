; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_platfrm.cpp_staticInit_FUN_0054c7e0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CPlatform_0063f756
;   undefined4 g_CPlatformClassVersion
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CPlatformClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 0054c7e0 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_platfrm.cpp_staticInit_FUN_0054c7e0
    PUSH 0xb                            ; 0054c7e5
    PUSH 0x680cbc                       ; 0054c7e7 | undefined4 g_CPlatformClassVersion
    PUSH 0x54c810                       ; 0054c7ec
    PUSH 0x63f756                       ; 0054c7f1 | = "CPlatform" | s_CPlatform_0063f756 = CPlatform
    PUSH 0x30d5054                      ; 0054c7f6 | CDemonActorType g_CPlatformClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0054c7fb | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0054c800
    RET                                 ; 0054c803

