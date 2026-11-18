; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_charactr_cpp_CCharacter_findNearestReachableWaypoint_FUN_0042b420(CCharacter *this_ptr,CWayPoint *target_waypoint)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CWayPoint *      Stack[0x8]:4   target_waypoint
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_pickRandomNamedWaypoint_FUN_0042b300 at 0042b3fd
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 at 00428a6e
;   core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_00429f20 at 0042a042
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005882d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b420
        ;   Label: core_charactr.cpp_CCharacter_findNearestReachableWaypoint_FUN_0042b420
    MOV EDX,dword ptr [EAX + 0x2814]    ; 0042b424
    PUSH EDX                            ; 0042b42a
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042b42b
    PUSH ECX                            ; 0042b42f
    ADD EAX,0x20                        ; 0042b430
    PUSH EAX                            ; 0042b433
    CALL core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005882d0 ; 0042b434
        ;   XREF to: 005882d0 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005882d0(CWayPoint * this_ptr, CWayPoint * start_waypoint, int skip_path_check)
    ADD ESP,0xc                         ; 0042b439
    RET                                 ; 0042b43c

