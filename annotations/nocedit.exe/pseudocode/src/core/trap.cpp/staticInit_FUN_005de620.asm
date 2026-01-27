; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_trap.cpp_staticInit_FUN_005de620(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTrap_00655515
;   int g_CTrapClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CTrapClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 005de620 | g_CDemonActorClassInfo
        ;   Label: core_trap.cpp_staticInit_FUN_005de620
    PUSH 0x1                            ; 005de625
    PUSH 0x684324                       ; 005de627 | g_CTrapClassVersion
    PUSH 0x5de650                       ; 005de62c
    PUSH 0x655515                       ; 005de631 | = "CTrap"
    PUSH 0x3f873e0                      ; 005de636 | g_CTrapClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005de63b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005de640
    RET                                 ; 005de643

