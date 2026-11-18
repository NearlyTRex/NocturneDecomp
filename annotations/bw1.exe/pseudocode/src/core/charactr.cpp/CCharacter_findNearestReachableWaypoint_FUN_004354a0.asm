; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_charactr_cpp_CCharacter_findNearestReachableWaypoint_FUN_004354a0(CCharacter *this_ptr,CWayPoint *target_waypoint)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CWayPoint *      Stack[0x8]:4   target_waypoint
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_pickRandomNamedWaypoint_FUN_00435380 at 0043547d
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240 at 00432510
;   core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_00433f10 at 00434032
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005abb80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004354a0
        ;   Label: core_charactr.cpp_CCharacter_findNearestReachableWaypoint_FUN_004354a0
    MOV EDX,dword ptr [EAX + 0x27a8]    ; 004354a4
    PUSH EDX                            ; 004354aa
    MOV ECX,dword ptr [ESP + 0xc]       ; 004354ab
    PUSH ECX                            ; 004354af
    ADD EAX,0x20                        ; 004354b0
    PUSH EAX                            ; 004354b3
    CALL core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005abb80 ; 004354b4
        ;   XREF to: 005abb80 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005abb80(CWayPoint * this_ptr, CWayPoint * start_waypoint, int skip_path_check)
    ADD ESP,0xc                         ; 004354b9
    RET                                 ; 004354bc

