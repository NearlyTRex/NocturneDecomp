; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWayPoint * core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70(CWayPoint * this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_factoryFunc_FUN_005ebe30 at 005ebe4a
;
; Referenced Globals:
;   CDemonActor_vtable g_CWayPointVTable
;
; Called Functions:
;   core_trigger.cpp_CTrigger_ctor_FUN_005df840
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ebe70
        ;   Label: core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70
    PUSH EDX                            ; 005ebe74
    CALL core_trigger.cpp_CTrigger_ctor_FUN_005df840 ; 005ebe75
        ;   XREF to: 005df840 (UNCONDITIONAL_CALL)  ; CTrigger * core_trigger.cpp_CTrigger_ctor_FUN_005df840(CTrigger * this_ptr)
    MOV dword ptr [EAX + 0x154],0x665484 ; 005ebe7a | g_CWayPointVTable
    MOV dword ptr [EAX + 0x160],0x3f000000 ; 005ebe84
    MOV dword ptr [EAX + 0x164],0x3f800000 ; 005ebe8e
    MOV dword ptr [EAX + 0x168],0x3f000000 ; 005ebe98
    ADD ESP,0x4                         ; 005ebea2
    MOV dword ptr [EAX + 0x370],0x0     ; 005ebea5
    RET                                 ; 005ebeaf

