; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_clearMission_FUN_0051a3a0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_00503a30 at 00503a5d
;
; Called Functions:
;   core_mission.cpp_CDemonMission_clearMissionData_FUN_0051a3b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051a3a0
        ;   Label: core_mission.cpp_CDemonMission_clearMission_FUN_0051a3a0
    PUSH EDX                            ; 0051a3a4
    CALL core_mission.cpp_CDemonMission_clearMissionData_FUN_0051a3b0 ; 0051a3a5
        ;   XREF to: 0051a3b0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_clearMissionData_FUN_0051a3b0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0051a3aa
    RET                                 ; 0051a3ad

