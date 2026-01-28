; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_setRandomSeed_FUN_0040cb90(uint seed_value)
;
; Parameters:
; uint             Stack[0x4]:4   seed_value
;
; XREF[3]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e31c6
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 at 005433ad
;   core_netgame.cpp_FUN_00541390 at 0054199a
;
; Referenced Globals:
;   uint g_RandomSeedValue
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040cb90
        ;   Label: core_actor.cpp_setRandomSeed_FUN_0040cb90
    MOV [0x00822368],EAX                ; 0040cb94 | g_RandomSeedValue
    RET                                 ; 0040cb99

