; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec4d0(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_trigger.cpp_CTrigger_FUN_005e0f70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005ec4d0
        ;   Label: core_waypoint.cpp_CWayPoint_FUN_005ec4d0
    PUSH EDX                            ; 005ec4d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ec4d5
    PUSH ECX                            ; 005ec4d9
    CALL core_trigger.cpp_CTrigger_FUN_005e0f70 ; 005ec4da
        ;   XREF to: 005e0f70 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_FUN_005e0f70(CTrigger * this_ptr)
    ADD ESP,0x8                         ; 005ec4df
    RET                                 ; 005ec4e2

