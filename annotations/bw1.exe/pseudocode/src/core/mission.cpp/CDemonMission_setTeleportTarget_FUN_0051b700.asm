; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_0051b700(CDemonMission *this_ptr,CLocation *teleport_target)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CLocation *      Stack[0x8]:4   teleport_target
;
; XREF[2]:
;   core_event.cpp_FUN_004a1d00 at 004a69a6
;   core_teleport.cpp_CTeleport_process_FUN_00594f60 at 0059502d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b700
        ;   Label: core_mission.cpp_CDemonMission_setTeleportTarget_FUN_0051b700
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051b701
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051b705
    LEA EAX,[ECX + 0x1120]              ; 0051b709
    MOV EBX,dword ptr [EDX]             ; 0051b70f
    MOV dword ptr [EAX],EBX             ; 0051b711
    MOV EBX,dword ptr [EDX + 0x4]       ; 0051b713
    MOV dword ptr [EAX + 0x4],EBX       ; 0051b716
    MOV EBX,dword ptr [EDX + 0x8]       ; 0051b719
    MOV dword ptr [EAX + 0x8],EBX       ; 0051b71c
    MOV EDX,dword ptr [EDX + 0xc]       ; 0051b71f
    MOV dword ptr [EAX + 0xc],EDX       ; 0051b722
    MOV dword ptr [ECX + 0x1014],0x1    ; 0051b725
    POP EBX                             ; 0051b72f
    RET                                 ; 0051b730

