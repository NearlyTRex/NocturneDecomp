; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_clearMissionData_FUN_004f5b80(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_clearMission_FUN_004f5b70 at 004f5b75
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004f5cc0 at 004f5cd2
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0 at 004f7349
;
; Called Functions:
;   core_mission.cpp_CDemonMission_removeAllActors_FUN_004f6d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5b80
        ;   Label: core_mission.cpp_CDemonMission_clearMissionData_FUN_004f5b80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f5b81
    PUSH EBX                            ; 004f5b85
    CALL core_mission.cpp_CDemonMission_removeAllActors_FUN_004f6d70 ; 004f5b86
        ;   XREF to: 004f6d70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeAllActors_FUN_004f6d70(CDemonMission * this_ptr)
    MOV dword ptr [EBX + 0x4],0x0       ; 004f5b8b
    MOV byte ptr [EBX + 0x133c],0x0     ; 004f5b92
    MOV dword ptr [EBX + 0x1010],0x0    ; 004f5b99
    MOV dword ptr [EBX + 0x1458],0x0    ; 004f5ba3
    ADD ESP,0x4                         ; 004f5bad
    MOV dword ptr [EBX + 0x145c],0x0    ; 004f5bb0
    POP EBX                             ; 004f5bba
    RET                                 ; 004f5bbb

