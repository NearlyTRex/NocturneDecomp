; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_clearMissionData_FUN_00522d30(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_mission.cpp_CDemonMission_clearMission_FUN_00522d20 at 00522d25
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 at 00522ec2
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 005244cd
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538206
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_0063899d
;   TerminatedCString s_core_mission_cpp_006389b1
;
; Called Functions:
;   core_mission.cpp_CDemonMission_removeAllActors_FUN_00523f50
;   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522d30
        ;   Label: core_mission.cpp_CDemonMission_clearMissionData_FUN_00522d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00522d31
    PUSH 0x84                           ; 00522d35
    PUSH 0x63899d                       ; 00522d3a | = "..\\core\\mission.cpp"
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 00522d3f
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * source_filename, int source_line)
    ADD ESP,0x8                         ; 00522d44
    PUSH EBX                            ; 00522d47
    CALL core_mission.cpp_CDemonMission_removeAllActors_FUN_00523f50 ; 00522d48
        ;   XREF to: 00523f50 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeAllActors_FUN_00523f50(CDemonMission * this_ptr)
    MOV dword ptr [EBX + 0x144],0x0     ; 00522d4d
    MOV byte ptr [EBX + 0x44],0x0       ; 00522d57
    ADD ESP,0x4                         ; 00522d5b
    MOV dword ptr [EBX + 0xc],0x0       ; 00522d5e
    PUSH 0x8f                           ; 00522d65
    MOV dword ptr [EBX + 0x888],0x0     ; 00522d6a
    PUSH 0x6389b1                       ; 00522d74 | = "..\\core\\mission.cpp"
    MOV dword ptr [EBX + 0x88c],0x0     ; 00522d79
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 00522d83
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * source_filename, int source_line)
    ADD ESP,0x8                         ; 00522d88
    POP EBX                             ; 00522d8b
    RET                                 ; 00522d8c

