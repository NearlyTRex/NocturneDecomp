; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec5e0(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_trigger.cpp_CTrigger_FUN_005e1180
;   core_waypoint.cpp_FUN_005ec4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec5e0
        ;   Label: core_waypoint.cpp_CWayPoint_FUN_005ec5e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ec5e1
    PUSH EBX                            ; 005ec5e5
    CALL core_waypoint.cpp_FUN_005ec4f0 ; 005ec5e6
        ;   XREF to: 005ec4f0 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_FUN_005ec4f0()
    ADD ESP,0x4                         ; 005ec5eb
    PUSH EBX                            ; 005ec5ee
    CALL core_trigger.cpp_CTrigger_FUN_005e1180 ; 005ec5ef
        ;   XREF to: 005e1180 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_FUN_005e1180(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 005ec5f4
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ec5f7
    PUSH EBX                            ; 005ec5fd
    CALL dword ptr [EAX]                ; 005ec5fe
    ADD ESP,0x4                         ; 005ec600
    POP EBX                             ; 005ec603
    RET                                 ; 005ec604

