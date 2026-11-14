; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_setRandomSeed_FUN_0040cee0(uint seed_value)
;
; Parameters:
; uint             Stack[0x4]:4   seed_value
;
; XREF[3]:
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bd5a6
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0 at 0050ef25
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d556
;
; Referenced Globals:
;   undefined4 DAT_007bc368
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040cee0
        ;   Label: core_actor.cpp_setRandomSeed_FUN_0040cee0
    MOV [0x007bc368],EAX                ; 0040cee4 | DAT_007bc368
    RET                                 ; 0040cee9

