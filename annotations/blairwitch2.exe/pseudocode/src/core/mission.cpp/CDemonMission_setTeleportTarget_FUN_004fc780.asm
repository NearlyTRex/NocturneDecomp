; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004fc780(CDemonMission *this_ptr,CLocation *teleport_target)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CLocation *      Stack[0x8]:4   teleport_target
;
; XREF[2]:
;   core_event.cpp_FUN_00489670 at 0048e0db
;   core_teleport.cpp_CTeleport_process_FUN_00572330 at 005723fd
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004fc780
        ;   Label: core_mission.cpp_CDemonMission_setTeleportTarget_FUN_004fc780
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fc784
    MOV ECX,dword ptr [EDX]             ; 004fc788
    MOV dword ptr [EAX + 0x111c],ECX    ; 004fc78a
    MOV ECX,dword ptr [EDX + 0x4]       ; 004fc790
    MOV dword ptr [EAX + 0x1120],ECX    ; 004fc793
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fc799
    MOV dword ptr [EAX + 0x1124],ECX    ; 004fc79c
    MOV EDX,dword ptr [EDX + 0xc]       ; 004fc7a2
    MOV dword ptr [EAX + 0x1128],EDX    ; 004fc7a5
    RET                                 ; 004fc7ab

