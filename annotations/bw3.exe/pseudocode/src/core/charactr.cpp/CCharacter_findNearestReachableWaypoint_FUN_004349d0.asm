; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_charactr_cpp_CCharacter_findNearestReachableWaypoint_FUN_004349d0(CCharacter *this_ptr,CWayPoint *target_waypoint)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CWayPoint *      Stack[0x8]:4   target_waypoint
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_pickRandomNamedWaypoint_FUN_004348b0 at 004349ad
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660 at 00431935
;   core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_004333e0 at 00433502
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00579430
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004349d0
        ;   Label: core_charactr.cpp_CCharacter_findNearestReachableWaypoint_FUN_004349d0
    MOV EDX,dword ptr [EAX + 0x27a8]    ; 004349d4
    PUSH EDX                            ; 004349da
    MOV ECX,dword ptr [ESP + 0xc]       ; 004349db
    PUSH ECX                            ; 004349df
    ADD EAX,0x20                        ; 004349e0
    PUSH EAX                            ; 004349e3
    CALL core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00579430 ; 004349e4
        ;   XREF to: 00579430 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00579430(CWayPoint * this_ptr, CWayPoint * start_waypoint, int skip_path_check)
    ADD ESP,0xc                         ; 004349e9
    RET                                 ; 004349ec

