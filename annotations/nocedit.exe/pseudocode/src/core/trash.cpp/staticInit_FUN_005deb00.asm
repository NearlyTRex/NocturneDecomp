; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_trash.cpp_staticInit_FUN_005deb00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTrash_00655566
;   int g_CTrashClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CTrashClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 005deb00 | g_CDemonActorClassInfo
        ;   Label: core_trash.cpp_staticInit_FUN_005deb00
    PUSH 0x1                            ; 005deb05
    PUSH 0x684338                       ; 005deb07 | g_CTrashClassVersion
    PUSH 0x5deb30                       ; 005deb0c
    PUSH 0x655566                       ; 005deb11 | = "CTrash"
    PUSH 0x3f8741c                      ; 005deb16 | g_CTrashClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005deb1b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005deb20
    RET                                 ; 005deb23

