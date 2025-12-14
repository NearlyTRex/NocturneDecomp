; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_waypoint.cpp_staticInit_FUN_005ebd10(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CWayPoint_006574f7
;   int g_CWayPointClassVersion = 0x2
;   CDemonActorType g_CTriggerClassInfo
;   CDemonActorType g_CWayPointClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f87458                      ; 005ebd10 | g_CTriggerClassInfo
        ;   Label: core_waypoint.cpp_staticInit_FUN_005ebd10
    PUSH 0x2                            ; 005ebd15
    PUSH 0x68489c                       ; 005ebd17 | g_CWayPointClassVersion
    PUSH 0x5ebe30                       ; 005ebd1c
    PUSH 0x6574f7                       ; 005ebd21 | = "CWayPoint"
    PUSH 0x3f958e4                      ; 005ebd26 | g_CWayPointClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005ebd2b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005ebd30
    RET                                 ; 005ebd33

