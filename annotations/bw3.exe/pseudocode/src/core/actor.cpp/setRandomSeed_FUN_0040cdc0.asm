; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_setRandomSeed_FUN_0040cdc0(uint seed_value)
;
; Parameters:
; uint             Stack[0x4]:4   seed_value
;
; XREF[3]:
;   core_game.cpp_CGame_process_FUN_004bf4b0 at 004bf4e6
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_00507790 at 00507a05
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 at 00506036
;
; Referenced Globals:
;   undefined4 DAT_007dfce8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040cdc0
        ;   Label: core_actor.cpp_setRandomSeed_FUN_0040cdc0
    MOV [0x007dfce8],EAX                ; 0040cdc4 | DAT_007dfce8
    RET                                 ; 0040cdc9

