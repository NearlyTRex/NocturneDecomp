; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_setRandomSeed_FUN_0040dd20(uint seed_value)
;
; Parameters:
; uint             Stack[0x4]:4   seed_value
;
; XREF[3]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a6046
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0 at 004ed52d
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004ebb2a
;
; Referenced Globals:
;   undefined4 DAT_007641b8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040dd20
        ;   Label: core_actor.cpp_setRandomSeed_FUN_0040dd20
    MOV [0x007641b8],EAX                ; 0040dd24 | DAT_007641b8
    RET                                 ; 0040dd29

