; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_0051a3b0(CDemonMission *param_1)
;
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_clearMission_FUN_0051a3a0 at 0051a3a5
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_0051a4f0 at 0051a502
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0 at 0051bb79
;
; Called Functions:
;   core_mission.cpp_CDemonMission_removeAllActors_FUN_0051b5a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a3b0
        ;   Label: core_mission.cpp_FUN_0051a3b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051a3b1
    PUSH EBX                            ; 0051a3b5
    CALL core_mission.cpp_CDemonMission_removeAllActors_FUN_0051b5a0 ; 0051a3b6
        ;   XREF to: 0051b5a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeAllActors_FUN_0051b5a0(CDemonMission * this_ptr)
    MOV dword ptr [EBX + 0x4],0x0       ; 0051a3bb
    MOV byte ptr [EBX + 0x1018],0x0     ; 0051a3c2
    MOV dword ptr [EBX + 0x1010],0x0    ; 0051a3c9
    MOV dword ptr [EBX + 0x1458],0x0    ; 0051a3d3
    ADD ESP,0x4                         ; 0051a3dd
    MOV dword ptr [EBX + 0x145c],0x0    ; 0051a3e0
    POP EBX                             ; 0051a3ea
    RET                                 ; 0051a3eb

