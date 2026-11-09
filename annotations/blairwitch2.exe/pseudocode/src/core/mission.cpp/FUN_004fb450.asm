; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004fb450(int param_1)
;
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590 at 004fb5a2
;   core_mission.cpp_CDemonMission_run_FUN_004fcb00 at 004fcbad
;   core_mission.cpp_FUN_004fb440 at 004fb445
;
; Called Functions:
;   core_mission.cpp_FUN_004fc640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb450
        ;   Label: core_mission.cpp_FUN_004fb450
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fb451
    PUSH EBX                            ; 004fb455
    CALL core_mission.cpp_FUN_004fc640  ; 004fb456
        ;   XREF to: 004fc640 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc640()
    MOV dword ptr [EBX + 0x4],0x0       ; 004fb45b
    MOV byte ptr [EBX + 0x1014],0x0     ; 004fb462
    MOV dword ptr [EBX + 0x1010],0x0    ; 004fb469
    MOV dword ptr [EBX + 0x1454],0x0    ; 004fb473
    ADD ESP,0x4                         ; 004fb47d
    MOV dword ptr [EBX + 0x1458],0x0    ; 004fb480
    POP EBX                             ; 004fb48a
    RET                                 ; 004fb48b

