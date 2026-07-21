; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d7ea0(int param_1)
;
;
; XREF[3]:
;   FUN_004d7e90 at 004d7e95
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 at 004d7ff2
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d94ed
;
; Called Functions:
;   FUN_004d8fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7ea0
        ;   Label: FUN_004d7ea0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d7ea1
    PUSH EBX                            ; 004d7ea5
    CALL FUN_004d8fc0                   ; 004d7ea6
        ;   XREF to: 004d8fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8fc0()
    MOV dword ptr [EBX + 0x110],0x0     ; 004d7eab
    MOV byte ptr [EBX + 0x10],0x0       ; 004d7eb5
    MOV dword ptr [EBX + 0xc],0x0       ; 004d7eb9
    MOV dword ptr [EBX + 0x854],0x0     ; 004d7ec0
    ADD ESP,0x4                         ; 004d7eca
    MOV dword ptr [EBX + 0x858],0x0     ; 004d7ecd
    POP EBX                             ; 004d7ed7
    RET                                 ; 004d7ed8

