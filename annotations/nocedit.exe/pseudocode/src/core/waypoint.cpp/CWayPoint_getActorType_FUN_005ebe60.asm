; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_waypoint.cpp_CWayPoint_getActorType_FUN_005ebe60(CWayPoint * this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CWayPointClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f958e4                   ; 005ebe60 | CDemonActorType g_CWayPointClassInfo
        ;   Label: core_waypoint.cpp_CWayPoint_getActorType_FUN_005ebe60
    RET                                 ; 005ebe65

