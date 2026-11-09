; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0(CDemonMission *this_ptr,CLocation *teleport_target)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CLocation *      Stack[0x8]:4   teleport_target
;
; XREF[2]:
;   core_event.cpp_FUN_0048c2e0 at 0049180f
;   core_teleport.cpp_FUN_00568e40 at 00568f0d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6ed0
        ;   Label: core_mission.cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f6ed1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f6ed5
    LEA EAX,[ECX + 0x1444]              ; 004f6ed9
    MOV EBX,dword ptr [EDX]             ; 004f6edf
    MOV dword ptr [EAX],EBX             ; 004f6ee1
    MOV EBX,dword ptr [EDX + 0x4]       ; 004f6ee3
    MOV dword ptr [EAX + 0x4],EBX       ; 004f6ee6
    MOV EBX,dword ptr [EDX + 0x8]       ; 004f6ee9
    MOV dword ptr [EAX + 0x8],EBX       ; 004f6eec
    MOV EDX,dword ptr [EDX + 0xc]       ; 004f6eef
    MOV dword ptr [EAX + 0xc],EDX       ; 004f6ef2
    MOV dword ptr [ECX + 0x1014],0x1    ; 004f6ef5
    POP EBX                             ; 004f6eff
    RET                                 ; 004f6f00

