; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_onSetLoaded_FUN_004bfa70(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
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
        ;   Label: core_game.cpp_CGame_onSetLoaded_FUN_004bfa70
    RET                                 ; 004bfa7a

