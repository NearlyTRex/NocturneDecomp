; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_FUN_004d7e90(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_004c90e0 at 004c933c
;
; Called Functions:
;   core_mission.cpp_CDemonMission_FUN_004d7ea0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d7e90
        ;   Label: core_mission.cpp_CDemonMission_FUN_004d7e90
    PUSH EDX                            ; 004d7e94
    CALL core_mission.cpp_CDemonMission_FUN_004d7ea0 ; 004d7e95
        ;   XREF to: 004d7ea0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_004d7ea0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d7e9a
    RET                                 ; 004d7e9d

