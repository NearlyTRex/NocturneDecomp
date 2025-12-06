; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_filmreel.cpp_staticInit_FUN_004be620(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFilmReel_00629a95
;   TerminatedCString s_CFilmProjector_00629a9f
;   int g_CFilmReelClassVersion = 0x2
;   int g_CFilmProjectorClassVersion = 0x2
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CActorDestinationClassInfo
;   CDemonActorType g_CFilmReelClassInfo
;   CDemonActorType g_CFilmProjectorClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 004be620 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_filmreel.cpp_staticInit_FUN_004be620
    PUSH 0x2                            ; 004be625
    PUSH 0x67a2f8                       ; 004be627 | int g_CFilmReelClassVersion
    PUSH 0x4be670                       ; 004be62c
    PUSH 0x629a95                       ; 004be631 | = "CFilmReel" | s_CFilmReel_00629a95 = CFilmReel
    PUSH 0x2d12d38                      ; 004be636 | CDemonActorType g_CFilmReelClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004be63b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004be640
    PUSH 0x20a483c                      ; 004be643 | CDemonActorType g_CActorDestinationClassInfo
    PUSH 0x2                            ; 004be648
    PUSH 0x67a2fc                       ; 004be64a | int g_CFilmProjectorClassVersion
    PUSH 0x4bea00                       ; 004be64f
    PUSH 0x629a9f                       ; 004be654 | = "CFilmProjector" | s_CFilmProjector_00629a9f = CFilmProjector
    PUSH 0x2d12d74                      ; 004be659 | CDemonActorType g_CFilmProjectorClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004be65e | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004be663
    RET                                 ; 004be666

