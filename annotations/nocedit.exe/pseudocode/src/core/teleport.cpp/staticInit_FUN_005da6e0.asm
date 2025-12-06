; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_teleport.cpp_staticInit_FUN_005da6e0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTeleportDest_00654c13
;   TerminatedCString s_CTeleport_00654c21
;   int g_CTeleportDestClassVersion = 0x1
;   int g_CTeleportClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CTeleportDestClassInfo
;   CDemonActorType g_CTeleportClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 005da6e0 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_teleport.cpp_staticInit_FUN_005da6e0
    PUSH 0x1                            ; 005da6e5
    PUSH 0x684294                       ; 005da6e7 | int g_CTeleportDestClassVersion
    PUSH 0x5da730                       ; 005da6ec
    PUSH 0x654c13                       ; 005da6f1 | = "CTeleportDest" | s_CTeleportDest_00654c13 = CTeleportDest
    PUSH 0x3f6cc90                      ; 005da6f6 | CDemonActorType g_CTeleportDestClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005da6fb | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005da700
    PUSH 0x821ff8                       ; 005da703 | CDemonActorType g_CDemonActorClassInfo
    PUSH 0x1                            ; 005da708
    PUSH 0x684298                       ; 005da70a | int g_CTeleportClassVersion
    PUSH 0x5da9a0                       ; 005da70f
    PUSH 0x654c21                       ; 005da714 | = "CTeleport" | s_CTeleport_00654c21 = CTeleport
    PUSH 0x3f6cccc                      ; 005da719 | CDemonActorType g_CTeleportClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005da71e | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005da723
    RET                                 ; 005da726

