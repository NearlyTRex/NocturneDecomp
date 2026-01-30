; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mission_cpp_CDemonMission_checkMemory_FUN_00522d20(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_main.c_finalizeGameSystems_FUN_00508570 at 005087cf
;   core_msnedit.cpp_CDemonMission_FUN_0053ccf0 at 0053cef4
;
; Called Functions:
;   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00522d20
        ;   Label: core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20
    PUSH EDX                            ; 00522d24
    CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30 ; 00522d25
        ;   XREF to: 00522d30 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00522d2a
    RET                                 ; 00522d2d

