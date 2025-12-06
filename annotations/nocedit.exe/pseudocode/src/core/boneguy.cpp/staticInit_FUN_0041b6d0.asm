; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_boneguy.cpp_staticInit_FUN_0041b6d0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBoneGuy_00615efd
;   undefined4 g_CBoneGuyClassVersion
;   CDemonActorType g_CBoneGuyClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 0041b6d0 | CDemonActorType g_CEnemyClassInfo
        ;   Label: core_boneguy.cpp_staticInit_FUN_0041b6d0
    PUSH 0x5                            ; 0041b6d5
    PUSH 0x66e594                       ; 0041b6d7 | undefined4 g_CBoneGuyClassVersion
    PUSH 0x41b820                       ; 0041b6dc
    PUSH 0x615efd                       ; 0041b6e1 | = "CBoneGuy" | s_CBoneGuy_00615efd = CBoneGuy
    PUSH 0x822970                       ; 0041b6e6 | CDemonActorType g_CBoneGuyClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0041b6eb | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0041b6f0
    RET                                 ; 0041b6f3

