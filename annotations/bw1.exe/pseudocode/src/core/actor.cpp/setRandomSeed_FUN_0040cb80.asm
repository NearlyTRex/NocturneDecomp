; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_setRandomSeed_FUN_0040cb80(uint seed_value)
;
; Parameters:
; uint             Stack[0x4]:4   seed_value
;
; XREF[3]:
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d8096
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_0052fee0 at 00530146
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e72e
;
; Referenced Globals:
;   undefined4 DAT_007c3368
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040cb80
        ;   Label: core_actor.cpp_setRandomSeed_FUN_0040cb80
    MOV [0x007c3368],EAX                ; 0040cb84 | DAT_007c3368
    RET                                 ; 0040cb89

