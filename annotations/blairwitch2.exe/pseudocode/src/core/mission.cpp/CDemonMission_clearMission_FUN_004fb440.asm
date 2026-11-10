; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_clearMission_FUN_004fb440(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_004e4e20 at 004e4e4d
;
; Called Functions:
;   core_mission.cpp_FUN_004fb450
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fb440
        ;   Label: core_mission.cpp_CDemonMission_clearMission_FUN_004fb440
    PUSH EDX                            ; 004fb444
    CALL core_mission.cpp_FUN_004fb450  ; 004fb445
        ;   XREF to: 004fb450 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fb450()
    ADD ESP,0x4                         ; 004fb44a
    RET                                 ; 004fb44d

