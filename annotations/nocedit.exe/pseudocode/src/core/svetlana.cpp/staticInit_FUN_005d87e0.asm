; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_svetlana.cpp_staticInit_FUN_005d87e0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CSvetlana_006548da
;   int g_CSvetlanaClassVersion = 0x1
;   CDemonActorType g_CHeroClassInfo
;   CDemonActorType g_CSvetlanaClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2db87d4                      ; 005d87e0 | CDemonActorType g_CHeroClassInfo
        ;   Label: core_svetlana.cpp_staticInit_FUN_005d87e0
    PUSH 0x1                            ; 005d87e5
    PUSH 0x684238                       ; 005d87e7 | int g_CSvetlanaClassVersion
    PUSH 0x5d8810                       ; 005d87ec
    PUSH 0x6548da                       ; 005d87f1 | = "CSvetlana" | s_CSvetlana_006548da = CSvetlana
    PUSH 0x3f6cbdc                      ; 005d87f6 | CDemonActorType g_CSvetlanaClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005d87fb | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005d8800
    RET                                 ; 005d8803

