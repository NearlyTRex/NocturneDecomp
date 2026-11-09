; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004bfa70(void)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_loadSet_FUN_004fc6b0 at 004fc730
;
; Referenced Globals:
;   undefined4 DAT_01cb811c
;
; *****************************************************************************

section .text

    MOV dword ptr [0x01cb811c],0x1      ; 004bfa70 | DAT_01cb811c
        ;   Label: core_game.cpp_FUN_004bfa70
    RET                                 ; 004bfa7a

