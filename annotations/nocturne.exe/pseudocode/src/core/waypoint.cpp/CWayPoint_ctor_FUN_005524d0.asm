; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_005524d0(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_factoryFuncWayPoint_FUN_005524a0 at 005524b3
;
; Referenced Globals:
;   CDemonActor_vtable g_CWayPointVTable
;
; Called Functions:
;   core_trigger.cpp_CTrigger_ctor_FUN_005478b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005524d0
        ;   Label: core_waypoint.cpp_CWayPoint_ctor_FUN_005524d0
    PUSH EDX                            ; 005524d4
    CALL core_trigger.cpp_CTrigger_ctor_FUN_005478b0 ; 005524d5
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; CTrigger * core_trigger.cpp_CTrigger_ctor_FUN_005478b0(CTrigger * this_ptr)
    MOV dword ptr [EAX + 0x14c],0x5a4034 ; 005524da | g_CWayPointVTable
    MOV dword ptr [EAX + 0x158],0x3f000000 ; 005524e4
    MOV dword ptr [EAX + 0x15c],0x3f800000 ; 005524ee
    MOV dword ptr [EAX + 0x160],0x3f000000 ; 005524f8
    ADD ESP,0x4                         ; 00552502
    MOV dword ptr [EAX + 0x368],0x0     ; 00552505
    RET                                 ; 0055250f

