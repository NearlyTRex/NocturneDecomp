; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hpatrol_cpp_CPatrolPoint_setup_FUN_0059c670(CPatrolPoint *this_ptr)
;
; Parameters:
; CPatrolPoint *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_setup_FUN_00587dc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c670
        ;   Label: core_hpatrol.cpp_CPatrolPoint_setup_FUN_0059c670
    PUSH EDX                            ; 0059c674
    CALL core_waypoint.cpp_CWayPoint_setup_FUN_00587dc0 ; 0059c675
        ;   XREF to: 00587dc0 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_CWayPoint_setup_FUN_00587dc0(CWayPoint * this_ptr)
    ADD ESP,0x4                         ; 0059c67a
    RET                                 ; 0059c67d

