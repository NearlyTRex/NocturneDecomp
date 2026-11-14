; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_clearMission_FUN_004f5b70(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_004e4c70 at 004e4c9d
;
; Called Functions:
;   core_mission.cpp_CDemonMission_clearMissionData_FUN_004f5b80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f5b70
        ;   Label: core_mission.cpp_CDemonMission_clearMission_FUN_004f5b70
    PUSH EDX                            ; 004f5b74
    CALL core_mission.cpp_CDemonMission_clearMissionData_FUN_004f5b80 ; 004f5b75
        ;   XREF to: 004f5b80 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_clearMissionData_FUN_004f5b80(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004f5b7a
    RET                                 ; 004f5b7d

