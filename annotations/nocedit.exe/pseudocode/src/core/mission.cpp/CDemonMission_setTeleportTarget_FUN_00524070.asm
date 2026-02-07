; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_00524070 (CDemonMission *this_ptr,CLocation *teleport_target)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CLocation *      Stack[0x8]:4   teleport_target
;
; XREF[1]:
;   core_teleport.cpp_CTeleport_process_FUN_005daa20 at 005daabb
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00524070
        ;   Label: core_mission.cpp_CDemonMission_setTeleportTarget_FUN_00524070
    MOV EAX,dword ptr [ESP + 0x4]       ; 00524074
    MOV ECX,dword ptr [EDX]             ; 00524078
    MOV dword ptr [EAX + 0x550],ECX     ; 0052407a
    MOV ECX,dword ptr [EDX + 0x4]       ; 00524080
    MOV dword ptr [EAX + 0x554],ECX     ; 00524083
    MOV ECX,dword ptr [EDX + 0x8]       ; 00524089
    MOV dword ptr [EAX + 0x558],ECX     ; 0052408c
    MOV EDX,dword ptr [EDX + 0xc]       ; 00524092
    MOV dword ptr [EAX + 0x55c],EDX     ; 00524095
    RET                                 ; 0052409b

